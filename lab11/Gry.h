#ifndef GRY_H
#define GRY_H
#include <iostream>
#include <stdlib.h>
#include <sstream>

using namespace std;
	
 class Gry
 {
 	
 
 	public:
 		string tytul,wydawca, dystrybutor, gatunek, pegi;
 		Gry(string tytul, string wydawca, string dystrybutor,string gatunek, string pegi, bool *wskaznik);
 		
 		bool podajTytul(string tytul);
 		bool podajWydawca(string wydawca);
 		bool podajDystrybutor(string dystrybutor);
 		bool podajGatunek(string gatunek);
 		bool podajPegi(string pegi);
 		string wyswietlGre();

		
};

#endif

