// 52aqir //
#include "dane_firmy.h"
#include "ui_dane_firmy.h"
#include "mainwindow.h"
#include <fstream>
#include <stdlib.h>
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


#include "cut.h"
using namespace std;

Dane_Firmy::Dane_Firmy(QWidget *parent)
    : QDialog(parent), ui(new Ui::Dane_Firmy)
{
    ui->setupUi(this);

  // Pobranie danych z pliku z danymi firmy do formatki [Dane firmy] //

  string dane;
  fstream f;

  f.open("data/dane_firmy");
  if(!f){
      getline(f, dane);
      int last_pos=0;
      ui->imie_lineEdit->insert(QString::fromStdString(dane.substr(last_pos,cut_string(last_pos, dane))));
      last_pos += (QString::fromStdString(dane.substr(last_pos,cut_string(last_pos, dane)))).length()+1;
      ui->nazwisko_lineedit->insert(QString::fromStdString(dane.substr(last_pos,cut_string(last_pos, dane))));
      last_pos += (QString::fromStdString(dane.substr(last_pos,cut_string(last_pos, dane)))).length()+1;
      ui->nazwa_firmy_lineEdit->insert(QString::fromStdString(dane.substr(last_pos,cut_string(last_pos, dane))));
      last_pos += (QString::fromStdString(dane.substr(last_pos,cut_string(last_pos, dane)))).length()+1;
      ui->adres_lineEdit->insert(QString::fromStdString(dane.substr(last_pos,cut_string(last_pos, dane))));
      last_pos += (QString::fromStdString(dane.substr(last_pos,cut_string(last_pos, dane)))).length()+1;
      ui->nip_lineEdit->insert(QString::fromStdString(dane.substr(last_pos,cut_string(last_pos, dane))));
      last_pos += (QString::fromStdString(dane.substr(last_pos,cut_string(last_pos, dane)))).length()+1;
      ui->regon_lineEdit->insert(QString::fromStdString(dane.substr(last_pos,cut_string(last_pos, dane))));
      last_pos += (QString::fromStdString(dane.substr(last_pos,cut_string(last_pos, dane)))).length()+1;
      ui->nr_konta_lineEdit->insert(QString::fromStdString(dane.substr(last_pos,cut_string(last_pos, dane))));
      last_pos += (QString::fromStdString(dane.substr(last_pos,cut_string(last_pos, dane)))).length()+1;
      ui->telefon_kontaktowy_lineEdit->insert(QString::fromStdString(dane.substr(last_pos,cut_string(last_pos, dane))));
      last_pos += (QString::fromStdString(dane.substr(last_pos,cut_string(last_pos, dane)))).length()+1;
      ui->logo_lineEdit->insert(QString::fromStdString(dane.substr(last_pos,cut_string(last_pos, dane))));
      last_pos += (QString::fromStdString(dane.substr(last_pos,cut_string(last_pos, dane)))).length()+1;
      f.close();
  }
  // koniec pobierania danych //

  }

Dane_Firmy::~Dane_Firmy()
{
    delete ui;
}


void Dane_Firmy::on_buttonBox_accepted()
{

  QString imie, nazwisko, nazwa_firmy, adres, nip, regon, nr_konta, tel_kontaktowy, logo;
  imie = ui->imie_lineEdit->text();
  nazwisko = ui->nazwisko_lineedit->text();
  nazwa_firmy = ui->nazwa_firmy_lineEdit->text();
  adres = ui->adres_lineEdit->text();
  nip = ui->nip_lineEdit->text();
  regon = ui->regon_lineEdit->text();
  nr_konta = ui->nr_konta_lineEdit->text();
  tel_kontaktowy = ui->telefon_kontaktowy_lineEdit->text();
  logo = ui->logo_lineEdit->text();

  string dane;

  // zapis //

  dane += ui->imie_lineEdit->text().toStdString();
  dane += "#";
  dane += ui->nazwisko_lineedit->text().toStdString();
  dane += "#";
  dane += ui->nazwa_firmy_lineEdit->text().toStdString();
  dane += "#";
  dane += ui->adres_lineEdit->text().toStdString();
  dane += "#";
  dane += ui->nip_lineEdit->text().toStdString();
  dane += "#";
  dane += ui->regon_lineEdit->text().toStdString();
  dane += "#";
  dane += ui->nr_konta_lineEdit->text().toStdString();
  dane += "#";
  dane += ui->telefon_kontaktowy_lineEdit->text().toStdString();
  dane += "#";
  dane += ui->logo_lineEdit->text().toStdString();
  dane += "#";

  fstream f;
  f.open("../../../data/dane_firmy");
  f << dane;
  f.close();

    done(0);
// koniec zapis //
}


void Dane_Firmy::on_buttonBox_rejected()
{
    this->done(0);
}
