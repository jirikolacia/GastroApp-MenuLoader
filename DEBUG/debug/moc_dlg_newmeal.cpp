/****************************************************************************
** Meta object code from reading C++ file 'dlg_newmeal.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../dlg_newmeal.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dlg_newmeal.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Dlg_NewMeal_t {
    QByteArrayData data[9];
    char stringdata0[84];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dlg_NewMeal_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dlg_NewMeal_t qt_meta_stringdata_Dlg_NewMeal = {
    {
QT_MOC_LITERAL(0, 0, 11), // "Dlg_NewMeal"
QT_MOC_LITERAL(1, 12, 8), // "MealSend"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 4), // "Meal"
QT_MOC_LITERAL(4, 27, 3), // "Typ"
QT_MOC_LITERAL(5, 31, 10), // "setCBTypes"
QT_MOC_LITERAL(6, 42, 3), // "CBs"
QT_MOC_LITERAL(7, 46, 20), // "on_Load_Meal_clicked"
QT_MOC_LITERAL(8, 67, 16) // "on_Close_clicked"

    },
    "Dlg_NewMeal\0MealSend\0\0Meal\0Typ\0"
    "setCBTypes\0CBs\0on_Load_Meal_clicked\0"
    "on_Close_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dlg_NewMeal[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   39,    2, 0x0a /* Public */,
       7,    0,   42,    2, 0x08 /* Private */,
       8,    0,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QStringList,    6,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Dlg_NewMeal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Dlg_NewMeal *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->MealSend((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->setCBTypes((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 2: _t->on_Load_Meal_clicked(); break;
        case 3: _t->on_Close_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Dlg_NewMeal::*)(QString , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Dlg_NewMeal::MealSend)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Dlg_NewMeal::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_Dlg_NewMeal.data,
    qt_meta_data_Dlg_NewMeal,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Dlg_NewMeal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dlg_NewMeal::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dlg_NewMeal.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Dlg_NewMeal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void Dlg_NewMeal::MealSend(QString _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
