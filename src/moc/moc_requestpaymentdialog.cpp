/****************************************************************************
** Meta object code from reading C++ file 'requestpaymentdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "requestpaymentdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'requestpaymentdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_RequestPaymentDialog_t {
    QByteArrayData data[14];
    char stringdata[256];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RequestPaymentDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RequestPaymentDialog_t qt_meta_stringdata_RequestPaymentDialog = {
    {
QT_MOC_LITERAL(0, 0, 20), // "RequestPaymentDialog"
QT_MOC_LITERAL(1, 21, 17), // "setCurrentAccount"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 11), // "accountName"
QT_MOC_LITERAL(4, 52, 12), // "clearInvoice"
QT_MOC_LITERAL(5, 65, 11), // "setAccounts"
QT_MOC_LITERAL(6, 77, 12), // "accountNames"
QT_MOC_LITERAL(7, 90, 9), // "setQRCode"
QT_MOC_LITERAL(8, 100, 7), // "address"
QT_MOC_LITERAL(9, 108, 27), // "on_newInvoiceButton_clicked"
QT_MOC_LITERAL(10, 136, 33), // "on_addressClipboardButton_cli..."
QT_MOC_LITERAL(11, 170, 32), // "on_scriptClipboardButton_clicked"
QT_MOC_LITERAL(12, 203, 29), // "on_urlClipboardButton_clicked"
QT_MOC_LITERAL(13, 233, 22) // "on_closeButton_clicked"

    },
    "RequestPaymentDialog\0setCurrentAccount\0"
    "\0accountName\0clearInvoice\0setAccounts\0"
    "accountNames\0setQRCode\0address\0"
    "on_newInvoiceButton_clicked\0"
    "on_addressClipboardButton_clicked\0"
    "on_scriptClipboardButton_clicked\0"
    "on_urlClipboardButton_clicked\0"
    "on_closeButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RequestPaymentDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x0a /* Public */,
       4,    0,   62,    2, 0x0a /* Public */,
       5,    1,   63,    2, 0x08 /* Private */,
       7,    1,   66,    2, 0x08 /* Private */,
       9,    0,   69,    2, 0x08 /* Private */,
      10,    0,   70,    2, 0x08 /* Private */,
      11,    0,   71,    2, 0x08 /* Private */,
      12,    0,   72,    2, 0x08 /* Private */,
      13,    0,   73,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void RequestPaymentDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RequestPaymentDialog *_t = static_cast<RequestPaymentDialog *>(_o);
        switch (_id) {
        case 0: _t->setCurrentAccount((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->clearInvoice(); break;
        case 2: _t->setAccounts((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 3: _t->setQRCode((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_newInvoiceButton_clicked(); break;
        case 5: _t->on_addressClipboardButton_clicked(); break;
        case 6: _t->on_scriptClipboardButton_clicked(); break;
        case 7: _t->on_urlClipboardButton_clicked(); break;
        case 8: _t->on_closeButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject RequestPaymentDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_RequestPaymentDialog.data,
      qt_meta_data_RequestPaymentDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *RequestPaymentDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RequestPaymentDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_RequestPaymentDialog.stringdata))
        return static_cast<void*>(const_cast< RequestPaymentDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int RequestPaymentDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
