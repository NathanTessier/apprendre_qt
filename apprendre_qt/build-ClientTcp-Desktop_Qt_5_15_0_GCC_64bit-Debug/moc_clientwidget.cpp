/****************************************************************************
** Meta object code from reading C++ file 'clientwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../ClientTcp/clientwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'clientwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ClientWidget_t {
    QByteArrayData data[21];
    char stringdata0[487];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ClientWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ClientWidget_t qt_meta_stringdata_ClientWidget = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ClientWidget"
QT_MOC_LITERAL(1, 13, 31), // "on_pushButton_Connexion_clicked"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 29), // "on_pushButton_NomOrdi_clicked"
QT_MOC_LITERAL(4, 76, 29), // "on_pushButton_NomUser_clicked"
QT_MOC_LITERAL(5, 106, 34), // "on_pushButton_Architecture_cl..."
QT_MOC_LITERAL(6, 141, 32), // "on_pushButton_Processeur_clicked"
QT_MOC_LITERAL(7, 174, 22), // "onQTcpSocket_connected"
QT_MOC_LITERAL(8, 197, 25), // "onQTcpSocket_disconnected"
QT_MOC_LITERAL(9, 223, 18), // "onQTcpSocket_error"
QT_MOC_LITERAL(10, 242, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(11, 271, 11), // "socketError"
QT_MOC_LITERAL(12, 283, 22), // "onQTcpSocket_hostFound"
QT_MOC_LITERAL(13, 306, 25), // "onQTcpSocket_stateChanged"
QT_MOC_LITERAL(14, 332, 28), // "QAbstractSocket::SocketState"
QT_MOC_LITERAL(15, 361, 11), // "socketState"
QT_MOC_LITERAL(16, 373, 25), // "onQTcpSocket_aboutToClose"
QT_MOC_LITERAL(17, 399, 25), // "onQTcpSocket_bytesWritten"
QT_MOC_LITERAL(18, 425, 5), // "bytes"
QT_MOC_LITERAL(19, 431, 32), // "onQTcpSocket_readChannelFinished"
QT_MOC_LITERAL(20, 464, 22) // "onQTcpSocket_readyRead"

    },
    "ClientWidget\0on_pushButton_Connexion_clicked\0"
    "\0on_pushButton_NomOrdi_clicked\0"
    "on_pushButton_NomUser_clicked\0"
    "on_pushButton_Architecture_clicked\0"
    "on_pushButton_Processeur_clicked\0"
    "onQTcpSocket_connected\0onQTcpSocket_disconnected\0"
    "onQTcpSocket_error\0QAbstractSocket::SocketError\0"
    "socketError\0onQTcpSocket_hostFound\0"
    "onQTcpSocket_stateChanged\0"
    "QAbstractSocket::SocketState\0socketState\0"
    "onQTcpSocket_aboutToClose\0"
    "onQTcpSocket_bytesWritten\0bytes\0"
    "onQTcpSocket_readChannelFinished\0"
    "onQTcpSocket_readyRead"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClientWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    0,   89,    2, 0x08 /* Private */,
       8,    0,   90,    2, 0x08 /* Private */,
       9,    1,   91,    2, 0x08 /* Private */,
      12,    0,   94,    2, 0x08 /* Private */,
      13,    1,   95,    2, 0x08 /* Private */,
      16,    0,   98,    2, 0x08 /* Private */,
      17,    1,   99,    2, 0x08 /* Private */,
      19,    0,  102,    2, 0x08 /* Private */,
      20,    0,  103,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::ULongLong,   18,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ClientWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ClientWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_Connexion_clicked(); break;
        case 1: _t->on_pushButton_NomOrdi_clicked(); break;
        case 2: _t->on_pushButton_NomUser_clicked(); break;
        case 3: _t->on_pushButton_Architecture_clicked(); break;
        case 4: _t->on_pushButton_Processeur_clicked(); break;
        case 5: _t->onQTcpSocket_connected(); break;
        case 6: _t->onQTcpSocket_disconnected(); break;
        case 7: _t->onQTcpSocket_error((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 8: _t->onQTcpSocket_hostFound(); break;
        case 9: _t->onQTcpSocket_stateChanged((*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[1]))); break;
        case 10: _t->onQTcpSocket_aboutToClose(); break;
        case 11: _t->onQTcpSocket_bytesWritten((*reinterpret_cast< quint64(*)>(_a[1]))); break;
        case 12: _t->onQTcpSocket_readChannelFinished(); break;
        case 13: _t->onQTcpSocket_readyRead(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketState >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ClientWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ClientWidget.data,
    qt_meta_data_ClientWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ClientWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClientWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ClientWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ClientWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
