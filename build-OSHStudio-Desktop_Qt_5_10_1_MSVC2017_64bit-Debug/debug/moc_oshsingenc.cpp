/****************************************************************************
** Meta object code from reading C++ file 'oshsingenc.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../OSHStudio/oshsingenc.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'oshsingenc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_oshsingenc_t {
    QByteArrayData data[6];
    char stringdata0[87];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_oshsingenc_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_oshsingenc_t qt_meta_stringdata_oshsingenc = {
    {
QT_MOC_LITERAL(0, 0, 10), // "oshsingenc"
QT_MOC_LITERAL(1, 11, 12), // "item_changed"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 27), // "on_comboBox_SEA_highlighted"
QT_MOC_LITERAL(4, 53, 5), // "index"
QT_MOC_LITERAL(5, 59, 27) // "on_comboBox_SEB_highlighted"

    },
    "oshsingenc\0item_changed\0\0"
    "on_comboBox_SEA_highlighted\0index\0"
    "on_comboBox_SEB_highlighted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_oshsingenc[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   30,    2, 0x08 /* Private */,
       5,    1,   33,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,

       0        // eod
};

void oshsingenc::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        oshsingenc *_t = static_cast<oshsingenc *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->item_changed(); break;
        case 1: _t->on_comboBox_SEA_highlighted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_comboBox_SEB_highlighted((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (oshsingenc::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&oshsingenc::item_changed)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject oshsingenc::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_oshsingenc.data,
      qt_meta_data_oshsingenc,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *oshsingenc::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *oshsingenc::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_oshsingenc.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int oshsingenc::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void oshsingenc::item_changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
