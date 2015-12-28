/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Mon Jun 1 22:01:08 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      49,   11,   11,   11, 0x08,
      87,   11,   11,   11, 0x08,
     127,   11,   11,   11, 0x08,
     167,   11,   11,   11, 0x08,
     210,   11,   11,   11, 0x08,
     248,   11,   11,   11, 0x08,
     277,   11,   11,   11, 0x08,
     317,   11,   11,   11, 0x08,
     352,   11,   11,   11, 0x08,
     385,   11,   11,   11, 0x08,
     427,  423,   11,   11, 0x08,
     463,   11,   11,   11, 0x08,
     502,   11,   11,   11, 0x08,
     550,  545,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0on_usun_klienta_pushButton_clicked()\0"
    "on_usun_produktu_pushButton_clicked()\0"
    "on_szukaj_produktu_pushButton_clicked()\0"
    "on_actionAktualizuj_produkt_triggered()\0"
    "on_aktualizuj_produkt_pushButton_clicked()\0"
    "on_dodaj_produkt_pushButton_clicked()\0"
    "on_action_Koniec_triggered()\0"
    "on_actionAktualizuj_klienta_triggered()\0"
    "on_actionDodaj_klienta_triggered()\0"
    "on_action_Dane_firmy_triggered()\0"
    "on_dodaj_klienta_pushButton_clicked()\0"
    "nip\0on_dodaj_klienta_Confirmed(QString)\0"
    "on_szukaj_klienta_pushButton_clicked()\0"
    "on_aktualizuj_klienta_pushButton_clicked()\0"
    "name\0on_dodaj_produkt_Confirmed(QString)\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

const QMetaObject *MainWindow::metaObject() const
{
    return &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_usun_klienta_pushButton_clicked(); break;
        case 1: on_usun_produktu_pushButton_clicked(); break;
        case 2: on_szukaj_produktu_pushButton_clicked(); break;
        case 3: on_actionAktualizuj_produkt_triggered(); break;
        case 4: on_aktualizuj_produkt_pushButton_clicked(); break;
        case 5: on_dodaj_produkt_pushButton_clicked(); break;
        case 6: on_action_Koniec_triggered(); break;
        case 7: on_actionAktualizuj_klienta_triggered(); break;
        case 8: on_actionDodaj_klienta_triggered(); break;
        case 9: on_action_Dane_firmy_triggered(); break;
        case 10: on_dodaj_klienta_pushButton_clicked(); break;
        case 11: on_dodaj_klienta_Confirmed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: on_szukaj_klienta_pushButton_clicked(); break;
        case 13: on_aktualizuj_klienta_pushButton_clicked(); break;
        case 14: on_dodaj_produkt_Confirmed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
