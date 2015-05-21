O = moc
S = .


all : $O\moc_aboutdialog.cpp $O\moc_acceptlicensedialog.cpp moc_accountmodel.cpp moc_accountview.cpp moc_commandserver.cpp moc_createtxdialog.cpp \
	moc_currencyunitdialog.cpp moc_currencyvalidator.cpp moc_entropydialog.cpp moc_hexvalidator.cpp moc_importbip32dialog.cpp moc_importbip39dialog.cpp \
	moc_keychainbackupdialog.cpp moc_keychainbackupwizard.cpp moc_keychainmodel.cpp moc_keychainview.cpp moc_mainwindow.cpp moc_networkselectiondialog.cpp  moc_networksettingsdialog.cpp \
	moc_newaccountdialog.cpp moc_newkeychaindialog.cpp moc_passphrasedialog.cpp moc_quicknewaccountdialog.cpp moc_rawtxdialog.cpp moc_requestpaymentdialog.cpp moc_scriptdialog.cpp moc_scriptmodel.cpp \
	moc_scriptview.cpp moc_setpassphrasedialog.cpp moc_signatureactions.cpp moc_signaturedialog.cpp moc_signaturemodel.cpp moc_signatureview.cpp moc_splashscreen.cpp moc_txactions.cpp \
	moc_txmodel.cpp moc_txsearchdialog.cpp moc_txview.cpp moc_unspenttxoutmodel.cpp moc_unspenttxoutview.cpp moc_viewbip32dialog.cpp moc_viewbip39dialog.cpp moc_wordlistvalidator.cpp 



{$S}.h{$O}.cpp : 
	moc	-o $@ $<


moc_aboutdialog.cpp : moc_aboutdialog.h
	moc	-o $@ $<





