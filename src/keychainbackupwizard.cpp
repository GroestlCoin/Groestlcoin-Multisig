///////////////////////////////////////////////////////////////////////////////
//
// mSIGNA
//
// keychainbackupwizard.cpp
//
// Copyright (c) 2015 Eric Lombrozo
//
// All Rights Reserved.

#include "keychainbackupwizard.h"
#include "wordlistvalidator.h"

#include <CoinCore/bip39.h>

#include <QDialogButtonBox>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPlainTextEdit>
#include <QLineEdit>
#include <QLabel>

#include <stdexcept>

KeychainBackupWizard::KeychainBackupWizard(const QString& name, const secure_bytes_t& seed, QWidget* parent)
    : QWizard(parent)
{
    addPage(new WordlistViewPage(name, seed));
    addPage(new WordlistVerifyPage(name, seed));
    addPage(new WordlistCompletePage(name));
    setWindowTitle(tr("Keychain Backup"));
}


WordlistViewPage::WordlistViewPage(const QString& name, const secure_bytes_t& seed, QWidget* parent)
    : QWizardPage(parent)
{
    setTitle(tr("Step 1: Copy"));
    setSubTitle(tr("Keychain: ") + name);

    QLabel* promptLabel = new QLabel(tr("IMPORTANT: Please write down the following list of words. In the event you lose your data you can recover your keychain by entering this list."));
    promptLabel->setWordWrap(true);

    wordlistEdit = new QPlainTextEdit();
    wordlistEdit->setReadOnly(true);
    wordlistEdit->setPlainText(Coin::BIP39::toWordlist(seed).c_str());

    QVBoxLayout* layout = new QVBoxLayout();
    layout->addWidget(promptLabel);
    layout->addWidget(wordlistEdit);
    setLayout(layout);
}

WordlistVerifyPage::WordlistVerifyPage(const QString& name, const secure_bytes_t& seed, QWidget* parent)
    : QWizardPage(parent)
{
    using namespace Coin;

    setTitle(tr("Step 2: Verify"));
    setSubTitle(tr("Keychain: ") + name);

    QLabel* promptLabel = new QLabel(tr("Please enter the words in the correct order below:"));
    promptLabel->setWordWrap(true);

    wordlist = BIP39::toWordlist(seed).c_str();

    wordlistEdit = new QLineEdit();
    wordlistEdit->setValidator(new WordlistValidator(BIP39::minWordLen(), BIP39::maxWordLen(), this));
    QObject::connect(wordlistEdit, &QLineEdit::textChanged, [=]() { emit completeChanged(); });

    QVBoxLayout* layout = new QVBoxLayout();
    layout->addWidget(promptLabel);
    layout->addWidget(wordlistEdit);
    setLayout(layout);
}

/*
void WordlistVerifyPage::keyPressEvent(QKeyEvent* event)
{
    QWizardPage::keyPressEvent(event);
}
*/

bool WordlistVerifyPage::isComplete() const
{
    // TODO: convert to lowercase and disallow invalid characters and additional whitespace
    return (wordlist == wordlistEdit->text());
}

WordlistCompletePage::WordlistCompletePage(const QString& name, QWidget* parent)
    : QWizardPage(parent)
{
    setTitle(tr("Step 3: Put in safe, secure place"));
    setSubTitle(tr("Keychain: ") + name);

    QLabel* promptLabel = new QLabel(tr("IMPORTANT: Keep the wordlist in a safe place."));
    promptLabel->setWordWrap(true);

    QVBoxLayout* layout = new QVBoxLayout();
    layout->addWidget(promptLabel);
    setLayout(layout);
}
