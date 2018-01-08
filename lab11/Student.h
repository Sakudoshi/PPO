#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <stdlib.h>
#include <sstream>

using namespace std;
	
 class Student
 {
 	
 
 	public:
 		string imie, nazwisko,adres,pesel,indeks,rok;
 		Student(string pesel, string imie, string nazwisko, string indeks, string rok, string adres, bool *wskaznik);
 		
 		bool PodajImie(string imie);
		bool PodajNazwisko(string nazwisko);
		bool PodajPesel(string pesel);
		void PodajAdres(string adres);
		bool PodajIndeks(string indeks);
		bool PodajRok(string rok);
		string WyswietlStudenta();
		bool SprawdzDzien(int dzien,int miesiac);

		
};

#endif

