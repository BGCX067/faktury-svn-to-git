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


#ifndef DANE_FIRMY_H
#define DANE_FIRMY_H
#include <QtGui>

namespace Ui
{
    class Dane_Firmy;
}
/**
 * @author 52aqir
 */
class Dane_Firmy : public QDialog
{
    Q_OBJECT

public:
    Dane_Firmy(QWidget *parent);
    ~Dane_Firmy();

private:
    Ui::Dane_Firmy *ui;


private slots:
    void on_buttonBox_accepted();
    void on_buttonBox_rejected();

signals:
//    void Finished(QString nip);
};


#endif // DANE_FIRMY_H
