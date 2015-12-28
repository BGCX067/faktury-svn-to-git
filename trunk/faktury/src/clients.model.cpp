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

/*
 * File:   clients.model.cpp
 * Author: dext
 *
 *
 * Created on 28 maj 2009, 09:20
 */


#include "model.cls.cpp"
#include "sqlite3.h"
#include <string>

#ifndef _CLIENTS_MODEL_CPP
#define	_CLIENTS_MODEL_CPP



class Client : public Model {

public:


	Client( ) {
		table_name = "clients";
	};


	~Client( ) { };
	string id;
	string subject;
	string address;
	string nip;
	string regon;
	string nr_konta;
	string telefon;


	bool load( string load_id ) {
		map<string, string> resoults[ 10000 ];
		select( resoults, "id = " + load_id );
		id = load_id;
		subject = resoults[ 0 ][ "subject" ];
		address = resoults[ 0 ][ "address" ];
		nip = resoults[ 0 ][ "nip" ];
                regon = resoults[ 0 ][ "regon" ];
                telefon = resoults[ 0 ][ "telefon" ];
                nr_konta = resoults[ 0 ][ "nr_konta" ];
		return true;
	}


	bool select( map<string, string> resoults[ 10000 ], string where = "" ) {


		sqlite3_stmt *stmt;
		int i = 0;
		//cout << endl << get_select_sql( where ) << endl;
		sqlite3_prepare_v2( db_, get_select_sql( where ).c_str( ), -1, &stmt, NULL );
		while( sqlite3_step( stmt ) == SQLITE_ROW ) {

			resoults[ i ][ "id" ]		= (char*)sqlite3_column_text( stmt, 0 );
			resoults[ i ][ "subject" ]	= (char*)sqlite3_column_text( stmt, 1 );
			resoults[ i ][ "address" ]	= (char*)sqlite3_column_text( stmt, 2 );
			resoults[ i ][ "nip" ]		= (char*)sqlite3_column_text( stmt, 3 );
			resoults[ i ][ "regon" ]	= (char*)sqlite3_column_text( stmt, 4 );
			resoults[ i ][ "nr_konta" ] = (char*)sqlite3_column_text( stmt, 5 );
			resoults[ i ][ "telefon" ]	= (char*)sqlite3_column_text( stmt, 6 );

			i++;
		}
		sqlite3_finalize( stmt );
		return true;
	}


	bool insert( ) {
		string tmp;
		tmp = "INSERT INTO clients ( subject, address, nip, regon, nr_konta, telefon ) values( '";
		tmp += subject;
		tmp += "', '";
		tmp += address;
		tmp += "', ";
		tmp += nip;
		tmp += ", ";
		tmp += regon;
		tmp += ", '";
		tmp += nr_konta;
		tmp += "', '";
		tmp += telefon;
		tmp += "' )";
		
		return exec( tmp.c_str( ) );
	}


	bool update( ) {
		string tmp;
		tmp = "UPDATE clients SET subject = '";
		tmp += subject;
		tmp += "', address = '";
		tmp += address;
		tmp += "', nip = ";
		tmp += nip;
		tmp += ", regon = ";
		tmp += regon;
		tmp += ", nr_konta = '";
		tmp += nr_konta;
		tmp += "', telefon = '";
		tmp += telefon;
		tmp += "' WHERE id = ";
		tmp += id;

		return exec( tmp.c_str( ) );
	}
private:
};

#endif	/* _CLIENTS_MODEL_CPP */

