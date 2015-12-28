/********************************************************************************
** Form generated from reading ui file 'wystaw_fakture.ui'
**
** Created: Tue 9. Jun 20:29:23 2009
**      by: Qt User Interface Compiler version 4.5.1
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_WYSTAW_FAKTURE_H
#define UI_WYSTAW_FAKTURE_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGridLayout *gridLayout;
    QGroupBox *dane_faktury_groupBox;
    QComboBox *platnosc_comboBox;
    QLineEdit *nr_dokumentu_lineEdit;
    QLabel *data_sprzedazy_label;
    QDateEdit *data_wystawienia_dateEdit;
    QDateEdit *data_sprzedazy_dateEdit;
    QLabel *platnosc_label;
    QLabel *nr_dokumentu_label;
    QLabel *data_wystawienia_label;
    QDateEdit *termin_platnosci_dateEdit;
    QLabel *termin_platnosci_label;
    QGroupBox *dane_kontrahenta_groupBox;
    QLabel *imie_label;
    QLineEdit *imie_lineEdit;
    QLineEdit *nazwisko_lineEdit;
    QLabel *nazwisko_label;
    QLabel *nazwa_firmy_label;
    QLineEdit *nazwa_firmy_lineEdit;
    QLabel *nip_label;
    QLineEdit *adres_lineEdit;
    QLabel *regon_label;
    QLineEdit *nip_lineEdit;
    QLabel *adres_label;
    QLineEdit *regon_lineEdit;
    QPushButton *pobierz_z_listy_pushButton;
    QPushButton *dodaj_klienta_pushButton;
    QGroupBox *produkty_groupBox;
    QTableView *produkty_tableView;
    QPushButton *dodaj_produkt_pushButton;
    QPushButton *zmien_produkt_pushButton;
    QPushButton *usun_produkt_pushButton;
    QLabel *wartosc_brutto_label;
    QLineEdit *wartosc_brutto_lineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(825, 689);
        QIcon icon;
        icon.addPixmap(QPixmap(QString::fromUtf8("ikonki/16x16/faktury.png")), QIcon::Normal, QIcon::Off);
        Dialog->setWindowIcon(icon);
        gridLayout = new QGridLayout(Dialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        dane_faktury_groupBox = new QGroupBox(Dialog);
        dane_faktury_groupBox->setObjectName(QString::fromUtf8("dane_faktury_groupBox"));
        dane_faktury_groupBox->setMinimumSize(QSize(311, 211));
        dane_faktury_groupBox->setMaximumSize(QSize(311, 211));
        platnosc_comboBox = new QComboBox(dane_faktury_groupBox);
        platnosc_comboBox->setObjectName(QString::fromUtf8("platnosc_comboBox"));
        platnosc_comboBox->setGeometry(QRect(170, 140, 131, 29));
        nr_dokumentu_lineEdit = new QLineEdit(dane_faktury_groupBox);
        nr_dokumentu_lineEdit->setObjectName(QString::fromUtf8("nr_dokumentu_lineEdit"));
        nr_dokumentu_lineEdit->setGeometry(QRect(170, 20, 131, 27));
        data_sprzedazy_label = new QLabel(dane_faktury_groupBox);
        data_sprzedazy_label->setObjectName(QString::fromUtf8("data_sprzedazy_label"));
        data_sprzedazy_label->setGeometry(QRect(20, 59, 121, 20));
        data_wystawienia_dateEdit = new QDateEdit(dane_faktury_groupBox);
        data_wystawienia_dateEdit->setObjectName(QString::fromUtf8("data_wystawienia_dateEdit"));
        data_wystawienia_dateEdit->setGeometry(QRect(170, 80, 131, 28));
        data_wystawienia_dateEdit->setDateTime(QDateTime(QDate(2009, 1, 1), QTime(0, 0, 0)));
        data_wystawienia_dateEdit->setCalendarPopup(true);
        data_wystawienia_dateEdit->setTimeSpec(Qt::LocalTime);
        data_wystawienia_dateEdit->setDate(QDate(2009, 1, 1));
        data_sprzedazy_dateEdit = new QDateEdit(dane_faktury_groupBox);
        data_sprzedazy_dateEdit->setObjectName(QString::fromUtf8("data_sprzedazy_dateEdit"));
        data_sprzedazy_dateEdit->setGeometry(QRect(170, 50, 131, 28));
        data_sprzedazy_dateEdit->setDateTime(QDateTime(QDate(2009, 1, 1), QTime(0, 0, 0)));
        data_sprzedazy_dateEdit->setCalendarPopup(true);
        data_sprzedazy_dateEdit->setTimeSpec(Qt::LocalTime);
        data_sprzedazy_dateEdit->setDate(QDate(2009, 1, 1));
        platnosc_label = new QLabel(dane_faktury_groupBox);
        platnosc_label->setObjectName(QString::fromUtf8("platnosc_label"));
        platnosc_label->setGeometry(QRect(20, 150, 73, 19));
        nr_dokumentu_label = new QLabel(dane_faktury_groupBox);
        nr_dokumentu_label->setObjectName(QString::fromUtf8("nr_dokumentu_label"));
        nr_dokumentu_label->setGeometry(QRect(20, 30, 121, 19));
        data_wystawienia_label = new QLabel(dane_faktury_groupBox);
        data_wystawienia_label->setObjectName(QString::fromUtf8("data_wystawienia_label"));
        data_wystawienia_label->setGeometry(QRect(20, 90, 151, 19));
        termin_platnosci_dateEdit = new QDateEdit(dane_faktury_groupBox);
        termin_platnosci_dateEdit->setObjectName(QString::fromUtf8("termin_platnosci_dateEdit"));
        termin_platnosci_dateEdit->setGeometry(QRect(170, 110, 131, 28));
        termin_platnosci_dateEdit->setDateTime(QDateTime(QDate(2009, 1, 1), QTime(0, 0, 0)));
        termin_platnosci_dateEdit->setCalendarPopup(true);
        termin_platnosci_dateEdit->setTimeSpec(Qt::LocalTime);
        termin_platnosci_dateEdit->setDate(QDate(2009, 1, 1));
        termin_platnosci_label = new QLabel(dane_faktury_groupBox);
        termin_platnosci_label->setObjectName(QString::fromUtf8("termin_platnosci_label"));
        termin_platnosci_label->setGeometry(QRect(20, 120, 131, 19));

        gridLayout->addWidget(dane_faktury_groupBox, 0, 0, 1, 1);

        dane_kontrahenta_groupBox = new QGroupBox(Dialog);
        dane_kontrahenta_groupBox->setObjectName(QString::fromUtf8("dane_kontrahenta_groupBox"));
        dane_kontrahenta_groupBox->setMinimumSize(QSize(490, 211));
        dane_kontrahenta_groupBox->setMaximumSize(QSize(490, 211));
        imie_label = new QLabel(dane_kontrahenta_groupBox);
        imie_label->setObjectName(QString::fromUtf8("imie_label"));
        imie_label->setGeometry(QRect(10, 30, 73, 19));
        imie_lineEdit = new QLineEdit(dane_kontrahenta_groupBox);
        imie_lineEdit->setObjectName(QString::fromUtf8("imie_lineEdit"));
        imie_lineEdit->setGeometry(QRect(130, 20, 211, 27));
        nazwisko_lineEdit = new QLineEdit(dane_kontrahenta_groupBox);
        nazwisko_lineEdit->setObjectName(QString::fromUtf8("nazwisko_lineEdit"));
        nazwisko_lineEdit->setGeometry(QRect(130, 50, 211, 27));
        nazwisko_label = new QLabel(dane_kontrahenta_groupBox);
        nazwisko_label->setObjectName(QString::fromUtf8("nazwisko_label"));
        nazwisko_label->setGeometry(QRect(10, 60, 81, 19));
        nazwa_firmy_label = new QLabel(dane_kontrahenta_groupBox);
        nazwa_firmy_label->setObjectName(QString::fromUtf8("nazwa_firmy_label"));
        nazwa_firmy_label->setGeometry(QRect(10, 90, 121, 19));
        nazwa_firmy_lineEdit = new QLineEdit(dane_kontrahenta_groupBox);
        nazwa_firmy_lineEdit->setObjectName(QString::fromUtf8("nazwa_firmy_lineEdit"));
        nazwa_firmy_lineEdit->setGeometry(QRect(130, 80, 211, 27));
        nip_label = new QLabel(dane_kontrahenta_groupBox);
        nip_label->setObjectName(QString::fromUtf8("nip_label"));
        nip_label->setGeometry(QRect(10, 150, 73, 19));
        adres_lineEdit = new QLineEdit(dane_kontrahenta_groupBox);
        adres_lineEdit->setObjectName(QString::fromUtf8("adres_lineEdit"));
        adres_lineEdit->setGeometry(QRect(130, 110, 211, 27));
        regon_label = new QLabel(dane_kontrahenta_groupBox);
        regon_label->setObjectName(QString::fromUtf8("regon_label"));
        regon_label->setGeometry(QRect(10, 180, 73, 19));
        nip_lineEdit = new QLineEdit(dane_kontrahenta_groupBox);
        nip_lineEdit->setObjectName(QString::fromUtf8("nip_lineEdit"));
        nip_lineEdit->setGeometry(QRect(130, 140, 211, 27));
        adres_label = new QLabel(dane_kontrahenta_groupBox);
        adres_label->setObjectName(QString::fromUtf8("adres_label"));
        adres_label->setGeometry(QRect(10, 120, 73, 19));
        regon_lineEdit = new QLineEdit(dane_kontrahenta_groupBox);
        regon_lineEdit->setObjectName(QString::fromUtf8("regon_lineEdit"));
        regon_lineEdit->setGeometry(QRect(130, 170, 211, 27));
        pobierz_z_listy_pushButton = new QPushButton(dane_kontrahenta_groupBox);
        pobierz_z_listy_pushButton->setObjectName(QString::fromUtf8("pobierz_z_listy_pushButton"));
        pobierz_z_listy_pushButton->setGeometry(QRect(340, 20, 151, 29));
        dodaj_klienta_pushButton = new QPushButton(dane_kontrahenta_groupBox);
        dodaj_klienta_pushButton->setObjectName(QString::fromUtf8("dodaj_klienta_pushButton"));
        dodaj_klienta_pushButton->setGeometry(QRect(340, 50, 151, 29));

        gridLayout->addWidget(dane_kontrahenta_groupBox, 0, 1, 1, 1);

        produkty_groupBox = new QGroupBox(Dialog);
        produkty_groupBox->setObjectName(QString::fromUtf8("produkty_groupBox"));
        produkty_tableView = new QTableView(produkty_groupBox);
        produkty_tableView->setObjectName(QString::fromUtf8("produkty_tableView"));
        produkty_tableView->setGeometry(QRect(0, 20, 811, 321));
        dodaj_produkt_pushButton = new QPushButton(produkty_groupBox);
        dodaj_produkt_pushButton->setObjectName(QString::fromUtf8("dodaj_produkt_pushButton"));
        dodaj_produkt_pushButton->setGeometry(QRect(0, 340, 109, 29));
        zmien_produkt_pushButton = new QPushButton(produkty_groupBox);
        zmien_produkt_pushButton->setObjectName(QString::fromUtf8("zmien_produkt_pushButton"));
        zmien_produkt_pushButton->setGeometry(QRect(110, 340, 109, 29));
        usun_produkt_pushButton = new QPushButton(produkty_groupBox);
        usun_produkt_pushButton->setObjectName(QString::fromUtf8("usun_produkt_pushButton"));
        usun_produkt_pushButton->setGeometry(QRect(220, 340, 109, 29));
        wartosc_brutto_label = new QLabel(produkty_groupBox);
        wartosc_brutto_label->setObjectName(QString::fromUtf8("wartosc_brutto_label"));
        wartosc_brutto_label->setGeometry(QRect(510, 350, 121, 21));
        wartosc_brutto_lineEdit = new QLineEdit(produkty_groupBox);
        wartosc_brutto_lineEdit->setObjectName(QString::fromUtf8("wartosc_brutto_lineEdit"));
        wartosc_brutto_lineEdit->setGeometry(QRect(640, 340, 171, 27));

        gridLayout->addWidget(produkty_groupBox, 1, 0, 1, 2);

        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 1, 1, 1);

        QWidget::setTabOrder(nr_dokumentu_lineEdit, data_sprzedazy_dateEdit);
        QWidget::setTabOrder(data_sprzedazy_dateEdit, data_wystawienia_dateEdit);
        QWidget::setTabOrder(data_wystawienia_dateEdit, termin_platnosci_dateEdit);
        QWidget::setTabOrder(termin_platnosci_dateEdit, platnosc_comboBox);
        QWidget::setTabOrder(platnosc_comboBox, imie_lineEdit);
        QWidget::setTabOrder(imie_lineEdit, nazwisko_lineEdit);
        QWidget::setTabOrder(nazwisko_lineEdit, nazwa_firmy_lineEdit);
        QWidget::setTabOrder(nazwa_firmy_lineEdit, adres_lineEdit);
        QWidget::setTabOrder(adres_lineEdit, nip_lineEdit);
        QWidget::setTabOrder(nip_lineEdit, regon_lineEdit);
        QWidget::setTabOrder(regon_lineEdit, pobierz_z_listy_pushButton);
        QWidget::setTabOrder(pobierz_z_listy_pushButton, dodaj_klienta_pushButton);
        QWidget::setTabOrder(dodaj_klienta_pushButton, produkty_tableView);
        QWidget::setTabOrder(produkty_tableView, dodaj_produkt_pushButton);
        QWidget::setTabOrder(dodaj_produkt_pushButton, zmien_produkt_pushButton);
        QWidget::setTabOrder(zmien_produkt_pushButton, usun_produkt_pushButton);
        QWidget::setTabOrder(usun_produkt_pushButton, wartosc_brutto_lineEdit);
        QWidget::setTabOrder(wartosc_brutto_lineEdit, buttonBox);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Wystaw faktur\304\231", 0, QApplication::UnicodeUTF8));
        dane_faktury_groupBox->setTitle(QApplication::translate("Dialog", "Dane faktury", 0, QApplication::UnicodeUTF8));
        platnosc_comboBox->clear();
        platnosc_comboBox->insertItems(0, QStringList()
         << QApplication::translate("Dialog", "Przelew", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Dialog", "Got\303\263wka", 0, QApplication::UnicodeUTF8)
        );
        data_sprzedazy_label->setText(QApplication::translate("Dialog", "Data sprzeda\305\274y", 0, QApplication::UnicodeUTF8));
        data_wystawienia_dateEdit->setDisplayFormat(QApplication::translate("Dialog", "dd/MM/yyyy", 0, QApplication::UnicodeUTF8));
        data_sprzedazy_dateEdit->setDisplayFormat(QApplication::translate("Dialog", "dd/MM/yyyy", 0, QApplication::UnicodeUTF8));
        platnosc_label->setText(QApplication::translate("Dialog", "P\305\202atno\305\233\304\207", 0, QApplication::UnicodeUTF8));
        nr_dokumentu_label->setText(QApplication::translate("Dialog", "Nr dokumentu", 0, QApplication::UnicodeUTF8));
        data_wystawienia_label->setText(QApplication::translate("Dialog", "Data wystawienia", 0, QApplication::UnicodeUTF8));
        termin_platnosci_dateEdit->setDisplayFormat(QApplication::translate("Dialog", "dd/MM/yyyy", 0, QApplication::UnicodeUTF8));
        termin_platnosci_label->setText(QApplication::translate("Dialog", "Termin p\305\202atno\305\233ci", 0, QApplication::UnicodeUTF8));
        dane_kontrahenta_groupBox->setTitle(QApplication::translate("Dialog", "Dane kontrahenta", 0, QApplication::UnicodeUTF8));
        imie_label->setText(QApplication::translate("Dialog", "Imi\304\231", 0, QApplication::UnicodeUTF8));
        nazwisko_label->setText(QApplication::translate("Dialog", "Nazwisko", 0, QApplication::UnicodeUTF8));
        nazwa_firmy_label->setText(QApplication::translate("Dialog", "Nazwa firmy", 0, QApplication::UnicodeUTF8));
        nip_label->setText(QApplication::translate("Dialog", "NIP", 0, QApplication::UnicodeUTF8));
        regon_label->setText(QApplication::translate("Dialog", "Regon", 0, QApplication::UnicodeUTF8));
        adres_label->setText(QApplication::translate("Dialog", "Adres", 0, QApplication::UnicodeUTF8));
        pobierz_z_listy_pushButton->setText(QApplication::translate("Dialog", "Pobierz z listy", 0, QApplication::UnicodeUTF8));
        dodaj_klienta_pushButton->setText(QApplication::translate("Dialog", "Dodaj klienta", 0, QApplication::UnicodeUTF8));
        produkty_groupBox->setTitle(QApplication::translate("Dialog", "Produkty", 0, QApplication::UnicodeUTF8));
        dodaj_produkt_pushButton->setText(QApplication::translate("Dialog", "Dodaj", 0, QApplication::UnicodeUTF8));
        zmien_produkt_pushButton->setText(QApplication::translate("Dialog", "Zmie\305\204", 0, QApplication::UnicodeUTF8));
        usun_produkt_pushButton->setText(QApplication::translate("Dialog", "Usu\305\204", 0, QApplication::UnicodeUTF8));
        wartosc_brutto_label->setText(QApplication::translate("Dialog", "Warto\305\233\304\207 brutto", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(Dialog);
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WYSTAW_FAKTURE_H
