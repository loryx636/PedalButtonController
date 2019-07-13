/****************************************************************************
** Meta object code from reading C++ file 'oshbuttonw.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../OSHStudio/oshbuttonw.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'oshbuttonw.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_oshbuttonw_t {
    QByteArrayData data[13];
    char stringdata0[151];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_oshbuttonw_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_oshbuttonw_t qt_meta_stringdata_oshbuttonw = {
    {
QT_MOC_LITERAL(0, 0, 10), // "oshbuttonw"
QT_MOC_LITERAL(1, 11, 19), // "button_type_changed"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 15), // "set_button_text"
QT_MOC_LITERAL(4, 48, 4), // "text"
QT_MOC_LITERAL(5, 53, 13), // "slotActivated"
QT_MOC_LITERAL(6, 67, 8), // "QAction*"
QT_MOC_LITERAL(7, 76, 7), // "pAction"
QT_MOC_LITERAL(8, 84, 16), // "set_button_state"
QT_MOC_LITERAL(9, 101, 5), // "state"
QT_MOC_LITERAL(10, 107, 15), // "get_button_type"
QT_MOC_LITERAL(11, 123, 11), // "button_mode"
QT_MOC_LITERAL(12, 135, 15) // "set_button_type"

    },
    "oshbuttonw\0button_type_changed\0\0"
    "set_button_text\0text\0slotActivated\0"
    "QAction*\0pAction\0set_button_state\0"
    "state\0get_button_type\0button_mode\0"
    "set_button_type"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_oshbuttonw[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   45,    2, 0x08 /* Private */,
       5,    1,   48,    2, 0x08 /* Private */,
       8,    1,   51,    2, 0x0a /* Public */,
      10,    0,   54,    2, 0x0a /* Public */,
      12,    1,   55,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    0x80000000 | 11,
    QMetaType::Void, 0x80000000 | 11,    2,

       0        // eod
};

void oshbuttonw::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        oshbuttonw *_t = static_cast<oshbuttonw *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->button_type_changed(); break;
        case 1: _t->set_button_text((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->slotActivated((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 3: _t->set_button_state((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: { button_mode _r = _t->get_button_type();
            if (_a[0]) *reinterpret_cast< button_mode*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->set_button_type((*reinterpret_cast< button_mode(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (oshbuttonw::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&oshbuttonw::button_type_changed)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject oshbuttonw::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_oshbuttonw.data,
      qt_meta_data_oshbuttonw,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *oshbuttonw::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *oshbuttonw::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_oshbuttonw.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int oshbuttonw::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void oshbuttonw::button_type_changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
