/****************************************************************************
** Meta object code from reading C++ file 'aktualizuj_klienta.h'
**
** Created: Sun May 31 19:54:17 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "aktualizuj_klienta.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'aktualizuj_klienta.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Aktualizuj_Klienta[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      24,   20,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      42,   19,   19,   19, 0x08,
      66,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Aktualizuj_Klienta[] = {
    "Aktualizuj_Klienta\0\0nip\0Finished(QString)\0"
    "on_buttonBox_accepted()\0on_buttonBox_rejected()\0"
};

const QMetaObject Aktualizuj_Klienta::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Aktualizuj_Klienta,
      qt_meta_data_Aktualizuj_Klienta, 0 }
};

const QMetaObject *Aktualizuj_Klienta::metaObject() const
{
    return &staticMetaObject;
}

void *Aktualizuj_Klienta::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Aktualizuj_Klienta))
        return static_cast<void*>(const_cast< Aktualizuj_Klienta*>(this));
    return QDialog::qt_metacast(_clname);
}

int Aktualizuj_Klienta::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: Finished((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: on_buttonBox_accepted(); break;
        case 2: on_buttonBox_rejected(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void Aktualizuj_Klienta::Finished(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
