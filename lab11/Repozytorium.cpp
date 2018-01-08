#include "Repozytorium.h"
Repozytorium::Repozytorium() {
	cout<<"Stworzy�e� nowe repozytorium."<<endl<<endl;

}
void Repozytorium::repozytoriumMenu(){

	do {
	cout<<"Co chcesz zrobi�?"<<endl<<"1.Doda� do obiektu"<<endl<<"2.Usun�� z obiektu"<<endl<<"3.Pokaza� zawarto�� obiektu"<<endl<<"0.Zako�czy� program"<<endl;
	cin>>wybor;
	switch(wybor){
		case 1:{
			Repozytorium::dodaj();
			break;
		}
		case 2:{
			Repozytorium::usun();
			break;
		}
		case 3:{
			Repozytorium::pokaz();
			break;
		}
		case 0:{
			cout<<"Program zostanie zako�czony za 0.001 sekundy"<<endl;
			exit(0);
			break;
		}
		default:{
			system("cls");
			cout<<"Z�y numer"<<endl<<endl;
			break;
		}
	};
}
while(1);
	
};
void Repozytorium::dodaj(){
	do {	
	cout<<"Kt�ry obiekt chcesz doda�?"<<endl;
	cout<<"1. Student, 2.Ksiazki, 3.Gry, 0. Wyj�cie"<<endl; //dodaj tutaj opcje do swojej nowej klasy
	cin>>wybor;
	switch(wybor){
		case 1:{
			Repozytorium::dodajStudenta();
			break;
		}
		case 2:{
			Repozytorium::dodajKsiazke();
			break;
		}
		case 3:{
			Repozytorium::dodajGre();
			break;
		}
		/*
		case ?:{
			Repozytorium::dodajPrzyklad();
			break;
		}
		*/
		case 0:{
			system("cls");
			cout<<"Wyj�cie z trybu dodawania obiektu"<<endl<<endl;
			break;
		}
		default:{
			system("cls");
			cout<<"Z�y numer"<<endl;
			break;
		}
	}
}
while(wybor!=0);
	
};
void Repozytorium::usun(){
	do {	
	cout<<"Z kt�rego obiektu chcesz usun��?"<<endl;
	cout<<"1. Student, 2.Ksiazka, 3.Gry 0. Wyj�cie"<<endl;// dodaj tutaj opcje do swojej nowej klasy
	cin>>wybor;
	switch(wybor){
		case 1:{
			Repozytorium::usunStudenta();
			break;
		}
		case 2:{
			Repozytorium::usunKsiazke();
			break;
		}
		case 3:{
			Repozytorium::usunGre();
			break;
		}
		/*
		case ?:{
			Repozytorium::usunPrzyklad();
			break;
		}
		*/		
		case 0:{
			system("cls");
			cout<<"Wyj�cie z trybu usuwania obiektu"<<endl<<endl;
			break;
		}
		default:{
			system("cls");
			cout<<"Z�y numer"<<endl;
			break;
		}
	}
}
while(wybor!=0);
	
};
void Repozytorium::pokaz(){
	do {	
	cout<<"Kt�ry obiekt chcesz pokaza�?"<<endl;
	cout<<"1. Student, 2. Ksiazka, 3. Gry, 0. Wyj�cie"<<endl;// dodaj tutaj opcje do swojej nowej klasy
	cin>>wybor;
	switch(wybor){
		case 1:{
			Repozytorium::pokazStudenta();
			break;
		}
		case 2:{
			Repozytorium::pokazKsiazke();
			break;
		}
		case 3:{
			Repozytorium::pokazGre();
			break;
		}
		/*
		case ?:{
			Repozytorium::pokazPrzyklad();
			break;
		}
		*/		
		case 0:{
			system("cls");
			cout<<"Wyj�cie z trybu pokazywania obiektu"<<endl<<endl;
			break;
		}
		default:{
			system("cls");
			cout<<"Z�y numer"<<endl;
			break;
		}
	}
}
while(wybor!=0);
	
};
void Repozytorium::dodajStudenta(){
	bool *wskaznik,czyDobrze;
	wskaznik=&czyDobrze;
	*wskaznik=1;
	string pesel,imie,nazwisko,indeks,rok,adres;
				cout<<"Podaj PESEL:"<<endl;
				cin>>pesel;
				cout<<"Podaj imi�:"<<endl;
				cin>>imie;
				cout<<"Podaj nazwisko:"<<endl;
				cin>>nazwisko;
				cout<<"Podaj indeks:"<<endl;
				cin>>indeks;
				cout<<"Podaj rok:"<<endl;
				cin>>rok;
				cout<<"Podaj adres:"<<endl;
				cin.sync();
				getline(cin,adres);
				Student student(pesel,imie,nazwisko,indeks,rok,adres,wskaznik);
				if (czyDobrze!=1)
				{
					cout<<endl<<"Nie dodano studenta"<<endl<<endl;
				}
				else
				{
					cout<<"Dodano poprawnie studenta"<<endl<<endl;
					students.push_back(student);	
				}
					
				cout<<endl<<endl;
	
};
void Repozytorium::usunStudenta(){
	int i=0;
	string zmienna;
	if (students.size()<=0)
		cout<<"Nie ma student�w"<<endl<<endl;
		else
		{
			cout<<"Wed�ug czego chcesz usun��?"<<endl;
			cout<<"1.Imi�? 2.Nazwisko? 3.Indeks? 0. Anulujesz operacj�"<<endl<<endl;
			cin>>wybor;
			switch(wybor){
				case 1:{
					cout<<"Podaj imi�"<<endl;
					cin>>zmienna;
					for (i;i<students.size();i++)
						{	
							Student student=students.at(i);
							if (students.at(i).imie ==zmienna){
								students.erase(students.begin()+i);	
								cout<<"Usuni�to"<<endl;
							}							
							else
							cout<<"Nie znaleziono. Nic nie zosta�o usuni�te"<<endl;
							cout<<endl<<endl;
						}
					break;
				}
				case 2:{
					cout<<"Podaj nazwisko"<<endl;
					cin>>zmienna;
					for (i;i<students.size();i++)
						{	
							Student student=students.at(i);
							if (students.at(i).nazwisko ==zmienna){
								students.erase(students.begin()+i);
								cout<<"Usuni�to"<<endl;								
							}
							else
								cout<<"Nie znaleziono. Nic nie zosta�o usuni�te"<<endl;
							cout<<endl<<endl;
						}					
					break;
				}
				case 3:{
					cout<<"Podaj indeks"<<endl;
					cin>>zmienna;				
					for (i;i<students.size();i++)
						{	
							Student student=students.at(i);
							if (students.at(i).indeks ==zmienna){
								students.erase(students.begin()+i);
								cout<<"Usuni�to"<<endl;
							}
							
							else
								cout<<"Nie znaleziono. Nic nie zosta�o usuni�te"<<endl;
							cout<<endl<<endl;
						}					
					
					break;
				}
				case 0:{
					cout<<"Anulowanie operacji usuwania"<<endl;
					break;
				}
				default:{
					cout<<"B��dny numer"<<endl;
					break;
				}
			}
			
		}
	
};
void Repozytorium::pokazStudenta(){
	int i=0;
	if (students.size()<=0)
		cout<<"Nie ma student�w"<<endl<<endl;
		else
	for (i;i<students.size();i++)
	{	
		Student student=students.at(i);
		cout<<student.WyswietlStudenta();
		cout<<endl<<endl;
	}	
};
void Repozytorium::dodajKsiazke(){
	bool *wskaznik,czyDobrze;
	wskaznik=&czyDobrze;
	*wskaznik=1;
	string tytul,autor,wydawnictwo,rokwydania;
				cout<<"Podaj Tytu�:"<<endl;
				cin.sync();
				getline(cin,tytul);
				cout<<"Podaj Autora:"<<endl;
				cin.sync();
				getline(cin,autor);
				cout<<"Podaj Wydawnictwo:"<<endl;
				cin.sync();
				getline(cin,wydawnictwo);
				cout<<"Podaj Rok Wydania:"<<endl;
				cin>>rokwydania;
				Ksiazki ksiazka(tytul,autor,wydawnictwo,rokwydania,wskaznik);
				if (czyDobrze!=1)
				{
					cout<<endl<<"Nie dodano ksi��ki"<<endl<<endl;
				}
				else
				{
					cout<<"Dodano poprawnie ksi��k�"<<endl<<endl;
					books.push_back(ksiazka);	
				}
					
				cout<<endl<<endl;
}
void Repozytorium::usunKsiazke(){
	int i=0;
	string zmienna;
	if (books.size()<=0)
		cout<<"Nie ma ksiazek"<<endl<<endl;
		else
		{
			cout<<"Wed�ug czego chcesz usun��?"<<endl;
			cout<<"1.Tytu�? 2.Autor? 3.Rok Wydania? 0. Anulujesz operacj�"<<endl<<endl;
			cin>>wybor;
			switch(wybor){
				case 1:{
					cout<<"Podaj tytu�"<<endl;
				cin.sync();
				getline(cin,zmienna);
					for (i;i<books.size();i++)
						{	
							Ksiazki ksiazka=books.at(i);
							if (books.at(i).tytul ==zmienna){
								books.erase(books.begin()+i);	
								cout<<"Usuni�to"<<endl;
							}							
							else
							cout<<"Nie znaleziono. Nic nie zosta�o usuni�te"<<endl;
							cout<<endl<<endl;
						}
					break;
				}
				case 2:{
					cout<<"Podaj autora"<<endl;
				cin.sync();
				getline(cin,zmienna);
					for (i;i<books.size();i++)
						{	
							Ksiazki ksiazka=books.at(i);
							if (books.at(i).autor ==zmienna){
								books.erase(books.begin()+i);
								cout<<"Usuni�to"<<endl;								
							}
							else
								cout<<"Nie znaleziono. Nic nie zosta�o usuni�te"<<endl;
							cout<<endl<<endl;
						}					
					break;
				}
				case 3:{		
					cout<<"Podaj rok wydania"<<endl;
					cin>>zmienna;		
					for (i;i<books.size();i++)
						{	
							Ksiazki ksiazka=books.at(i);
							if (books.at(i).rokwydania ==zmienna){
								books.erase(books.begin()+i);
								cout<<"Usuni�to"<<endl;								
							}							
							else
								cout<<"Nie znaleziono. Nic nie zosta�o usuni�te"<<endl;
							cout<<endl<<endl;
						}					
					
					break;
				}
				case 0:{
					cout<<"Anulowanie operacji usuwania"<<endl;
					break;
				}
				default:{
					cout<<"B��dny numer"<<endl;
					break;
				}
			}
			
		}
	
}
void Repozytorium::pokazKsiazke(){
	int i=0;
	if (books.size()<=0)
		cout<<"Nie ma ksi��ek"<<endl<<endl;
		else
	for (i;i<books.size();i++)
	{	
		Ksiazki ksiazka=books.at(i);
		cout<<ksiazka.wyswietlKsiazke();
		cout<<endl<<endl;
	}	
}
void Repozytorium::dodajGre(){
	bool *wskaznik,czyDobrze;
	wskaznik=&czyDobrze;
	*wskaznik=1;
	string tytul,wydawca,dystrybutor,gatunek,pegi;
				cout<<"Podaj Tytu�:"<<endl;
				cin.sync();
				getline(cin,tytul);
				cout<<"Podaj Wydawc�:"<<endl;
				cin.sync();
				getline(cin,wydawca);
				cout<<"Podaj Dystrybutora:"<<endl;
				cin.sync();
				getline(cin,dystrybutor);
				cout<<"Podaj Gatunek:"<<endl;
				cin.sync();
				getline(cin,gatunek);
				cout<<"Podaj Pegi:"<<endl;
				cin>>pegi;				
				Gry gra(tytul,wydawca,dystrybutor,gatunek,pegi,wskaznik);
				if (czyDobrze!=1)
				{
					cout<<endl<<"Nie dodano gry"<<endl<<endl;
				}
				else
				{
					cout<<"Dodano poprawnie gr�"<<endl<<endl;
					games.push_back(gra);	
				}
					
				cout<<endl<<endl;	
};
void Repozytorium::usunGre(){
	int i=0;
	string zmienna;
	if (games.size()<=0)
		cout<<"Nie ma gier"<<endl<<endl;
		else
		{
			cout<<"Wed�ug czego chcesz usun��?"<<endl;
			cout<<"1.Tytu�? 2.Wydawca? 3.Gatunek? 0. Anulujesz operacj�"<<endl<<endl;
			cin>>wybor;
			switch(wybor){
				case 1:{
					cout<<"Podaj tytu�"<<endl;
				cin.sync();
				getline(cin,zmienna);
					for (i;i<games.size();i++)
						{	
							Gry gra=games.at(i);
							if (games.at(i).tytul ==zmienna){
								games.erase(games.begin()+i);	
								cout<<"Usuni�to"<<endl;
							}							
							else
							cout<<"Nie znaleziono. Nic nie zosta�o usuni�te"<<endl;
							cout<<endl<<endl;
						}
					break;
				}
				case 2:{
					cout<<"Podaj wydawc�"<<endl;
				cin.sync();
				getline(cin,zmienna);
					for (i;i<games.size();i++)
						{	
							Gry gra=games.at(i);
							if (games.at(i).wydawca ==zmienna){
								games.erase(games.begin()+i);
								cout<<"Usuni�to"<<endl;								
							}
							else
								cout<<"Nie znaleziono. Nic nie zosta�o usuni�te"<<endl;
							cout<<endl<<endl;
						}					
					break;
				}
				case 3:{		
					cout<<"Podaj gatunek"<<endl;
				cin.sync();
				getline(cin,zmienna);		
					for (i;i<games.size();i++)
						{	
							Gry gra=games.at(i);
							if (games.at(i).gatunek ==zmienna){
								games.erase(games.begin()+i);
								cout<<"Usuni�to"<<endl;								
							}							
							else
								cout<<"Nie znaleziono. Nic nie zosta�o usuni�te"<<endl;
							cout<<endl<<endl;
						}					
					
					break;
				}
				case 0:{
					cout<<"Anulowanie operacji usuwania"<<endl;
					break;
				}
				default:{
					cout<<"B��dny numer"<<endl;
					break;
				}
			}
			
		}
	
};
void Repozytorium::pokazGre(){
	int i=0;
	if (games.size()<=0)
		cout<<"Nie ma gier"<<endl<<endl;
		else
	for (i;i<games.size();i++)
	{	
		Gry gra=games.at(i);
		cout<<gra.wyswietlGre();
		cout<<endl<<endl;
	}	
};
//Dodajesz tu implementacje funkcji
/*
void Repozytorium::dodajPrzyklad(){
}
void Repozytorium::usunPrzyklad(){
}
void Repozytorium::pokazPrzyklad(){
}
*/

