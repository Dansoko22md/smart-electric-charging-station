/****************************************************************************
** Meta object code from reading C++ file 'formulaire.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../formulaire.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'formulaire.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Formulaire_t {
    QByteArrayData data[23];
    char stringdata0[407];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Formulaire_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Formulaire_t qt_meta_stringdata_Formulaire = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Formulaire"
QT_MOC_LITERAL(1, 11, 16), // "employeIdentifie"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 27), // "on_pushButton_login_clicked"
QT_MOC_LITERAL(4, 57, 28), // "on_pushButton_signup_clicked"
QT_MOC_LITERAL(5, 86, 29), // "on_pushButton_AJOUTER_clicked"
QT_MOC_LITERAL(6, 116, 29), // "on_pushButton_annuler_clicked"
QT_MOC_LITERAL(7, 146, 28), // "on_pushButton_signin_clicked"
QT_MOC_LITERAL(8, 175, 32), // "on_pushButton_hidden_mdp_clicked"
QT_MOC_LITERAL(9, 208, 31), // "on_pushButton_forgot_pw_clicked"
QT_MOC_LITERAL(10, 240, 10), // "sendEmail1"
QT_MOC_LITERAL(11, 251, 10), // "smtpServer"
QT_MOC_LITERAL(12, 262, 8), // "username"
QT_MOC_LITERAL(13, 271, 8), // "password"
QT_MOC_LITERAL(14, 280, 4), // "from"
QT_MOC_LITERAL(15, 285, 2), // "to"
QT_MOC_LITERAL(16, 288, 7), // "subject"
QT_MOC_LITERAL(17, 296, 4), // "body"
QT_MOC_LITERAL(18, 301, 8), // "mailSent"
QT_MOC_LITERAL(19, 310, 29), // "on_pushButton_scanner_clicked"
QT_MOC_LITERAL(20, 340, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(21, 362, 31), // "on_pushButton_scanAgent_clicked"
QT_MOC_LITERAL(22, 394, 12) // "update_label"

    },
    "Formulaire\0employeIdentifie\0\0"
    "on_pushButton_login_clicked\0"
    "on_pushButton_signup_clicked\0"
    "on_pushButton_AJOUTER_clicked\0"
    "on_pushButton_annuler_clicked\0"
    "on_pushButton_signin_clicked\0"
    "on_pushButton_hidden_mdp_clicked\0"
    "on_pushButton_forgot_pw_clicked\0"
    "sendEmail1\0smtpServer\0username\0password\0"
    "from\0to\0subject\0body\0mailSent\0"
    "on_pushButton_scanner_clicked\0"
    "on_pushButton_clicked\0"
    "on_pushButton_scanAgent_clicked\0"
    "update_label"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Formulaire[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    0,   89,    2, 0x08 /* Private */,
       8,    0,   90,    2, 0x08 /* Private */,
       9,    0,   91,    2, 0x08 /* Private */,
      10,    7,   92,    2, 0x08 /* Private */,
      18,    1,  107,    2, 0x08 /* Private */,
      19,    0,  110,    2, 0x08 /* Private */,
      20,    0,  111,    2, 0x08 /* Private */,
      21,    0,  112,    2, 0x08 /* Private */,
      22,    0,  113,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   11,   12,   13,   14,   15,   16,   17,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Formulaire::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Formulaire *_t = static_cast<Formulaire *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->employeIdentifie(); break;
        case 1: _t->on_pushButton_login_clicked(); break;
        case 2: _t->on_pushButton_signup_clicked(); break;
        case 3: _t->on_pushButton_AJOUTER_clicked(); break;
        case 4: _t->on_pushButton_annuler_clicked(); break;
        case 5: _t->on_pushButton_signin_clicked(); break;
        case 6: _t->on_pushButton_hidden_mdp_clicked(); break;
        case 7: _t->on_pushButton_forgot_pw_clicked(); break;
        case 8: { bool _r = _t->sendEmail1((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< QString(*)>(_a[7])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->mailSent((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->on_pushButton_scanner_clicked(); break;

        case 12: _t->on_pushButton_scanAgent_clicked(); break;
        case 13: _t->update_label(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Formulaire::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Formulaire::employeIdentifie)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Formulaire::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Formulaire.data,
      qt_meta_data_Formulaire,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Formulaire::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Formulaire::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Formulaire.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Formulaire::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void Formulaire::employeIdentifie()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
