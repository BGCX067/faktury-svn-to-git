/********************************************************************************
** Form generated from reading ui file 'mainwindow.ui'
**
** Created: Tue 9. Jun 20:29:23 2009
**      by: Qt User Interface Compiler version 4.5.1
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDateEdit>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTableView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Koniec;
    QAction *action_Dane_firmy;
    QAction *actionDodaj_faktur;
    QAction *actionUsu_faktur;
    QAction *actionAktualizuj_faktur;
    QAction *actionDodaj_klienta;
    QAction *actionUsu_klienta;
    QAction *actionAktualizuj_klienta;
    QAction *actionDodaj_produkt;
    QAction *actionUsu_produkt;
    QAction *actionAktualizuj_produkt;
    QAction *actionDodaj_usluge;
    QAction *actionUsu_usluge;
    QAction *actionAktualizuj_usluge;
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QTabWidget *tabWidget;
    QWidget *Faktury;
    QGridLayout *gridLayout;
    QGroupBox *szukaj_faktury_groupBox;
    QLabel *data_label;
    QLabel *data_od_label;
    QLabel *data_do_label;
    QDateEdit *data_od_dateEdit;
    QDateEdit *data_do_dateEdit;
    QLabel *kwota_label;
    QLabel *kwota_do_label;
    QLabel *kwota_od_label;
    QLineEdit *kwota_od_lineEdit;
    QLineEdit *kwota_do_lineEdit;
    QPushButton *szukaj_fakture_pushButton;
    QLabel *klient_szukaj_faktury_label;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *nazwa_klienta_szukaj_fakturylineEdit;
    QLineEdit *nip_szukaj_klienta_lineEdit;
    QTableView *faktury_tableView;
    QPushButton *dodaj_fakture_pushButton;
    QPushButton *aktualizuj_fakture_pushButton;
    QPushButton *usun_fakture_pushButton;
    QWidget *Klienci;
    QGridLayout *gridLayout_3;
    QTableView *klienci_tableView;
    QPushButton *dodaj_klienta_pushButton;
    QPushButton *aktualizuj_klienta_pushButton;
    QPushButton *usun_klienta_pushButton;
    QGroupBox *szukaj_klienta_groupBox;
    QLabel *nazwa_klienta_label;
    QLineEdit *nazwa_klienta_lineEdit;
    QLineEdit *nip_lineEdit;
    QLineEdit *regon_lineEdit;
    QLineEdit *nr_konta_lineEdit;
    QLabel *nip_label;
    QLabel *regon_label;
    QLabel *nr_konta_label;
    QPushButton *szukaj_klienta_pushButton;
    QWidget *Produkty;
    QGridLayout *gridLayout_4;
    QGroupBox *szukaj_produktu_groupBox;
    QLabel *nazwa_label;
    QLabel *cena_label;
    QLabel *cena_od_label;
    QLabel *cena_do_label;
    QLineEdit *nazwa_produktu_lineEdit;
    QLineEdit *cena_do_lineEdit;
    QLineEdit *cena_od_lineEdit;
    QPushButton *szukaj_produktu_pushButton;
    QLabel *stan_magazynu_label;
    QLabel *stan_magazynu_odlabel;
    QLabel *stan_magazynu_do_label;
    QLineEdit *stan_magazynu_od_lineEdit;
    QLineEdit *stan_magazynu_do_lineEdit;
    QTableView *produkty_tab_view;
    QPushButton *dodaj_produkt_pushButton;
    QPushButton *aktualizuj_produkt_pushButton;
    QPushButton *usun_produktu_pushButton;
    QMenuBar *menubar;
    QMenu *menu_Plik;
    QMenu *menuFaktury;
    QMenu *menuKlienci;
    QMenu *menuTowary;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(764, 628);
        QIcon icon;
        icon.addPixmap(QPixmap(QString::fromUtf8("ikonki/24x24/ikonka.png")), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        action_Koniec = new QAction(MainWindow);
        action_Koniec->setObjectName(QString::fromUtf8("action_Koniec"));
        action_Dane_firmy = new QAction(MainWindow);
        action_Dane_firmy->setObjectName(QString::fromUtf8("action_Dane_firmy"));
        actionDodaj_faktur = new QAction(MainWindow);
        actionDodaj_faktur->setObjectName(QString::fromUtf8("actionDodaj_faktur"));
        actionUsu_faktur = new QAction(MainWindow);
        actionUsu_faktur->setObjectName(QString::fromUtf8("actionUsu_faktur"));
        actionAktualizuj_faktur = new QAction(MainWindow);
        actionAktualizuj_faktur->setObjectName(QString::fromUtf8("actionAktualizuj_faktur"));
        actionDodaj_klienta = new QAction(MainWindow);
        actionDodaj_klienta->setObjectName(QString::fromUtf8("actionDodaj_klienta"));
        actionUsu_klienta = new QAction(MainWindow);
        actionUsu_klienta->setObjectName(QString::fromUtf8("actionUsu_klienta"));
        actionAktualizuj_klienta = new QAction(MainWindow);
        actionAktualizuj_klienta->setObjectName(QString::fromUtf8("actionAktualizuj_klienta"));
        actionDodaj_produkt = new QAction(MainWindow);
        actionDodaj_produkt->setObjectName(QString::fromUtf8("actionDodaj_produkt"));
        actionUsu_produkt = new QAction(MainWindow);
        actionUsu_produkt->setObjectName(QString::fromUtf8("actionUsu_produkt"));
        actionAktualizuj_produkt = new QAction(MainWindow);
        actionAktualizuj_produkt->setObjectName(QString::fromUtf8("actionAktualizuj_produkt"));
        actionDodaj_usluge = new QAction(MainWindow);
        actionDodaj_usluge->setObjectName(QString::fromUtf8("actionDodaj_usluge"));
        actionUsu_usluge = new QAction(MainWindow);
        actionUsu_usluge->setObjectName(QString::fromUtf8("actionUsu_usluge"));
        actionAktualizuj_usluge = new QAction(MainWindow);
        actionAktualizuj_usluge->setObjectName(QString::fromUtf8("actionAktualizuj_usluge"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        Faktury = new QWidget();
        Faktury->setObjectName(QString::fromUtf8("Faktury"));
        gridLayout = new QGridLayout(Faktury);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        szukaj_faktury_groupBox = new QGroupBox(Faktury);
        szukaj_faktury_groupBox->setObjectName(QString::fromUtf8("szukaj_faktury_groupBox"));
        szukaj_faktury_groupBox->setMinimumSize(QSize(0, 160));
        szukaj_faktury_groupBox->setBaseSize(QSize(0, 0));
        data_label = new QLabel(szukaj_faktury_groupBox);
        data_label->setObjectName(QString::fromUtf8("data_label"));
        data_label->setGeometry(QRect(42, 37, 42, 19));
        data_od_label = new QLabel(szukaj_faktury_groupBox);
        data_od_label->setObjectName(QString::fromUtf8("data_od_label"));
        data_od_label->setGeometry(QRect(62, 70, 21, 19));
        data_do_label = new QLabel(szukaj_faktury_groupBox);
        data_do_label->setObjectName(QString::fromUtf8("data_do_label"));
        data_do_label->setGeometry(QRect(62, 100, 21, 19));
        data_od_dateEdit = new QDateEdit(szukaj_faktury_groupBox);
        data_od_dateEdit->setObjectName(QString::fromUtf8("data_od_dateEdit"));
        data_od_dateEdit->setGeometry(QRect(89, 62, 128, 28));
        data_od_dateEdit->setDateTime(QDateTime(QDate(2009, 1, 1), QTime(0, 0, 0)));
        data_od_dateEdit->setCalendarPopup(true);
        data_od_dateEdit->setTimeSpec(Qt::LocalTime);
        data_od_dateEdit->setDate(QDate(2009, 1, 1));
        data_do_dateEdit = new QDateEdit(szukaj_faktury_groupBox);
        data_do_dateEdit->setObjectName(QString::fromUtf8("data_do_dateEdit"));
        data_do_dateEdit->setGeometry(QRect(89, 96, 128, 28));
        data_do_dateEdit->setDateTime(QDateTime(QDate(2009, 1, 1), QTime(0, 0, 0)));
        data_do_dateEdit->setCalendarPopup(true);
        data_do_dateEdit->setTimeSpec(Qt::LocalTime);
        data_do_dateEdit->setDate(QDate(2009, 1, 1));
        kwota_label = new QLabel(szukaj_faktury_groupBox);
        kwota_label->setObjectName(QString::fromUtf8("kwota_label"));
        kwota_label->setGeometry(QRect(239, 37, 52, 19));
        kwota_do_label = new QLabel(szukaj_faktury_groupBox);
        kwota_do_label->setObjectName(QString::fromUtf8("kwota_do_label"));
        kwota_do_label->setGeometry(QRect(260, 100, 21, 20));
        kwota_od_label = new QLabel(szukaj_faktury_groupBox);
        kwota_od_label->setObjectName(QString::fromUtf8("kwota_od_label"));
        kwota_od_label->setGeometry(QRect(260, 70, 20, 20));
        kwota_od_lineEdit = new QLineEdit(szukaj_faktury_groupBox);
        kwota_od_lineEdit->setObjectName(QString::fromUtf8("kwota_od_lineEdit"));
        kwota_od_lineEdit->setGeometry(QRect(286, 62, 121, 26));
        kwota_do_lineEdit = new QLineEdit(szukaj_faktury_groupBox);
        kwota_do_lineEdit->setObjectName(QString::fromUtf8("kwota_do_lineEdit"));
        kwota_do_lineEdit->setGeometry(QRect(286, 96, 121, 26));
        szukaj_fakture_pushButton = new QPushButton(szukaj_faktury_groupBox);
        szukaj_fakture_pushButton->setObjectName(QString::fromUtf8("szukaj_fakture_pushButton"));
        szukaj_fakture_pushButton->setGeometry(QRect(620, 130, 100, 30));
        szukaj_fakture_pushButton->setMinimumSize(QSize(100, 30));
        szukaj_fakture_pushButton->setMaximumSize(QSize(100, 30));
        klient_szukaj_faktury_label = new QLabel(szukaj_faktury_groupBox);
        klient_szukaj_faktury_label->setObjectName(QString::fromUtf8("klient_szukaj_faktury_label"));
        klient_szukaj_faktury_label->setGeometry(QRect(430, 40, 51, 19));
        label = new QLabel(szukaj_faktury_groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(450, 70, 73, 19));
        label_2 = new QLabel(szukaj_faktury_groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(450, 100, 73, 19));
        nazwa_klienta_szukaj_fakturylineEdit = new QLineEdit(szukaj_faktury_groupBox);
        nazwa_klienta_szukaj_fakturylineEdit->setObjectName(QString::fromUtf8("nazwa_klienta_szukaj_fakturylineEdit"));
        nazwa_klienta_szukaj_fakturylineEdit->setGeometry(QRect(510, 60, 121, 26));
        nip_szukaj_klienta_lineEdit = new QLineEdit(szukaj_faktury_groupBox);
        nip_szukaj_klienta_lineEdit->setObjectName(QString::fromUtf8("nip_szukaj_klienta_lineEdit"));
        nip_szukaj_klienta_lineEdit->setGeometry(QRect(510, 90, 121, 26));

        gridLayout->addWidget(szukaj_faktury_groupBox, 0, 0, 1, 3);

        faktury_tableView = new QTableView(Faktury);
        faktury_tableView->setObjectName(QString::fromUtf8("faktury_tableView"));

        gridLayout->addWidget(faktury_tableView, 1, 0, 1, 3);

        dodaj_fakture_pushButton = new QPushButton(Faktury);
        dodaj_fakture_pushButton->setObjectName(QString::fromUtf8("dodaj_fakture_pushButton"));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        dodaj_fakture_pushButton->setFont(font);
        QIcon icon1;
        icon1.addPixmap(QPixmap(QString::fromUtf8("ikonki/22x22/add.png")), QIcon::Normal, QIcon::Off);
        dodaj_fakture_pushButton->setIcon(icon1);
        dodaj_fakture_pushButton->setIconSize(QSize(22, 22));

        gridLayout->addWidget(dodaj_fakture_pushButton, 2, 0, 1, 1);

        aktualizuj_fakture_pushButton = new QPushButton(Faktury);
        aktualizuj_fakture_pushButton->setObjectName(QString::fromUtf8("aktualizuj_fakture_pushButton"));
        aktualizuj_fakture_pushButton->setFont(font);
        QIcon icon2;
        icon2.addPixmap(QPixmap(QString::fromUtf8("ikonki/22x22/aktualizuj.png")), QIcon::Normal, QIcon::Off);
        aktualizuj_fakture_pushButton->setIcon(icon2);
        aktualizuj_fakture_pushButton->setIconSize(QSize(22, 22));

        gridLayout->addWidget(aktualizuj_fakture_pushButton, 2, 1, 1, 1);

        usun_fakture_pushButton = new QPushButton(Faktury);
        usun_fakture_pushButton->setObjectName(QString::fromUtf8("usun_fakture_pushButton"));
        usun_fakture_pushButton->setFont(font);
        QIcon icon3;
        icon3.addPixmap(QPixmap(QString::fromUtf8("ikonki/22x22/usun.png")), QIcon::Normal, QIcon::Off);
        usun_fakture_pushButton->setIcon(icon3);
        usun_fakture_pushButton->setIconSize(QSize(22, 22));

        gridLayout->addWidget(usun_fakture_pushButton, 2, 2, 1, 1);

        QIcon icon4;
        icon4.addPixmap(QPixmap(QString::fromUtf8("ikonki/16x16/faktury.png")), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(Faktury, icon4, QString());
        Klienci = new QWidget();
        Klienci->setObjectName(QString::fromUtf8("Klienci"));
        gridLayout_3 = new QGridLayout(Klienci);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        klienci_tableView = new QTableView(Klienci);
        klienci_tableView->setObjectName(QString::fromUtf8("klienci_tableView"));

        gridLayout_3->addWidget(klienci_tableView, 1, 0, 1, 3);

        dodaj_klienta_pushButton = new QPushButton(Klienci);
        dodaj_klienta_pushButton->setObjectName(QString::fromUtf8("dodaj_klienta_pushButton"));
        dodaj_klienta_pushButton->setFont(font);
        dodaj_klienta_pushButton->setIcon(icon1);
        dodaj_klienta_pushButton->setIconSize(QSize(22, 22));

        gridLayout_3->addWidget(dodaj_klienta_pushButton, 2, 0, 1, 1);

        aktualizuj_klienta_pushButton = new QPushButton(Klienci);
        aktualizuj_klienta_pushButton->setObjectName(QString::fromUtf8("aktualizuj_klienta_pushButton"));
        aktualizuj_klienta_pushButton->setFont(font);
        aktualizuj_klienta_pushButton->setIcon(icon2);
        aktualizuj_klienta_pushButton->setIconSize(QSize(22, 22));

        gridLayout_3->addWidget(aktualizuj_klienta_pushButton, 2, 1, 1, 1);

        usun_klienta_pushButton = new QPushButton(Klienci);
        usun_klienta_pushButton->setObjectName(QString::fromUtf8("usun_klienta_pushButton"));
        usun_klienta_pushButton->setFont(font);
        usun_klienta_pushButton->setIcon(icon3);
        usun_klienta_pushButton->setIconSize(QSize(22, 22));

        gridLayout_3->addWidget(usun_klienta_pushButton, 2, 2, 1, 1);

        szukaj_klienta_groupBox = new QGroupBox(Klienci);
        szukaj_klienta_groupBox->setObjectName(QString::fromUtf8("szukaj_klienta_groupBox"));
        szukaj_klienta_groupBox->setMinimumSize(QSize(0, 120));
        nazwa_klienta_label = new QLabel(szukaj_klienta_groupBox);
        nazwa_klienta_label->setObjectName(QString::fromUtf8("nazwa_klienta_label"));
        nazwa_klienta_label->setGeometry(QRect(20, 40, 51, 19));
        nazwa_klienta_lineEdit = new QLineEdit(szukaj_klienta_groupBox);
        nazwa_klienta_lineEdit->setObjectName(QString::fromUtf8("nazwa_klienta_lineEdit"));
        nazwa_klienta_lineEdit->setGeometry(QRect(90, 30, 181, 27));
        nip_lineEdit = new QLineEdit(szukaj_klienta_groupBox);
        nip_lineEdit->setObjectName(QString::fromUtf8("nip_lineEdit"));
        nip_lineEdit->setGeometry(QRect(380, 30, 181, 27));
        regon_lineEdit = new QLineEdit(szukaj_klienta_groupBox);
        regon_lineEdit->setObjectName(QString::fromUtf8("regon_lineEdit"));
        regon_lineEdit->setGeometry(QRect(380, 60, 181, 27));
        nr_konta_lineEdit = new QLineEdit(szukaj_klienta_groupBox);
        nr_konta_lineEdit->setObjectName(QString::fromUtf8("nr_konta_lineEdit"));
        nr_konta_lineEdit->setGeometry(QRect(90, 60, 181, 27));
        nip_label = new QLabel(szukaj_klienta_groupBox);
        nip_label->setObjectName(QString::fromUtf8("nip_label"));
        nip_label->setGeometry(QRect(330, 40, 51, 19));
        regon_label = new QLabel(szukaj_klienta_groupBox);
        regon_label->setObjectName(QString::fromUtf8("regon_label"));
        regon_label->setGeometry(QRect(330, 70, 51, 19));
        nr_konta_label = new QLabel(szukaj_klienta_groupBox);
        nr_konta_label->setObjectName(QString::fromUtf8("nr_konta_label"));
        nr_konta_label->setGeometry(QRect(20, 70, 71, 19));
        szukaj_klienta_pushButton = new QPushButton(szukaj_klienta_groupBox);
        szukaj_klienta_pushButton->setObjectName(QString::fromUtf8("szukaj_klienta_pushButton"));
        szukaj_klienta_pushButton->setGeometry(QRect(620, 90, 100, 30));
        szukaj_klienta_pushButton->setMinimumSize(QSize(100, 30));
        szukaj_klienta_pushButton->setMaximumSize(QSize(100, 30));

        gridLayout_3->addWidget(szukaj_klienta_groupBox, 0, 0, 1, 3);

        QIcon icon5;
        icon5.addPixmap(QPixmap(QString::fromUtf8("ikonki/16x16/klienci.png")), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(Klienci, icon5, QString());
        Produkty = new QWidget();
        Produkty->setObjectName(QString::fromUtf8("Produkty"));
        gridLayout_4 = new QGridLayout(Produkty);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        szukaj_produktu_groupBox = new QGroupBox(Produkty);
        szukaj_produktu_groupBox->setObjectName(QString::fromUtf8("szukaj_produktu_groupBox"));
        szukaj_produktu_groupBox->setMinimumSize(QSize(0, 131));
        szukaj_produktu_groupBox->setMaximumSize(QSize(16777215, 16777215));
        nazwa_label = new QLabel(szukaj_produktu_groupBox);
        nazwa_label->setObjectName(QString::fromUtf8("nazwa_label"));
        nazwa_label->setGeometry(QRect(20, 40, 73, 19));
        cena_label = new QLabel(szukaj_produktu_groupBox);
        cena_label->setObjectName(QString::fromUtf8("cena_label"));
        cena_label->setGeometry(QRect(330, 40, 73, 19));
        cena_od_label = new QLabel(szukaj_produktu_groupBox);
        cena_od_label->setObjectName(QString::fromUtf8("cena_od_label"));
        cena_od_label->setGeometry(QRect(360, 70, 31, 19));
        cena_do_label = new QLabel(szukaj_produktu_groupBox);
        cena_do_label->setObjectName(QString::fromUtf8("cena_do_label"));
        cena_do_label->setGeometry(QRect(510, 70, 31, 19));
        nazwa_produktu_lineEdit = new QLineEdit(szukaj_produktu_groupBox);
        nazwa_produktu_lineEdit->setObjectName(QString::fromUtf8("nazwa_produktu_lineEdit"));
        nazwa_produktu_lineEdit->setGeometry(QRect(90, 30, 191, 27));
        cena_do_lineEdit = new QLineEdit(szukaj_produktu_groupBox);
        cena_do_lineEdit->setObjectName(QString::fromUtf8("cena_do_lineEdit"));
        cena_do_lineEdit->setGeometry(QRect(540, 60, 100, 27));
        cena_do_lineEdit->setMinimumSize(QSize(100, 27));
        cena_do_lineEdit->setMaximumSize(QSize(100, 27));
        cena_od_lineEdit = new QLineEdit(szukaj_produktu_groupBox);
        cena_od_lineEdit->setObjectName(QString::fromUtf8("cena_od_lineEdit"));
        cena_od_lineEdit->setGeometry(QRect(390, 60, 100, 27));
        cena_od_lineEdit->setMinimumSize(QSize(100, 27));
        cena_od_lineEdit->setMaximumSize(QSize(100, 27));
        szukaj_produktu_pushButton = new QPushButton(szukaj_produktu_groupBox);
        szukaj_produktu_pushButton->setObjectName(QString::fromUtf8("szukaj_produktu_pushButton"));
        szukaj_produktu_pushButton->setGeometry(QRect(610, 100, 100, 30));
        szukaj_produktu_pushButton->setMinimumSize(QSize(100, 30));
        szukaj_produktu_pushButton->setMaximumSize(QSize(100, 30));
        stan_magazynu_label = new QLabel(szukaj_produktu_groupBox);
        stan_magazynu_label->setObjectName(QString::fromUtf8("stan_magazynu_label"));
        stan_magazynu_label->setGeometry(QRect(20, 70, 131, 19));
        stan_magazynu_odlabel = new QLabel(szukaj_produktu_groupBox);
        stan_magazynu_odlabel->setObjectName(QString::fromUtf8("stan_magazynu_odlabel"));
        stan_magazynu_odlabel->setGeometry(QRect(40, 100, 73, 19));
        stan_magazynu_do_label = new QLabel(szukaj_produktu_groupBox);
        stan_magazynu_do_label->setObjectName(QString::fromUtf8("stan_magazynu_do_label"));
        stan_magazynu_do_label->setGeometry(QRect(190, 100, 21, 19));
        stan_magazynu_od_lineEdit = new QLineEdit(szukaj_produktu_groupBox);
        stan_magazynu_od_lineEdit->setObjectName(QString::fromUtf8("stan_magazynu_od_lineEdit"));
        stan_magazynu_od_lineEdit->setGeometry(QRect(70, 90, 100, 27));
        stan_magazynu_od_lineEdit->setMinimumSize(QSize(100, 27));
        stan_magazynu_od_lineEdit->setMaximumSize(QSize(100, 27));
        stan_magazynu_do_lineEdit = new QLineEdit(szukaj_produktu_groupBox);
        stan_magazynu_do_lineEdit->setObjectName(QString::fromUtf8("stan_magazynu_do_lineEdit"));
        stan_magazynu_do_lineEdit->setGeometry(QRect(220, 90, 100, 27));
        stan_magazynu_do_lineEdit->setMinimumSize(QSize(100, 27));
        stan_magazynu_do_lineEdit->setMaximumSize(QSize(100, 27));

        gridLayout_4->addWidget(szukaj_produktu_groupBox, 0, 0, 1, 3);

        produkty_tab_view = new QTableView(Produkty);
        produkty_tab_view->setObjectName(QString::fromUtf8("produkty_tab_view"));

        gridLayout_4->addWidget(produkty_tab_view, 1, 0, 1, 3);

        dodaj_produkt_pushButton = new QPushButton(Produkty);
        dodaj_produkt_pushButton->setObjectName(QString::fromUtf8("dodaj_produkt_pushButton"));
        dodaj_produkt_pushButton->setFont(font);
        dodaj_produkt_pushButton->setIcon(icon1);
        dodaj_produkt_pushButton->setIconSize(QSize(22, 22));

        gridLayout_4->addWidget(dodaj_produkt_pushButton, 2, 0, 1, 1);

        aktualizuj_produkt_pushButton = new QPushButton(Produkty);
        aktualizuj_produkt_pushButton->setObjectName(QString::fromUtf8("aktualizuj_produkt_pushButton"));
        aktualizuj_produkt_pushButton->setFont(font);
        aktualizuj_produkt_pushButton->setIcon(icon2);
        aktualizuj_produkt_pushButton->setIconSize(QSize(22, 22));

        gridLayout_4->addWidget(aktualizuj_produkt_pushButton, 2, 1, 1, 1);

        usun_produktu_pushButton = new QPushButton(Produkty);
        usun_produktu_pushButton->setObjectName(QString::fromUtf8("usun_produktu_pushButton"));
        usun_produktu_pushButton->setFont(font);
        usun_produktu_pushButton->setIcon(icon3);
        usun_produktu_pushButton->setIconSize(QSize(22, 22));

        gridLayout_4->addWidget(usun_produktu_pushButton, 2, 2, 1, 1);

        QIcon icon6;
        icon6.addPixmap(QPixmap(QString::fromUtf8("ikonki/16x16/produkty.png")), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(Produkty, icon6, QString());

        gridLayout_2->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 764, 21));
        menu_Plik = new QMenu(menubar);
        menu_Plik->setObjectName(QString::fromUtf8("menu_Plik"));
        menuFaktury = new QMenu(menubar);
        menuFaktury->setObjectName(QString::fromUtf8("menuFaktury"));
        menuKlienci = new QMenu(menubar);
        menuKlienci->setObjectName(QString::fromUtf8("menuKlienci"));
        menuTowary = new QMenu(menubar);
        menuTowary->setObjectName(QString::fromUtf8("menuTowary"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        QWidget::setTabOrder(tabWidget, data_od_dateEdit);
        QWidget::setTabOrder(data_od_dateEdit, data_do_dateEdit);
        QWidget::setTabOrder(data_do_dateEdit, kwota_od_lineEdit);
        QWidget::setTabOrder(kwota_od_lineEdit, kwota_do_lineEdit);
        QWidget::setTabOrder(kwota_do_lineEdit, nazwa_klienta_szukaj_fakturylineEdit);
        QWidget::setTabOrder(nazwa_klienta_szukaj_fakturylineEdit, nip_szukaj_klienta_lineEdit);
        QWidget::setTabOrder(nip_szukaj_klienta_lineEdit, szukaj_fakture_pushButton);
        QWidget::setTabOrder(szukaj_fakture_pushButton, faktury_tableView);
        QWidget::setTabOrder(faktury_tableView, dodaj_fakture_pushButton);
        QWidget::setTabOrder(dodaj_fakture_pushButton, aktualizuj_fakture_pushButton);
        QWidget::setTabOrder(aktualizuj_fakture_pushButton, usun_fakture_pushButton);
        QWidget::setTabOrder(usun_fakture_pushButton, nazwa_klienta_lineEdit);
        QWidget::setTabOrder(nazwa_klienta_lineEdit, nr_konta_lineEdit);
        QWidget::setTabOrder(nr_konta_lineEdit, nip_lineEdit);
        QWidget::setTabOrder(nip_lineEdit, regon_lineEdit);
        QWidget::setTabOrder(regon_lineEdit, szukaj_klienta_pushButton);
        QWidget::setTabOrder(szukaj_klienta_pushButton, klienci_tableView);
        QWidget::setTabOrder(klienci_tableView, dodaj_klienta_pushButton);
        QWidget::setTabOrder(dodaj_klienta_pushButton, aktualizuj_klienta_pushButton);
        QWidget::setTabOrder(aktualizuj_klienta_pushButton, usun_klienta_pushButton);
        QWidget::setTabOrder(usun_klienta_pushButton, nazwa_produktu_lineEdit);
        QWidget::setTabOrder(nazwa_produktu_lineEdit, cena_od_lineEdit);
        QWidget::setTabOrder(cena_od_lineEdit, cena_do_lineEdit);
        QWidget::setTabOrder(cena_do_lineEdit, stan_magazynu_od_lineEdit);
        QWidget::setTabOrder(stan_magazynu_od_lineEdit, stan_magazynu_do_lineEdit);
        QWidget::setTabOrder(stan_magazynu_do_lineEdit, szukaj_produktu_pushButton);
        QWidget::setTabOrder(szukaj_produktu_pushButton, produkty_tab_view);
        QWidget::setTabOrder(produkty_tab_view, dodaj_produkt_pushButton);
        QWidget::setTabOrder(dodaj_produkt_pushButton, aktualizuj_produkt_pushButton);
        QWidget::setTabOrder(aktualizuj_produkt_pushButton, usun_produktu_pushButton);

        menubar->addAction(menu_Plik->menuAction());
        menubar->addAction(menuFaktury->menuAction());
        menubar->addAction(menuKlienci->menuAction());
        menubar->addAction(menuTowary->menuAction());
        menu_Plik->addAction(action_Dane_firmy);
        menu_Plik->addAction(action_Koniec);
        menuFaktury->addAction(actionDodaj_faktur);
        menuFaktury->addAction(actionUsu_faktur);
        menuFaktury->addAction(actionAktualizuj_faktur);
        menuKlienci->addAction(actionDodaj_klienta);
        menuKlienci->addAction(actionUsu_klienta);
        menuKlienci->addAction(actionAktualizuj_klienta);
        menuTowary->addAction(actionDodaj_produkt);
        menuTowary->addAction(actionUsu_produkt);
        menuTowary->addAction(actionAktualizuj_produkt);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        action_Koniec->setText(QApplication::translate("MainWindow", "&Koniec", 0, QApplication::UnicodeUTF8));
        action_Dane_firmy->setText(QApplication::translate("MainWindow", "&Dane firmy", 0, QApplication::UnicodeUTF8));
        actionDodaj_faktur->setText(QApplication::translate("MainWindow", "Dodaj faktur\304\231", 0, QApplication::UnicodeUTF8));
        actionUsu_faktur->setText(QApplication::translate("MainWindow", "Usu\305\204 faktur\304\231", 0, QApplication::UnicodeUTF8));
        actionAktualizuj_faktur->setText(QApplication::translate("MainWindow", "Aktualizuj faktur\304\231", 0, QApplication::UnicodeUTF8));
        actionDodaj_klienta->setText(QApplication::translate("MainWindow", "Dodaj klienta", 0, QApplication::UnicodeUTF8));
        actionUsu_klienta->setText(QApplication::translate("MainWindow", "Usu\305\204 klienta", 0, QApplication::UnicodeUTF8));
        actionAktualizuj_klienta->setText(QApplication::translate("MainWindow", "Aktualizuj klienta", 0, QApplication::UnicodeUTF8));
        actionDodaj_produkt->setText(QApplication::translate("MainWindow", "Dodaj produkt", 0, QApplication::UnicodeUTF8));
        actionUsu_produkt->setText(QApplication::translate("MainWindow", "Usu\305\204 produkt", 0, QApplication::UnicodeUTF8));
        actionAktualizuj_produkt->setText(QApplication::translate("MainWindow", "Aktualizuj produkt", 0, QApplication::UnicodeUTF8));
        actionDodaj_usluge->setText(QApplication::translate("MainWindow", "Dodaj us\305\202ug\304\231", 0, QApplication::UnicodeUTF8));
        actionUsu_usluge->setText(QApplication::translate("MainWindow", "Usu\305\204 us\305\202ug\304\231", 0, QApplication::UnicodeUTF8));
        actionAktualizuj_usluge->setText(QApplication::translate("MainWindow", "Aktualizuj us\305\202ug\304\231", 0, QApplication::UnicodeUTF8));
        szukaj_faktury_groupBox->setTitle(QApplication::translate("MainWindow", "Szukaj faktury", 0, QApplication::UnicodeUTF8));
        data_label->setText(QApplication::translate("MainWindow", "Data:", 0, QApplication::UnicodeUTF8));
        data_od_label->setText(QApplication::translate("MainWindow", "Od", 0, QApplication::UnicodeUTF8));
        data_do_label->setText(QApplication::translate("MainWindow", "Do", 0, QApplication::UnicodeUTF8));
        data_od_dateEdit->setDisplayFormat(QApplication::translate("MainWindow", "dd/MM/yyyy", 0, QApplication::UnicodeUTF8));
        data_do_dateEdit->setDisplayFormat(QApplication::translate("MainWindow", "dd/MM/yyyy", 0, QApplication::UnicodeUTF8));
        kwota_label->setText(QApplication::translate("MainWindow", "Kwota:", 0, QApplication::UnicodeUTF8));
        kwota_do_label->setText(QApplication::translate("MainWindow", "Do", 0, QApplication::UnicodeUTF8));
        kwota_od_label->setText(QApplication::translate("MainWindow", "Od", 0, QApplication::UnicodeUTF8));
        szukaj_fakture_pushButton->setText(QApplication::translate("MainWindow", "Szukaj", 0, QApplication::UnicodeUTF8));
        klient_szukaj_faktury_label->setText(QApplication::translate("MainWindow", "Klient:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Nazwa", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "NIP", 0, QApplication::UnicodeUTF8));
        dodaj_fakture_pushButton->setText(QApplication::translate("MainWindow", "Dodaj", 0, QApplication::UnicodeUTF8));
        aktualizuj_fakture_pushButton->setText(QApplication::translate("MainWindow", "Aktualizuj", 0, QApplication::UnicodeUTF8));
        usun_fakture_pushButton->setText(QApplication::translate("MainWindow", "Usu\305\204", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(Faktury), QApplication::translate("MainWindow", "Faktury", 0, QApplication::UnicodeUTF8));
        dodaj_klienta_pushButton->setText(QApplication::translate("MainWindow", "Dodaj", 0, QApplication::UnicodeUTF8));
        aktualizuj_klienta_pushButton->setText(QApplication::translate("MainWindow", "Aktualizuj", 0, QApplication::UnicodeUTF8));
        usun_klienta_pushButton->setText(QApplication::translate("MainWindow", "Usu\305\204", 0, QApplication::UnicodeUTF8));
        szukaj_klienta_groupBox->setTitle(QApplication::translate("MainWindow", "Szukaj klienta", 0, QApplication::UnicodeUTF8));
        nazwa_klienta_label->setText(QApplication::translate("MainWindow", "Nazwa", 0, QApplication::UnicodeUTF8));
        nip_label->setText(QApplication::translate("MainWindow", "NIP", 0, QApplication::UnicodeUTF8));
        regon_label->setText(QApplication::translate("MainWindow", "Regon", 0, QApplication::UnicodeUTF8));
        nr_konta_label->setText(QApplication::translate("MainWindow", "Nr konta", 0, QApplication::UnicodeUTF8));
        szukaj_klienta_pushButton->setText(QApplication::translate("MainWindow", "Szukaj", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(Klienci), QApplication::translate("MainWindow", "Klienci", 0, QApplication::UnicodeUTF8));
        szukaj_produktu_groupBox->setTitle(QApplication::translate("MainWindow", "Szukaj produktu", 0, QApplication::UnicodeUTF8));
        nazwa_label->setText(QApplication::translate("MainWindow", "Nazwa", 0, QApplication::UnicodeUTF8));
        cena_label->setText(QApplication::translate("MainWindow", "Cena:", 0, QApplication::UnicodeUTF8));
        cena_od_label->setText(QApplication::translate("MainWindow", "Od", 0, QApplication::UnicodeUTF8));
        cena_do_label->setText(QApplication::translate("MainWindow", "Do", 0, QApplication::UnicodeUTF8));
        szukaj_produktu_pushButton->setText(QApplication::translate("MainWindow", "Szukaj", 0, QApplication::UnicodeUTF8));
        stan_magazynu_label->setText(QApplication::translate("MainWindow", "Stan magazynu:", 0, QApplication::UnicodeUTF8));
        stan_magazynu_odlabel->setText(QApplication::translate("MainWindow", "Od", 0, QApplication::UnicodeUTF8));
        stan_magazynu_do_label->setText(QApplication::translate("MainWindow", "Do", 0, QApplication::UnicodeUTF8));
        dodaj_produkt_pushButton->setText(QApplication::translate("MainWindow", "Dodaj", 0, QApplication::UnicodeUTF8));
        aktualizuj_produkt_pushButton->setText(QApplication::translate("MainWindow", "Aktualizuj", 0, QApplication::UnicodeUTF8));
        usun_produktu_pushButton->setText(QApplication::translate("MainWindow", "Usu\305\204", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(Produkty), QApplication::translate("MainWindow", "Produkty", 0, QApplication::UnicodeUTF8));
        menu_Plik->setTitle(QApplication::translate("MainWindow", "&Plik", 0, QApplication::UnicodeUTF8));
        menuFaktury->setTitle(QApplication::translate("MainWindow", "Faktury", 0, QApplication::UnicodeUTF8));
        menuKlienci->setTitle(QApplication::translate("MainWindow", "Klienci", 0, QApplication::UnicodeUTF8));
        menuTowary->setTitle(QApplication::translate("MainWindow", "Produkty", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
