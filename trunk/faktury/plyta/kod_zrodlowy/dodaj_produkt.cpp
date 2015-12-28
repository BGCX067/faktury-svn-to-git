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


#include "dodaj_produkt.h"
#include "ui_dodaj_towar.h"
#include "mainwindow.h"
#include <stdlib.h>
#include "cut.h"


Dodaj_Produkt::Dodaj_Produkt(QWidget *parent)
    : QDialog(parent), ui(new Ui::Dodaj_Towar)
{
    ui->setupUi(this);
}

Dodaj_Produkt::~Dodaj_Produkt()
{
    delete ui;
}

void Dodaj_Produkt::on_buttonBox_accepted()
{
  QString name, vat, stack, price;
  name = ui->Nazwa_Produktu_lineEdit->text();
  vat = ui->VAT_comboBox->currentText();
  if(vat == "zw") vat = "-1";
  else vat.remove('%');
  stack = ui->ilosc_lineEdit->text();
  price = ui->Cena_Netto_lineEdit->text();

  QObject::connect(this, SIGNAL(Finished(QString)), parentWidget(), SLOT(on_dodaj_produkt_Confirmed(QString)));


  Product produkt;
  produkt.name = name.toStdString();
  produkt.vat = vat.toStdString();
  produkt.stack = stack.toStdString();
  produkt.price = price.toStdString();

  produkt.insert();
  emit Finished(QString::fromStdString(produkt.name));
  done(0);
}

void Dodaj_Produkt::on_buttonBox_rejected()
{
    this->done(0);
}
