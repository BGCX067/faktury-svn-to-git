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


#include "aktualizuj_produkt.h"
#include "ui_dodaj_towar.h"
#include <stdlib.h>
#include "cut.h"



Aktualizuj_Produkt::Aktualizuj_Produkt(QWidget *parent, QString id)
    : QDialog(parent), ui(new Ui::Dodaj_Towar)
{
    ui->setupUi(this);
    this->id=id;
    if(produkt.load(id.toStdString())){
        ui->Nazwa_Produktu_lineEdit->insert(QString::fromStdString(produkt.name));
        ui->ilosc_lineEdit->insert(QString::fromStdString(produkt.stack));
        ui->Cena_Netto_lineEdit->insert(QString::fromStdString(produkt.price));
        if(produkt.vat == "-1") ui->VAT_comboBox->setCurrentIndex(0);
        if(produkt.vat == "0") ui->VAT_comboBox->setCurrentIndex(1);
        if(produkt.vat == "3") ui->VAT_comboBox->setCurrentIndex(2);
        if(produkt.vat == "7") ui->VAT_comboBox->setCurrentIndex(3);
        if(produkt.vat == "22") ui->VAT_comboBox->setCurrentIndex(4);
    }
        done(0);
}

Aktualizuj_Produkt::~Aktualizuj_Produkt()
{
    delete ui;
}

void Aktualizuj_Produkt::on_buttonBox_accepted()
{
   QString name, vat, stack, price;
  name = ui->Nazwa_Produktu_lineEdit->text();
  vat = ui->VAT_comboBox->currentText();
  if(vat == "zw") vat = "-1";
  else vat.remove('%');
  stack = ui->ilosc_lineEdit->text();
  price = ui->Cena_Netto_lineEdit->text();

  QObject::connect(this, SIGNAL(Finished(QString)), parentWidget(), SLOT(on_dodaj_produkt_Confirmed(QString)));


  produkt.name = name.toStdString();
  produkt.vat = vat.toStdString();
  produkt.stack = stack.toStdString();
  produkt.price = price.toStdString();

  produkt.update();
  emit Finished(QString::fromStdString(produkt.name));



  done(0);
}

void Aktualizuj_Produkt::on_buttonBox_rejected()
{
    this->done(0);
}
