/****************************************************************************
** Meta object code from reading C++ file 'oshaxiswca.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../OSHStudio/oshaxiswca.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'oshaxiswca.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OSHaxiswca_t {
    QByteArrayData data[14];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OSHaxiswca_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OSHaxiswca_t qt_meta_stringdata_OSHaxiswca = {
    {
QT_MOC_LITERAL(0, 0, 10), // "OSHaxiswca"
QT_MOC_LITERAL(1, 11, 14), // "MaxCalibCanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 4), // "text"
QT_MOC_LITERAL(4, 32, 14), // "MinCalibCanged"
QT_MOC_LITERAL(5, 47, 16), // "AutoCalibToggled"
QT_MOC_LITERAL(6, 64, 5), // "state"
QT_MOC_LITERAL(7, 70, 3), // "map"
QT_MOC_LITERAL(8, 74, 7), // "int32_t"
QT_MOC_LITERAL(9, 82, 1), // "x"
QT_MOC_LITERAL(10, 84, 6), // "in_min"
QT_MOC_LITERAL(11, 91, 6), // "in_max"
QT_MOC_LITERAL(12, 98, 7), // "out_min"
QT_MOC_LITERAL(13, 106, 7) // "out_max"

    },
    "OSHaxiswca\0MaxCalibCanged\0\0text\0"
    "MinCalibCanged\0AutoCalibToggled\0state\0"
    "map\0int32_t\0x\0in_min\0in_max\0out_min\0"
    "out_max"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OSHaxiswca[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x08 /* Private */,
       4,    1,   37,    2, 0x08 /* Private */,
       5,    1,   40,    2, 0x08 /* Private */,
       7,    5,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Bool,    6,
    0x80000000 | 8, 0x80000000 | 8, 0x80000000 | 8, 0x80000000 | 8, 0x80000000 | 8, 0x80000000 | 8,    9,   10,   11,   12,   13,

       0        // eod
};

void OSHaxiswca::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OSHaxiswca *_t = static_cast<OSHaxiswca *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->MaxCalibCanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->MinCalibCanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->AutoCalibToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: { int32_t _r = _t->map((*reinterpret_cast< int32_t(*)>(_a[1])),(*reinterpret_cast< int32_t(*)>(_a[2])),(*reinterpret_cast< int32_t(*)>(_a[3])),(*reinterpret_cast< int32_t(*)>(_a[4])),(*reinterpret_cast< int32_t(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< int32_t*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OSHaxiswca::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_OSHaxiswca.data,
      qt_meta_data_OSHaxiswca,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *OSHaxiswca::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OSHaxiswca::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OSHaxiswca.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int OSHaxiswca::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
