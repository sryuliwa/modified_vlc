/****************************************************************************
** Meta object code from reading C++ file 'standardpanel.hpp'
**
** Created: Mon Dec 7 17:03:18 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "standardpanel.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'standardpanel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_StandardPLPanel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      44,   42,   16,   16, 0x0a,
      79,   16,   16,   16, 0x0a,
     103,   16,   16,   16, 0x08,
     121,   16,   16,   16, 0x08,
     150,   16,   16,   16, 0x08,
     172,   16,   16,   16, 0x08,
     185,   16,   16,   16, 0x08,
     201,   16,   16,   16, 0x08,
     230,  219,   16,   16, 0x08,
     246,  219,   16,   16, 0x08,
     269,   16,   16,   16, 0x08,
     289,   16,   16,   16, 0x08,
     315,   16,   16,   16, 0x08,
     338,   16,   16,   16, 0x08,
     352,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_StandardPLPanel[] = {
    "StandardPLPanel\0\0viewChanged(QModelIndex)\0"
    ",\0setRootItem(playlist_item_t*,bool)\0"
    "browseInto(QModelIndex)\0deleteSelection()\0"
    "handleExpansion(QModelIndex)\0"
    "activate(QModelIndex)\0browseInto()\0"
    "browseInto(int)\0gotoPlayingItem()\0"
    "searchText\0search(QString)\0"
    "searchDelayed(QString)\0popupPlView(QPoint)\0"
    "popupSelectColumn(QPoint)\0"
    "toggleColumnShown(int)\0showView(int)\0"
    "cycleViews()\0"
};

void StandardPLPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        StandardPLPanel *_t = static_cast<StandardPLPanel *>(_o);
        switch (_id) {
        case 0: _t->viewChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->setRootItem((*reinterpret_cast< playlist_item_t*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->browseInto((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->deleteSelection(); break;
        case 4: _t->handleExpansion((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->activate((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 6: _t->browseInto(); break;
        case 7: _t->browseInto((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->gotoPlayingItem(); break;
        case 9: _t->search((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->searchDelayed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->popupPlView((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 12: _t->popupSelectColumn((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 13: _t->toggleColumnShown((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->showView((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->cycleViews(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData StandardPLPanel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject StandardPLPanel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_StandardPLPanel,
      qt_meta_data_StandardPLPanel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StandardPLPanel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StandardPLPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StandardPLPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StandardPLPanel))
        return static_cast<void*>(const_cast< StandardPLPanel*>(this));
    return QWidget::qt_metacast(_clname);
}

int StandardPLPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void StandardPLPanel::viewChanged(const QModelIndex & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
