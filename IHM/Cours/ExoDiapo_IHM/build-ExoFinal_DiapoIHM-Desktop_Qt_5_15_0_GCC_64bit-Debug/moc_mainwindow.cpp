/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../ExoFinal_DiapoIHM/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[17];
    char stringdata0[351];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 26), // "on_WindowsCheckBox_clicked"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 7), // "checked"
QT_MOC_LITERAL(4, 47, 22), // "on_OSXCheckBox_clicked"
QT_MOC_LITERAL(5, 70, 24), // "on_LinuxCheckBox_clicked"
QT_MOC_LITERAL(6, 95, 29), // "on_WindowsRadioButton_clicked"
QT_MOC_LITERAL(7, 125, 25), // "on_OSXRadioButton_clicked"
QT_MOC_LITERAL(8, 151, 27), // "on_LinuxRadioButton_clicked"
QT_MOC_LITERAL(9, 179, 22), // "on_LinuxButton_clicked"
QT_MOC_LITERAL(10, 202, 24), // "on_WindowsButton_clicked"
QT_MOC_LITERAL(11, 227, 20), // "on_OSXButton_clicked"
QT_MOC_LITERAL(12, 248, 18), // "on_MenuC_triggered"
QT_MOC_LITERAL(13, 267, 21), // "on_MenuJava_triggered"
QT_MOC_LITERAL(14, 289, 20), // "on_MenuCPP_triggered"
QT_MOC_LITERAL(15, 310, 20), // "on_MenuPHP_triggered"
QT_MOC_LITERAL(16, 331, 19) // "on_MenuJS_triggered"

    },
    "MainWindow\0on_WindowsCheckBox_clicked\0"
    "\0checked\0on_OSXCheckBox_clicked\0"
    "on_LinuxCheckBox_clicked\0"
    "on_WindowsRadioButton_clicked\0"
    "on_OSXRadioButton_clicked\0"
    "on_LinuxRadioButton_clicked\0"
    "on_LinuxButton_clicked\0on_WindowsButton_clicked\0"
    "on_OSXButton_clicked\0on_MenuC_triggered\0"
    "on_MenuJava_triggered\0on_MenuCPP_triggered\0"
    "on_MenuPHP_triggered\0on_MenuJS_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

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
       1,    1,   84,    2, 0x08 /* Private */,
       4,    1,   87,    2, 0x08 /* Private */,
       5,    1,   90,    2, 0x08 /* Private */,
       6,    1,   93,    2, 0x08 /* Private */,
       7,    1,   96,    2, 0x08 /* Private */,
       8,    1,   99,    2, 0x08 /* Private */,
       9,    0,  102,    2, 0x08 /* Private */,
      10,    0,  103,    2, 0x08 /* Private */,
      11,    0,  104,    2, 0x08 /* Private */,
      12,    0,  105,    2, 0x08 /* Private */,
      13,    0,  106,    2, 0x08 /* Private */,
      14,    0,  107,    2, 0x08 /* Private */,
      15,    0,  108,    2, 0x08 /* Private */,
      16,    0,  109,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_WindowsCheckBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_OSXCheckBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_LinuxCheckBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_WindowsRadioButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_OSXRadioButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_LinuxRadioButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_LinuxButton_clicked(); break;
        case 7: _t->on_WindowsButton_clicked(); break;
        case 8: _t->on_OSXButton_clicked(); break;
        case 9: _t->on_MenuC_triggered(); break;
        case 10: _t->on_MenuJava_triggered(); break;
        case 11: _t->on_MenuCPP_triggered(); break;
        case 12: _t->on_MenuPHP_triggered(); break;
        case 13: _t->on_MenuJS_triggered(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
