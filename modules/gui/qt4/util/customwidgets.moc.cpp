/****************************************************************************
** Meta object code from reading C++ file 'customwidgets.hpp'
**
** Created: Mon Dec 7 17:03:19 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "customwidgets.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'customwidgets.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QFramelessButton[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_QFramelessButton[] = {
    "QFramelessButton\0"
};

void QFramelessButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QFramelessButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QFramelessButton::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_QFramelessButton,
      qt_meta_data_QFramelessButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QFramelessButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QFramelessButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QFramelessButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QFramelessButton))
        return static_cast<void*>(const_cast< QFramelessButton*>(this));
    return QPushButton::qt_metacast(_clname);
}

int QFramelessButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_QToolButtonExt[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,
      31,   15,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      45,   15,   15,   15, 0x08,
      60,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QToolButtonExt[] = {
    "QToolButtonExt\0\0shortClicked()\0"
    "longClicked()\0releasedSlot()\0clickedSlot()\0"
};

void QToolButtonExt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QToolButtonExt *_t = static_cast<QToolButtonExt *>(_o);
        switch (_id) {
        case 0: _t->shortClicked(); break;
        case 1: _t->longClicked(); break;
        case 2: _t->releasedSlot(); break;
        case 3: _t->clickedSlot(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QToolButtonExt::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QToolButtonExt::staticMetaObject = {
    { &QToolButton::staticMetaObject, qt_meta_stringdata_QToolButtonExt,
      qt_meta_data_QToolButtonExt, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QToolButtonExt::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QToolButtonExt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QToolButtonExt::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QToolButtonExt))
        return static_cast<void*>(const_cast< QToolButtonExt*>(this));
    return QToolButton::qt_metacast(_clname);
}

int QToolButtonExt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QToolButtonExt::shortClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QToolButtonExt::longClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
static const uint qt_meta_data_QVLCDebugLevelSpinBox[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_QVLCDebugLevelSpinBox[] = {
    "QVLCDebugLevelSpinBox\0"
};

void QVLCDebugLevelSpinBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QVLCDebugLevelSpinBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QVLCDebugLevelSpinBox::staticMetaObject = {
    { &QSpinBox::staticMetaObject, qt_meta_stringdata_QVLCDebugLevelSpinBox,
      qt_meta_data_QVLCDebugLevelSpinBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QVLCDebugLevelSpinBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QVLCDebugLevelSpinBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QVLCDebugLevelSpinBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QVLCDebugLevelSpinBox))
        return static_cast<void*>(const_cast< QVLCDebugLevelSpinBox*>(this));
    return QSpinBox::qt_metacast(_clname);
}

int QVLCDebugLevelSpinBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSpinBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_AnimatedIcon[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AnimatedIcon[] = {
    "AnimatedIcon\0\0onTimerTick()\0"
};

void AnimatedIcon::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AnimatedIcon *_t = static_cast<AnimatedIcon *>(_o);
        switch (_id) {
        case 0: _t->onTimerTick(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData AnimatedIcon::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AnimatedIcon::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_AnimatedIcon,
      qt_meta_data_AnimatedIcon, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AnimatedIcon::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AnimatedIcon::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AnimatedIcon::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AnimatedIcon))
        return static_cast<void*>(const_cast< AnimatedIcon*>(this));
    return QLabel::qt_metacast(_clname);
}

int AnimatedIcon::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_SpinningIcon[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_SpinningIcon[] = {
    "SpinningIcon\0"
};

void SpinningIcon::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData SpinningIcon::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SpinningIcon::staticMetaObject = {
    { &AnimatedIcon::staticMetaObject, qt_meta_stringdata_SpinningIcon,
      qt_meta_data_SpinningIcon, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SpinningIcon::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SpinningIcon::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SpinningIcon::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SpinningIcon))
        return static_cast<void*>(const_cast< SpinningIcon*>(this));
    return AnimatedIcon::qt_metacast(_clname);
}

int SpinningIcon::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AnimatedIcon::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
