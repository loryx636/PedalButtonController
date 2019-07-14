/****************************************************************************
** Meta object code from reading C++ file 'worker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../OSHStudio/worker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'worker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Worker_t {
    QByteArrayData data[11];
    char stringdata0[152];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Worker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Worker_t qt_meta_stringdata_Worker = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Worker"
QT_MOC_LITERAL(1, 7, 25), // "putDisconnectedDeviceInfo"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 22), // "putConnectedDeviceInfo"
QT_MOC_LITERAL(4, 57, 15), // "putConfigPacket"
QT_MOC_LITERAL(5, 73, 8), // "uint8_t*"
QT_MOC_LITERAL(6, 82, 12), // "putACKpacket"
QT_MOC_LITERAL(7, 95, 16), // "putGamepadPacket"
QT_MOC_LITERAL(8, 112, 15), // "putSensorPacket"
QT_MOC_LITERAL(9, 128, 11), // "putHBPacket"
QT_MOC_LITERAL(10, 140, 11) // "processData"

    },
    "Worker\0putDisconnectedDeviceInfo\0\0"
    "putConnectedDeviceInfo\0putConfigPacket\0"
    "uint8_t*\0putACKpacket\0putGamepadPacket\0"
    "putSensorPacket\0putHBPacket\0processData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Worker[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    1,   56,    2, 0x06 /* Public */,
       6,    1,   59,    2, 0x06 /* Public */,
       7,    1,   62,    2, 0x06 /* Public */,
       8,    1,   65,    2, 0x06 /* Public */,
       9,    0,   68,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   69,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void Worker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Worker *_t = static_cast<Worker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->putDisconnectedDeviceInfo(); break;
        case 1: _t->putConnectedDeviceInfo(); break;
        case 2: _t->putConfigPacket((*reinterpret_cast< uint8_t*(*)>(_a[1]))); break;
        case 3: _t->putACKpacket((*reinterpret_cast< uint8_t*(*)>(_a[1]))); break;
        case 4: _t->putGamepadPacket((*reinterpret_cast< uint8_t*(*)>(_a[1]))); break;
        case 5: _t->putSensorPacket((*reinterpret_cast< uint8_t*(*)>(_a[1]))); break;
        case 6: _t->putHBPacket(); break;
        case 7: _t->processData(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Worker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Worker::putDisconnectedDeviceInfo)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Worker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Worker::putConnectedDeviceInfo)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Worker::*)(uint8_t * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Worker::putConfigPacket)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Worker::*)(uint8_t * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Worker::putACKpacket)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Worker::*)(uint8_t * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Worker::putGamepadPacket)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Worker::*)(uint8_t * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Worker::putSensorPacket)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Worker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Worker::putHBPacket)) {
                *result = 6;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Worker::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Worker.data,
      qt_meta_data_Worker,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Worker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Worker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Worker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Worker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Worker::putDisconnectedDeviceInfo()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Worker::putConnectedDeviceInfo()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Worker::putConfigPacket(uint8_t * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Worker::putACKpacket(uint8_t * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Worker::putGamepadPacket(uint8_t * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Worker::putSensorPacket(uint8_t * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Worker::putHBPacket()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
