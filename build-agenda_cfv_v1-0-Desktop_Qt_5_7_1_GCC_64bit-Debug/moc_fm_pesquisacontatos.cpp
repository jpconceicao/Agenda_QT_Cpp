/****************************************************************************
** Meta object code from reading C++ file 'fm_pesquisacontatos.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../agenda_cfv_v1-0/fm_pesquisacontatos.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fm_pesquisacontatos.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_fm_pesquisacontatos_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_fm_pesquisacontatos_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_fm_pesquisacontatos_t qt_meta_stringdata_fm_pesquisacontatos = {
    {
QT_MOC_LITERAL(0, 0, 19) // "fm_pesquisacontatos"

    },
    "fm_pesquisacontatos"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_fm_pesquisacontatos[] = {

 // content:
       7,       // revision
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

void fm_pesquisacontatos::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject fm_pesquisacontatos::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_fm_pesquisacontatos.data,
      qt_meta_data_fm_pesquisacontatos,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *fm_pesquisacontatos::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fm_pesquisacontatos::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_fm_pesquisacontatos.stringdata0))
        return static_cast<void*>(const_cast< fm_pesquisacontatos*>(this));
    return QDialog::qt_metacast(_clname);
}

int fm_pesquisacontatos::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
