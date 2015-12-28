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
 * File:   model.cls.cpp
 * Author: dext
 *
 * Klasa bazowa dla wszystkich modeli.
 *
 * Created on 28 maj 2009, 09:19
 */

#include <stdio.h>
#include <iostream>
#include <fstream>
#include "sqlite3.h"

#ifndef _MODEL_CLS_CPP
#define	_MODEL_CLS_CPP

#define DB_FILE "data/db2"
#define DEBUG false

using namespace std;


/**
 * Nikomu do niczego nie potrzebna fukkcja, konieczna, by zadowoli� SQLite
 */
static int lambda( void *NotUsed, int argc, char **argv, char **azColName ) {
	return 0;
}



/**
 *
 * Klasa podstawowa dla modeli w systemie. Definije po��czenie z baz� araz podstawowe API.
 *
 * @author dext
 */
class Model {

public:
	char *errmsg_;


	/**
	 * Otwiera po��czenia z baz�, w razie konieczno �ci tworzy tabele.
	 */
	Model( ) {
		if( ifstream( DB_FILE ) ) {
			connect( );
		} else {
			connect( );
			exec( "create table clients ( id integer primary key, subject text, address text, nip integer, regon integer, nr_konta text, telefon text )" );
			exec( "create table products ( id integer primary key, name text, vat integer, stack integer, price integer )" );
		}


	}


	/**
	 * Zamyka po��cznie z baz�
	 */
	~Model( ) {
		sqlite3_close( db_ );
	}


	/**
	 * @param string id id rekordu do usunięcia
	 * @return bool false jeśli operacja się nie powiodła
	 */
	bool del( string id ) {
		string tmp;
		tmp = "DELETE FROM " + table_name + " WHERE id = " + id;
		return exec( tmp.c_str( ) );
	}

	/**
	 * Ładuje dane o rekordzie do obiektu, konieczne do wykanania przez updatem
	 *
	 * @param string load_id id rekordu zo załadowania
	 * @return bool true jeśli rekord istnieje w bazie
	 */
	bool load( string load_id );

	/**
	 * Funkcja zwraca tablicę map z listą rekordów z tabeli
	 *
	 * @param array tablica do której zostaną załadowane wyniki
	 * @param string where
	 * @return bool true jeśli operacja zakończona powodzeniem i znaleziono choć jedne rekord
	 */
	bool select( map<string, string> resoults[ 10000 ], string where = "" );

	/**
	 * Dodaje nowy rekord do tabeli na podstawie atrybutów obiektu
	 *
	 * @return bool true jeśli operacja zakończona powodzeniem
	 */
	bool insert( );

	/**
	 * Uaktualnia rekord do tabeli na podstawie atrybutów obiektu.
	 * Trzeba wcześniej wykonać load()
	 *
	 * @return bool true jeśli operacja zakończona powodzeniem
	 */
	bool update( );

private:
	int rc;


	/**
	 * Ustanawia po��czenie sqlite
	 */
	void connect( ) {
		if( ( rc = sqlite3_open( DB_FILE, &db_ ) ) ) {
			cout << "Can't open database: " << errmsg_ << "\n" << endl;
			sqlite3_close( db_ );
			exit( 1 );
		}
	}
	
	void debugSQL( string sql ) {
		if( DEBUG ) {
			cout << endl << "====== Wykonywanie zapytania ======" << endl;
			cout << sql;
			cout << endl << "====== ===================== ======" << endl;
		}
	}

protected:
	sqlite3 *db_;
	string table_name;


	/**
	 * Wykonuje zapytanie SQL
	 * @param char sql
	 * @return bool false jeśli się nie powiodło
	 */
	bool exec( const char *sql ) {
		debugSQL( sql );
		if( ( sqlite3_exec( db_, sql, lambda, 0, &errmsg_ ) ) ) {
			cout << "Can't exec: " << errmsg_ << "\n" << endl;
			return false;
		} else {
			return true;
		}
	}

	/**
	 * Generuje zapytanie SELECT
	 *
	 * @param string where
	 * $return string sql
	 */
	string get_select_sql( string where = "" ) {
		string sql;
		//const unsigned char* tmp;
		sql = "SELECT * FROM ";
		sql += table_name;
		if( where.length( ) > 0 ) {
			sql += " WHERE ";
			sql += where;
		}
		
		debugSQL( sql );

		return sql;
	}
};


#endif	/* _MODEL_CLS_CPP */

