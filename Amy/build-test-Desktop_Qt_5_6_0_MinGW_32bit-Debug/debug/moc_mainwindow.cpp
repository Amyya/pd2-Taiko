/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Amy/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Taiko_t {
    QByteArrayData data[12];
    char stringdata0[145];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Taiko_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Taiko_t qt_meta_stringdata_Taiko = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Taiko"
QT_MOC_LITERAL(1, 6, 9), // "red_point"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 10), // "blue_point"
QT_MOC_LITERAL(4, 28, 9), // "red_false"
QT_MOC_LITERAL(5, 38, 10), // "blue_false"
QT_MOC_LITERAL(6, 49, 16), // "on_Start_clicked"
QT_MOC_LITERAL(7, 66, 10), // "Count_Down"
QT_MOC_LITERAL(8, 77, 15), // "on_Exit_clicked"
QT_MOC_LITERAL(9, 93, 19), // "on_GameOver_clicked"
QT_MOC_LITERAL(10, 113, 18), // "on_Restart_clicked"
QT_MOC_LITERAL(11, 132, 12) // "appearTarget"

    },
    "Taiko\0red_point\0\0blue_point\0red_false\0"
    "blue_false\0on_Start_clicked\0Count_Down\0"
    "on_Exit_clicked\0on_GameOver_clicked\0"
    "on_Restart_clicked\0appearTarget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Taiko[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x0a /* Public */,
       3,    0,   65,    2, 0x0a /* Public */,
       4,    0,   66,    2, 0x0a /* Public */,
       5,    0,   67,    2, 0x0a /* Public */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    0,   73,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
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

void Taiko::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Taiko *_t = static_cast<Taiko *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->red_point(); break;
        case 1: _t->blue_point(); break;
        case 2: _t->red_false(); break;
        case 3: _t->blue_false(); break;
        case 4: _t->on_Start_clicked(); break;
        case 5: _t->Count_Down(); break;
        case 6: _t->on_Exit_clicked(); break;
        case 7: _t->on_GameOver_clicked(); break;
        case 8: _t->on_Restart_clicked(); break;
        case 9: _t->appearTarget(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Taiko::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Taiko.data,
      qt_meta_data_Taiko,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Taiko::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Taiko::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Taiko.stringdata0))
        return static_cast<void*>(const_cast< Taiko*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Taiko::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
