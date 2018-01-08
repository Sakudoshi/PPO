#ifndef KSIAZKI_H
#define KSIAZKI_H
#include <iostream>
#include <stdlib.h>
#include <sstream>

using namespace std;
	
 class Ksiazki
 {
 	
 
 	public:
 		string tytul,autor,wydawnictwo,rokwydania;
 		Ksiazki(string tytul, string autor, string wydawnictwo, string rokwydania, bool *wskaznik);
 		
 		bool podajTytul(string tytul);
 		bool podajAutor(string autor);
 		bool podajWydawnictwo(string wydawnictwo);
 		bool podajRokWydania(string rokwydania);
 		string wyswietlKsiazke();

		
};

#endif

