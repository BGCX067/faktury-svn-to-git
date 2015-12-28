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


#include "dodaj_klienta.h"
#include "ui_dodaj_klienta.h"
#include "mainwindow.h"
#include <stdlib.h>
#include "cut.h"
#include <fstream>
#include <iostream>
#include <string>

void Dodaj_Klienta::Test(int test, QString plik){
    switch(test){
        case 0: break;
        case 1:
            string imie, nazwisko, firma, adres, nip, regon, telefon, nr_konta;
            ifstream data;
            data.open(plik.toStdString().c_str());
            string dump;
            if(data.is_open())
                data >> dump;
                while(!data.eof()){
                    imie = dump;
                    data >> nazwisko;
                    data >> firma;
                    data >> adres;
                    data >> nip;
                    data >> regon;
                    data >> telefon;
                    data >> nr_konta;

                    ui->Imie_lineEdit->setText(QString::fromStdString(imie));
                    ui->Nazwisko_lineedit->setText(QString::fromStdString(nazwisko));
                    ui->Nazwa_Firmy_lineEdit->setText(QString::fromStdString(firma));
                    ui->Adres_lineEdit->setText(QString::fromStdString(adres));
                    ui->NIP_lineEdit->setText(QString::fromStdString(nip));
                    ui->Regon_lineEdit->setText(QString::fromStdString(regon));
                    ui->telefon_kontaktowy_lineEdit->setText(QString::fromStdString(telefon));
                    ui->Nr_Konta_lineEdit->setText(QString::fromStdString(nr_konta));

                    /*imie= ui->Imie_lineEdit->text().toStdString();
                    imie+= "# ";
                    imie+=ui->Nazwisko_lineedit->text().toStdString();
                    imie+= "# ";
                    imie+=ui->Nazwa_Firmy_lineEdit->text().toStdString();
                    adres= ui->Adres_lineEdit->text().toStdString();
                    nip= ui->NIP_lineEdit->text().toStdString();
                    regon=ui->Regon_lineEdit->text().toStdString();
                    telefon = ui->telefon_kontaktowy_lineEdit->text().toStdString();
                    nr_konta = ui->Nr_Konta_lineEdit->text().toStdString();

                    Client klient;
                    klient.subject = imie;
                    klient.address = adres;
                    klient.nip = nip;
                    klient.telefon = telefon;
                    klient.regon = regon;
                    klient.nr_konta = nr_konta;

                    klient.insert();*/
                    this->on_buttonBox_accepted();
                    data >> dump;
                }
            data.close();
            this->close();
        }
}

Dodaj_Klienta::Dodaj_Klienta(QWidget *parent, int test, QString plik)
    : QDialog(parent), ui(new Ui::Dodaj_Klienta)
{
    ui->setupUi(this);
    this->test = test;
    Test(test, plik);
}

Dodaj_Klienta::~Dodaj_Klienta()
{
    delete ui;
}

void Dodaj_Klienta::on_buttonBox_accepted()
{
  QString imie_nazwisko, adres, nip, regon, telefon, nr_konta ;
  imie_nazwisko= ui->Imie_lineEdit->text();
  imie_nazwisko+= "# ";
  imie_nazwisko+=ui->Nazwisko_lineedit->text();
  imie_nazwisko+= "# ";
  imie_nazwisko+=ui->Nazwa_Firmy_lineEdit->text();

  adres= ui->Adres_lineEdit->text();
  // 52aqir mod
  if(ui->NIP_lineEdit->text().length()==0) nip="0"; else nip= ui->NIP_lineEdit->text();
  if(ui->Regon_lineEdit->text().length()==0) regon="0"; else regon=ui->Regon_lineEdit->text();
  // rozwiazanie chwilowe dopoki nie dowiem sie jak przekazac null
  // end of 52aqir mod
  telefon = ui->telefon_kontaktowy_lineEdit->text();
  nr_konta = ui->Nr_Konta_lineEdit->text();




  Client klient;
  klient.subject = imie_nazwisko.toStdString();
  klient.address = adres.toStdString();
  klient.nip = nip.toStdString();
  klient.telefon = telefon.toStdString();
  klient.regon = regon.toStdString();
  klient.nr_konta = nr_konta.toStdString();

  klient.insert();
  if(test){
      QObject::connect(this, SIGNAL(Finished(QString)), parentWidget(), SLOT(on_dodaj_klienta_Confirmed(QString)));
      emit Finished(QString::fromStdString(klient.nip));
      done(0);
  }
}

void Dodaj_Klienta::on_buttonBox_rejected()
{
    this->done(0);
}
