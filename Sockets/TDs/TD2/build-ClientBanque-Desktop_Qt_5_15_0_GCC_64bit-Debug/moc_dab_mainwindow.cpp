/****************************************************************************
** Meta object code from reading C++ file 'dab_mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../ClientBanque/dab_mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dab_mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DAB_MainWindow_t {
    QByteArrayData data[14];
    char stringdata0[304];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DAB_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DAB_MainWindow_t qt_meta_stringdata_DAB_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 14), // "DAB_MainWindow"
QT_MOC_LITERAL(1, 15, 30), // "on_PushButtonConnexion_clicked"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 26), // "on_pushButtonEnvoi_clicked"
QT_MOC_LITERAL(4, 74, 30), // "on_pushButtonNumCompte_clicked"
QT_MOC_LITERAL(5, 105, 22), // "onQTcpSocket_connected"
QT_MOC_LITERAL(6, 128, 25), // "onQTcpSocket_disconnected"
QT_MOC_LITERAL(7, 154, 18), // "onQTcpSocket_error"
QT_MOC_LITERAL(8, 173, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(9, 202, 11), // "socketError"
QT_MOC_LITERAL(10, 214, 25), // "onQTcpSocket_stateChanged"
QT_MOC_LITERAL(11, 240, 28), // "QAbstractSocket::SocketState"
QT_MOC_LITERAL(12, 269, 11), // "socketState"
QT_MOC_LITERAL(13, 281, 22) // "onQTcpSocket_readyRead"

    },
    "DAB_MainWindow\0on_PushButtonConnexion_clicked\0"
    "\0on_pushButtonEnvoi_clicked\0"
    "on_pushButtonNumCompte_clicked\0"
    "onQTcpSocket_connected\0onQTcpSocket_disconnected\0"
    "onQTcpSocket_error\0QAbstractSocket::SocketError\0"
    "socketError\0onQTcpSocket_stateChanged\0"
    "QAbstractSocket::SocketState\0socketState\0"
    "onQTcpSocket_readyRead"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DAB_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    1,   59,    2, 0x08 /* Private */,
      10,    1,   62,    2, 0x08 /* Private */,
      13,    0,   65,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,

       0        // eod
};

void DAB_MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DAB_MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_PushButtonConnexion_clicked(); break;
        case 1: _t->on_pushButtonEnvoi_clicked(); break;
        case 2: _t->on_pushButtonNumCompte_clicked(); break;
        case 3: _t->onQTcpSocket_connected(); break;
        case 4: _t->onQTcpSocket_disconnected(); break;
        case 5: _t->onQTcpSocket_error((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 6: _t->onQTcpSocket_stateChanged((*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[1]))); break;
        case 7: _t->onQTcpSocket_readyRead(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketState >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DAB_MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_DAB_MainWindow.data,
    qt_meta_data_DAB_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DAB_MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DAB_MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DAB_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int DAB_MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
