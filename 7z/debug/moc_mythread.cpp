/****************************************************************************
** Meta object code from reading C++ file 'mythread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mythread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mythread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_mythread_t {
    QByteArrayData data[5];
    char stringdata0[35];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mythread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mythread_t qt_meta_stringdata_mythread = {
    {
QT_MOC_LITERAL(0, 0, 8), // "mythread"
QT_MOC_LITERAL(1, 9, 7), // "display"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 7), // "wstring"
QT_MOC_LITERAL(4, 26, 8) // "showflag"

    },
    "mythread\0display\0\0wstring\0showflag"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mythread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   24,    2, 0x08 /* Private */,
       4,    1,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 3,    2,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void mythread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        mythread *_t = static_cast<mythread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->display((*reinterpret_cast< wstring(*)>(_a[1])),(*reinterpret_cast< wstring(*)>(_a[2])),(*reinterpret_cast< wstring(*)>(_a[3]))); break;
        case 1: _t->showflag((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject mythread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_mythread.data,
      qt_meta_data_mythread,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *mythread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mythread::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_mythread.stringdata0))
        return static_cast<void*>(const_cast< mythread*>(this));
    return QThread::qt_metacast(_clname);
}

int mythread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
