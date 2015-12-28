/*
        This program is free software; you can redistribute it and/or modify
        it under the terms of the GNU General Public License as published by
        the Free Software Foundation; either version 2 of the License, or
        (at your option) any later version.

        This program is distributed in the hope that it will be useful,
        but WITHOUT ANY WARRANTY; without even the implied warranty of
        MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
        GNU General Public License for more details.

        You should have received a copy of the GNU General Public License
        along with this program; if not, write to the Free Software
        Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
        MA 02110-1301, USA.

*/


#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dodaj_klienta.h"
#include "aktualizuj_klienta.h"
#include "dane_firmy.h"
#include "dodaj_produkt.h"
#include "aktualizuj_produkt.h"
#include "cut.h"


void MainWindow::Test(int test, QString plik){
    switch(test){
        case 0: break;
        case 1: Dodaj_Klienta dodaj_klienta(this , test, plik);
                dodaj_klienta.exec();

                this->on_szukaj_klienta_pushButton_clicked();
                QModelIndex actual_cell = ui->klienci_tableView->indexAt(QPoint(0,1));
                //QModelIndex actual_cell=ui->klienci_tableView->currentIndex();

                ifstream data;
                data.open(plik.toStdString().c_str());
                ofstream raport;
                raport.open("Raport_Z_Testow_Dodaj_Klienta.txt");
                string imie, nazwisko, firma, adres, nip, regon, telefon, nr_konta;
                string tab_danych[8];
                string dump;
                int number=0;
                for(int i=0; actual_cell.isValid(); i++){
                    actual_cell = actual_cell.sibling(i, 1);
                    for(int j=0; j<8;j++){
                        QVariant unknown = client_model->data(actual_cell, 0);
                        tab_danych[j]= unknown.toString().toStdString();
                        if(j!=7)
                        actual_cell = actual_cell.sibling(i, j+2);
                    }


                    if(data.is_open()){
                        data >> dump;
                        if(!data.eof()){
                            imie = dump;
                            data >> nazwisko;
                            data >> firma;
                            data >> adres;
                            data >> nip;
                            data >> regon;
                            data >> telefon;
                            data >> nr_konta;
                            if(imie != tab_danych[0]) raport << "Osoba Testowa nr: " << i << " Nie poprawne imie" << endl;
                            if(nazwisko != tab_danych[1]) raport << "Osoba Testowa nr: " << i << " Nie poprawne nazwisko" << endl;
                            if(firma != tab_danych[2]) raport << "Osoba Testowa nr: " << i << " Nie poprawne firma" << endl;
                            if(adres != tab_danych[3]) raport << "Osoba Testowa nr: " << i << " Nie poprawne adres" << endl;
                            if(nip != tab_danych[4]) raport << "Osoba Testowa nr: " << i << " Nie poprawne nip" << endl;
                            if(regon != tab_danych[5]) raport << "Osoba Testowa nr: " << i << " Nie poprawne regon" << endl;
                            if(telefon != tab_danych[6]) raport << "Osoba Testowa nr: " << i << " Nie poprawne telefon" << endl;
                            if(nr_konta != tab_danych[7]) raport << "Osoba Testowa nr: " << i << " Nie poprawne nr_konta" << endl;
                            raport << "Osoba Testowa nr: " << i << " Koniec Testu." << endl;
                            number++;
                        }
                    }
                }
                raport << "Test Dodawania Klientow zakonczony" << endl;
                Client client;
                for(int k=1; k!=number+1; k++ ){
                    char a[20];
                    itoa ( k, a, 10 );
                    client.del(string(a));
                    raport << "Usuniety " << k << " (chyba)" << endl;
                }
                raport << "Usuwanie Klientow Testowych Zakonczone " << endl;
                raport.close();
                data.close();
                exit(0);
                break;

            }

}


MainWindow::MainWindow(QWidget *parent, int test, QString plik)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Faktury by EliamLance, Dexter, 52aqir");
    QIcon icon;
    icon.addPixmap(QPixmap("../../doc/dev/ikonka.png"), QIcon::Normal, QIcon::Off);
    setWindowIcon(icon);
    Setup_Client_Model();
    ui->klienci_tableView->setModel(client_model);
    Setup_Product_Model();
    ui->produkty_tab_view->setModel(product_model);

    Test(test, plik);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Setup_Client_Model()
{
    client_model = new QStandardItemModel(0, 9, this);
    client_model->setHeaderData(0, Qt::Horizontal, tr("ID"));
    client_model->setHeaderData(1, Qt::Horizontal, tr("Imie"));
    client_model->setHeaderData(2, Qt::Horizontal, tr("Nazwisko"));
    client_model->setHeaderData(3, Qt::Horizontal, tr("Nazwa Firmy"));
    client_model->setHeaderData(4, Qt::Horizontal, tr("Adres"));
    client_model->setHeaderData(5, Qt::Horizontal, tr("NIP"));
    client_model->setHeaderData(6, Qt::Horizontal, tr("Regon"));
    client_model->setHeaderData(7, Qt::Horizontal, tr("Telefon"));
    client_model->setHeaderData(8, Qt::Horizontal, tr("Numer Konta"));

}

void MainWindow::Setup_Product_Model()
{
    product_model = new QStandardItemModel(0, 5, this);
    product_model->setHeaderData(0, Qt::Horizontal, tr("ID"));
    product_model->setHeaderData(1, Qt::Horizontal, tr("Name"));
    product_model->setHeaderData(2, Qt::Horizontal, tr("Vat"));
    product_model->setHeaderData(3, Qt::Horizontal, tr("Stack"));
     product_model->setHeaderData(4, Qt::Horizontal, tr("Price"));
}


void MainWindow::on_dodaj_klienta_pushButton_clicked()
{
    Dodaj_Klienta dodaj_klienta(this);
    dodaj_klienta.exec();
}

void MainWindow::on_dodaj_klienta_Confirmed(QString nip){
    //ui->nip_lineEdit->setText(nip);
}

void MainWindow::on_szukaj_klienta_pushButton_clicked()
{
    for(int i=0;i<10000;i++){
        clients_data[i].clear();
    }

    client_model->removeRows(0, client_model->rowCount(QModelIndex()), QModelIndex());
    string name,nip,where;
    name= ui->nazwa_klienta_lineEdit->text().toStdString();
    nip= ui->nip_lineEdit->text().toStdString();
    if(name.length()>0){
    // 52aqir mod //
    where +="subject LIKE '%" + name +"%'";
   if(nip.length()>0){
            where+= "AND nip LIKE '%" + nip + "%'";
        }
    }else
        if(nip.length()>0){
            where+= "nip LIKE '%" + nip + "%'";
    // end of 52aqir mod //
    }
    if(where.length()>0){
        clients_data_base.select(clients_data, where);
    }else
    clients_data_base.select(clients_data);


    for(int i = 0 ; clients_data[i]["id"]!="";i++){
        // 52aqir mod //
        string tmpsubject = clients_data[i]["subject"];

        int last_pos=0;
        string tmpImie = tmpsubject.substr(last_pos,cut_string(last_pos, tmpsubject));
        last_pos += tmpImie.length()+2;

        string tmpNazw = tmpsubject.substr(last_pos,cut_string(last_pos, tmpsubject));
        last_pos += tmpNazw.length()+2;


        string tmpNazFirmy = tmpsubject.substr(last_pos,cut_string(last_pos, tmpsubject));
        cout << "\nStart tmpNazFirmy: " << cut_string(last_pos, tmpsubject);
        // end of 52aqir mod //




        client_model->insertRows(i, 1, QModelIndex());
        client_model->setData(client_model->index(i, 0, QModelIndex()), QString::fromStdString(clients_data[i]["id"]));
        client_model->setData(client_model->index(i, 1, QModelIndex()), QString::fromStdString(tmpImie));
        client_model->setData(client_model->index(i, 2, QModelIndex()), QString::fromStdString(tmpNazw));
        client_model->setData(client_model->index(i, 3, QModelIndex()), QString::fromStdString(tmpNazFirmy));
        client_model->setData(client_model->index(i, 4, QModelIndex()), QString::fromStdString(clients_data[i]["address"]));
        client_model->setData(client_model->index(i, 5, QModelIndex()), QString::fromStdString(clients_data[i]["nip"]));
        client_model->setData(client_model->index(i, 6, QModelIndex()), QString::fromStdString(clients_data[i]["regon"]));
        client_model->setData(client_model->index(i, 7, QModelIndex()), QString::fromStdString(clients_data[i]["telefon"]));
        client_model->setData(client_model->index(i, 8, QModelIndex()), QString::fromStdString(clients_data[i]["nr_konta"]));
    }
    ui->klienci_tableView->resizeColumnsToContents();
}

void MainWindow::on_aktualizuj_klienta_pushButton_clicked()
{
    QItemSelectionModel *selection_model = ui->klienci_tableView->selectionModel();
    QModelIndexList model_index_list = selection_model->selectedIndexes();
    if(!model_index_list.empty()){
        QModelIndex actual_cell = model_index_list.takeFirst();
        QModelIndex actual_ID = actual_cell.sibling(actual_cell.row(), 0 );
        QVariant unkown_type_data = client_model->data(actual_ID, 0);
        QString known_type_data = unkown_type_data.toString();
        Aktualizuj_Klienta aktualizuj_klienta(this,known_type_data);
        aktualizuj_klienta.exec();
    }
}

void MainWindow::on_action_Dane_firmy_triggered()
{
    Dane_Firmy dane_firmy(this);
    dane_firmy.exec();
}

void MainWindow::on_actionDodaj_klienta_triggered()
{
    Dodaj_Klienta dodaj_klienta(this);
    dodaj_klienta.exec();
}

void MainWindow::on_actionAktualizuj_klienta_triggered()
{
    QItemSelectionModel *selection_model = ui->klienci_tableView->selectionModel();
    QModelIndexList model_index_list = selection_model->selectedIndexes();
    if(!model_index_list.empty()){
        QModelIndex actual_cell = model_index_list.takeFirst();
        QModelIndex actual_ID = actual_cell.sibling(actual_cell.row(), 0 );
        QVariant unkown_type_data = client_model->data(actual_ID, 0);
        QString known_type_data = unkown_type_data.toString();
        Aktualizuj_Klienta aktualizuj_klienta(this,known_type_data);
        aktualizuj_klienta.exec();
    }
}

void MainWindow::on_action_Koniec_triggered()
{
    this->close();
}

void MainWindow::on_dodaj_produkt_Confirmed(QString name){
    ui->nazwa_produktu_lineEdit->setText(name);
}

void MainWindow::on_dodaj_produkt_pushButton_clicked(){
    Dodaj_Produkt dodaj_produkt(this);
    dodaj_produkt.exec();
}

void MainWindow::on_aktualizuj_produkt_pushButton_clicked(){
    QItemSelectionModel *selection_model = ui->produkty_tab_view->selectionModel();
    QModelIndexList model_index_list = selection_model->selectedIndexes();
    if(!model_index_list.empty()){
        QModelIndex actual_cell = model_index_list.takeFirst();
        QModelIndex actual_ID = actual_cell.sibling(actual_cell.row(), 0 );
        QVariant unkown_type_data = product_model->data(actual_ID, 0);
        QString known_type_data = unkown_type_data.toString();
        Aktualizuj_Produkt aktualizuj_produkt(this,known_type_data);
        aktualizuj_produkt.exec();
    }
}

void MainWindow::on_actionAktualizuj_produkt_triggered(){
    QItemSelectionModel *selection_model = ui->produkty_tab_view->selectionModel();
    QModelIndexList model_index_list = selection_model->selectedIndexes();
    if(!model_index_list.empty()){
        QModelIndex actual_cell = model_index_list.takeFirst();
        QModelIndex actual_ID = actual_cell.sibling(actual_cell.row(), 0 );
        QVariant unkown_type_data = client_model->data(actual_ID, 0);
        QString known_type_data = unkown_type_data.toString();
        Aktualizuj_Produkt aktualizuj_produkt(this,known_type_data);
        aktualizuj_produkt.exec();
    }
}

void MainWindow::on_szukaj_produktu_pushButton_clicked()
{
    for(int i=0;i<10000;i++){
        products_data[i].clear();
    }

    product_model->removeRows(0, product_model->rowCount(QModelIndex()), QModelIndex());
    string name,where;
    name= ui->nazwa_produktu_lineEdit->text().toStdString();
    if(name.length()>0){
    // 52aqir mod //
    where +="name LIKE '%" + name +"%'";
    }
    if(where.length()>0){
        products_data_base.select(products_data, where);
    }else
    products_data_base.select(products_data);


    for(int i = 0 ; products_data[i]["id"]!="";i++){

        product_model->insertRows(i, 1, QModelIndex());
        product_model->setData(product_model->index(i, 0, QModelIndex()), QString::fromStdString(products_data[i]["id"]));
        product_model->setData(product_model->index(i, 1, QModelIndex()), QString::fromStdString(products_data[i]["name"]));
        QString vat= QString::fromStdString(products_data[i]["vat"]);
        if(vat == "-1")
            vat = "zw";
        else
            vat += "%";
        product_model->setData(product_model->index(i, 2, QModelIndex()), vat);
        product_model->setData(product_model->index(i, 3, QModelIndex()), QString::fromStdString(products_data[i]["stack"]));
        product_model->setData(product_model->index(i, 4, QModelIndex()), QString::fromStdString(products_data[i]["price"]));
    }
    ui->produkty_tab_view->resizeColumnsToContents();
}

void MainWindow::on_usun_produktu_pushButton_clicked(){
    QItemSelectionModel *selection_model = ui->produkty_tab_view->selectionModel();
    QModelIndexList model_index_list = selection_model->selectedIndexes();
    if(!model_index_list.empty()){
        QModelIndex actual_cell = model_index_list.takeFirst();
        QModelIndex actual_ID = actual_cell.sibling(actual_cell.row(), 0 );
        QVariant unkown_type_data = product_model->data(actual_ID, 0);
        QString known_type_data = unkown_type_data.toString();
        Product product;
        product.del(known_type_data.toStdString());
    }
    emit(ui->szukaj_produktu_pushButton->click());
}

void MainWindow::on_usun_klienta_pushButton_clicked(){
    QItemSelectionModel *selection_model = ui->klienci_tableView->selectionModel();
    QModelIndexList model_index_list = selection_model->selectedIndexes();
    if(!model_index_list.empty()){
        QModelIndex actual_cell = model_index_list.takeFirst();
        QModelIndex actual_ID = actual_cell.sibling(actual_cell.row(), 0 );
        QVariant unkown_type_data = client_model->data(actual_ID, 0);
        QString known_type_data = unkown_type_data.toString();
        Client client;
        client.del(known_type_data.toStdString());
    }
    emit(ui->szukaj_klienta_pushButton->click());
}
