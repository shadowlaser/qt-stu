/****************************************************************************
** Meta object code from reading C++ file 'cannon.h'
**
** Created: Sun Aug 19 20:08:18 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "cannon.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cannon.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CannonField[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,
      31,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      57,   49,   12,   12, 0x0a,
      78,   71,   12,   12, 0x0a,
      92,   12,   12,   12, 0x0a,
     100,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CannonField[] = {
    "CannonField\0\0angleChanged(int)\0"
    "forceChanged(int)\0degrees\0setAngle(int)\0"
    "newton\0setForce(int)\0shoot()\0moveShot()\0"
};

void CannonField::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CannonField *_t = static_cast<CannonField *>(_o);
        switch (_id) {
        case 0: _t->angleChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->forceChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setAngle((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setForce((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->shoot(); break;
        case 5: _t->moveShot(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CannonField::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CannonField::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CannonField,
      qt_meta_data_CannonField, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CannonField::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CannonField::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CannonField::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CannonField))
        return static_cast<void*>(const_cast< CannonField*>(this));
    return QWidget::qt_metacast(_clname);
}

int CannonField::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void CannonField::angleChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CannonField::forceChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
