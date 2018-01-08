#ifndef REPOZYTORIUM_H
#define REPOZYTORIUM_H

#include <iostream>
#include <vector>
#include <stdlib.h>
#include <sstream>

#include "Student.h"
#include "Ksiazki.h"
#include "Gry.h"
//wstaw tutaj nowe klasy
//#include "przyklad.h"


using namespace std;

class Repozytorium {
	public:
		Repozytorium();
		
		void repozytoriumMenu();
		void dodaj();
		void usun();
		void pokaz();
		//Student
		void dodajStudenta();
		void usunStudenta();
		void pokazStudenta();
		//Ksiazki
		void dodajKsiazke();
		void usunKsiazke();
		void pokazKsiazke();
		//Gry
		void dodajGre();
		void usunGre();
		void pokazGre();
		//Tutaj daj swoj¹ klasê
		//void dodajPrzyklad();
		//void usunPrzyklad();
		//void pokazPrzyklad();
		
	protected:
		int wybor;
		vector<Student> students;
		vector<Ksiazki> books;
		vector<Gry> games;
		//tutaj dodajesz nowy wektor
		//vector<Przyklad> examples;
		
	
};

#endif
