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

#include "aktualizuj_klienta.h"
#include "ui_dodaj_klienta.h"
#include <stdlib.h>
#include "cut.h"



Aktualizuj_Klienta::Aktualizuj_Klienta(QWidget *parent, QString id)
    : QDialog(parent), ui(new Ui::Dodaj_Klienta)
{

    ui->setupUi(this);
    this->id=id;
    if(klient.load(id.toStdString())){
    // 52aqir mod //

        string tmpsubject = klient.subject;
        int last_pos=0;
        string tmpImie = tmpsubject.substr(last_pos,cut_string(last_pos, tmpsubject));
        last_pos += tmpImie.length()+2;
        string tmpNazw = tmpsubject.substr(last_pos,cut_string(last_pos, tmpsubject));
        last_pos += tmpNazw.length()+2;
        string tmpNazFirmy = tmpsubject.substr(last_pos,cut_string(last_pos, tmpsubject));

    // end of 52aqir mod //

        ui->Imie_lineEdit->insert(QString::fromStdString(tmpImie));
        ui->Nazwisko_lineedit->insert(QString::fromStdString(tmpNazw));
        ui->Nazwa_Firmy_lineEdit->insert(QString::fromStdString(tmpNazFirmy));
        ui->Adres_lineEdit->insert(QString::fromStdString(klient.address));
        ui->NIP_lineEdit->insert(QString::fromStdString(klient.nip));
        ui->Regon_lineEdit->insert(QString::fromStdString(klient.regon));
        ui->telefon_kontaktowy_lineEdit->insert(QString::fromStdString(klient.telefon));
        ui->Nr_Konta_lineEdit->insert(QString::fromStdString(klient.nr_konta));
    }else
        done(0);
}

Aktualizuj_Klienta::~Aktualizuj_Klienta()
{
    delete ui;
}

void Aktualizuj_Klienta::on_buttonBox_accepted()
{
  QString imie_nazwisko, adres, nip, regon, telefon, nr_konta ;

  imie_nazwisko= ui->Imie_lineEdit->text();
  imie_nazwisko+= "# ";
  imie_nazwisko+=ui->Nazwisko_lineedit->text();
  imie_nazwisko+= "# ";
  imie_nazwisko+=ui->Nazwa_Firmy_lineEdit->text();
  adres= ui->Adres_lineEdit->text();
  if(ui->NIP_lineEdit->text().length()==0) nip="0"; else nip= ui->NIP_lineEdit->text();
  if(ui->Regon_lineEdit->text().length()==0) regon="0"; else regon=ui->Regon_lineEdit->text();
  telefon = ui->telefon_kontaktowy_lineEdit->text();
  nr_konta = ui->Nr_Konta_lineEdit->text();

  QObject::connect(this, SIGNAL(Finished(QString)), parentWidget(), SLOT(on_dodaj_klienta_Confirmed(QString)));
  emit Finished(nip);


  klient.subject = imie_nazwisko.toStdString();
  klient.address = adres.toStdString();
  klient.nip = nip.toStdString();
  klient.telefon = telefon.toStdString();
  klient.regon = regon.toStdString();
  klient.nr_konta = nr_konta.toStdString();

  klient.update();



  done(0);
}

void Aktualizuj_Klienta::on_buttonBox_rejected()
{
    this->done(0);
}
