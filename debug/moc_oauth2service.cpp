/****************************************************************************
** Meta object code from reading C++ file 'oauth2service.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../oauth2service.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'oauth2service.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OAuth2Service_t {
    QByteArrayData data[22];
    char stringdata0[322];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OAuth2Service_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OAuth2Service_t qt_meta_stringdata_OAuth2Service = {
    {
QT_MOC_LITERAL(0, 0, 13), // "OAuth2Service"
QT_MOC_LITERAL(1, 14, 25), // "userAuthorizationRequired"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 10), // "deviceCode"
QT_MOC_LITERAL(4, 52, 8), // "userCode"
QT_MOC_LITERAL(5, 61, 15), // "verificationUrl"
QT_MOC_LITERAL(6, 77, 9), // "expiresIn"
QT_MOC_LITERAL(7, 87, 8), // "interval"
QT_MOC_LITERAL(8, 96, 19), // "accessTokenReceived"
QT_MOC_LITERAL(9, 116, 11), // "accessToken"
QT_MOC_LITERAL(10, 128, 9), // "tokenType"
QT_MOC_LITERAL(11, 138, 12), // "refreshToken"
QT_MOC_LITERAL(12, 151, 18), // "tokenRetrieveError"
QT_MOC_LITERAL(13, 170, 5), // "error"
QT_MOC_LITERAL(14, 176, 16), // "errorDescription"
QT_MOC_LITERAL(15, 193, 16), // "retrieveUserCode"
QT_MOC_LITERAL(16, 210, 19), // "retrieveAccessToken"
QT_MOC_LITERAL(17, 230, 18), // "refreshAccessToken"
QT_MOC_LITERAL(18, 249, 23), // "userCodeRequestFinished"
QT_MOC_LITERAL(19, 273, 14), // "QNetworkReply*"
QT_MOC_LITERAL(20, 288, 12), // "networkReply"
QT_MOC_LITERAL(21, 301, 20) // "tokenRequestFinished"

    },
    "OAuth2Service\0userAuthorizationRequired\0"
    "\0deviceCode\0userCode\0verificationUrl\0"
    "expiresIn\0interval\0accessTokenReceived\0"
    "accessToken\0tokenType\0refreshToken\0"
    "tokenRetrieveError\0error\0errorDescription\0"
    "retrieveUserCode\0retrieveAccessToken\0"
    "refreshAccessToken\0userCodeRequestFinished\0"
    "QNetworkReply*\0networkReply\0"
    "tokenRequestFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OAuth2Service[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    5,   54,    2, 0x06 /* Public */,
       8,    4,   65,    2, 0x06 /* Public */,
      12,    2,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    0,   79,    2, 0x0a /* Public */,
      16,    1,   80,    2, 0x0a /* Public */,
      17,    1,   83,    2, 0x0a /* Public */,
      18,    1,   86,    2, 0x08 /* Private */,
      21,    1,   89,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::Int,    3,    4,    5,    6,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::QString,    9,   10,    6,   11,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   13,   14,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, 0x80000000 | 19,   20,

       0        // eod
};

void OAuth2Service::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OAuth2Service *_t = static_cast<OAuth2Service *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->userAuthorizationRequired((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 1: _t->accessTokenReceived((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 2: _t->tokenRetrieveError((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->retrieveUserCode(); break;
        case 4: _t->retrieveAccessToken((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->refreshAccessToken((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->userCodeRequestFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 7: _t->tokenRequestFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (OAuth2Service::*_t)(QString , QString , QString , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OAuth2Service::userAuthorizationRequired)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (OAuth2Service::*_t)(QString , QString , int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OAuth2Service::accessTokenReceived)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (OAuth2Service::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OAuth2Service::tokenRetrieveError)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject OAuth2Service::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_OAuth2Service.data,
      qt_meta_data_OAuth2Service,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *OAuth2Service::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OAuth2Service::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OAuth2Service.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OAuth2Service::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void OAuth2Service::userAuthorizationRequired(QString _t1, QString _t2, QString _t3, int _t4, int _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OAuth2Service::accessTokenReceived(QString _t1, QString _t2, int _t3, QString _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OAuth2Service::tokenRetrieveError(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_GoogleOAuth2Service_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GoogleOAuth2Service_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GoogleOAuth2Service_t qt_meta_stringdata_GoogleOAuth2Service = {
    {
QT_MOC_LITERAL(0, 0, 19) // "GoogleOAuth2Service"

    },
    "GoogleOAuth2Service"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GoogleOAuth2Service[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void GoogleOAuth2Service::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject GoogleOAuth2Service::staticMetaObject = {
    { &OAuth2Service::staticMetaObject, qt_meta_stringdata_GoogleOAuth2Service.data,
      qt_meta_data_GoogleOAuth2Service,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *GoogleOAuth2Service::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GoogleOAuth2Service::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GoogleOAuth2Service.stringdata0))
        return static_cast<void*>(this);
    return OAuth2Service::qt_metacast(_clname);
}

int GoogleOAuth2Service::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = OAuth2Service::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
