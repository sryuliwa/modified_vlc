/****************************************************************************
** Meta object code from reading C++ file 'EPGWidget.hpp'
**
** Created: Mon Dec 7 17:03:18 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "EPGWidget.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EPGWidget.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EPGWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      48,   42,   10,   10, 0x0a,
      61,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_EPGWidget[] = {
    "EPGWidget\0\0itemSelectionChanged(EPGItem*)\0"
    "level\0setZoom(int)\0updateEPG(input_item_t*)\0"
};

void EPGWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EPGWidget *_t = static_cast<EPGWidget *>(_o);
        switch (_id) {
        case 0: _t->itemSelectionChanged((*reinterpret_cast< EPGItem*(*)>(_a[1]))); break;
        case 1: _t->setZoom((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->updateEPG((*reinterpret_cast< input_item_t*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData EPGWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject EPGWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_EPGWidget,
      qt_meta_data_EPGWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EPGWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EPGWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EPGWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EPGWidget))
        return static_cast<void*>(const_cast< EPGWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int EPGWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void EPGWidget::itemSelectionChanged(EPGItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
