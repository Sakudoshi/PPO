#include <iostream>
#include <stdlib.h>
#include <vector>
#include <sstream>

using namespace std;
	
 class Student 
 {
 	string imie, nazwisko,adres,pesel,indeks,rok;
 
 	public:
 		Student(string pesel, string imie, string nazwisko, string indeks, string rok, string adres, bool *wskaznik)
		 {
 		
				if(PodajPesel(pesel)==0)
				{
					*wskaznik=0;
				}
			
				if(PodajImie(imie)==0)
				{
					*wskaznik=0;
				}
				
				if(PodajNazwisko(nazwisko)==0)
					{
					*wskaznik=0;
				}
				
				if(PodajIndeks(indeks)==0)
				{
					*wskaznik=0;
				}
					
				if(PodajRok(rok)==0)
				{
					*wskaznik=0;
				}
				
				PodajAdres(adres);	
		 };
		 
 		bool PodajImie(string imie)
		 {
 			if(imie.find_first_of("0123456789") != std::string::npos)
 			{
 				cout<<"le podane imie ";
 				return 0;
			 }
 			
 			else 
			 {
				this->imie=imie;
 				return 1;
 			}
		 };
		 
		 bool PodajNazwisko(string nazwisko)
		 {
 			if(nazwisko.find_first_of("0123456789") != std::string::npos)
 			{
 				cout<<"le podane nazwisko ";
 				return 0;
			 }
 			
 			else
 			{
 				this->nazwisko=nazwisko;
 				return 1;
			 }
 			
		 };
		 
		 bool PodajPesel(string pesel)
		 {
		 	if(pesel.find_first_of("qwertyuiopasdfghjklzxcvbnm") != std::string::npos)
			 {
		 		cout<<"Litery w peselu ";
		 		return 0;
			 }
			 else 
			 {
			 
		 	int size=pesel.size();
		 	if(size!=11)
		 	{
		 	cout<<"Z³y rozmiar peselu ";
		 	return 0;
				
			 }
			 
			 else
			 {
		 	stringstream ss;
		 	int zmienna,zmienna2;
		 	ss<<pesel.at(2)<<pesel.at(3);
		 	ss>>zmienna;
		 	ss.clear();
		 	ss<<pesel.at(4)<<pesel.at(5);
		 	ss>>zmienna2;
		 	if(Student::SprawdzDzien(zmienna2,zmienna)==0)
		 	{
		 	cout<<"Z³y dzien lub miesiac w peselu ";
		 	return 0;
				
			 }
		 	 else 
			 {
		 		this->pesel=pesel;
		 		return 1;
		 	}
			 }
			 }
		 	
		 };
		 
		 void PodajAdres(string adres)
		 {
		 	if (adres==" ")
		 	adres="Nie podano adresu";
		 	this->adres=adres;
		 };
		 	bool PodajIndeks(string indeks)
			 {
 			if(indeks.find_first_of("qwertyuiopasdfghjklzxcvbnm") != std::string::npos)
 			{
 				cout<<"le podany indeks ";
 				return 0;
			 }
 			
 			else 
			 {
				this->indeks=indeks;
 				return 1;
 			}
		 };
		 
		 bool PodajRok(string rok)
		 {
 			if(rok.find_first_of("qwertyuiopasdfghjklzxcvbnm") != std::string::npos)
 			{
 				cout<<"Litery w roku ";
 				return 0;
			 }
 			
 			else 
			 {
			 	stringstream ss;
			 	int zmienna;
			 	ss<<rok;
			 	ss>>zmienna;
			 	if (zmienna<=0&&zmienna>5){
			 		cout<<"le podany rok ";
			 		return 0;
				 }
				 else
				 
				this->rok=rok;
 				return 1;
 			}
		 };
		 
		 string WyswietlStudenta()
		 {
		 	stringstream ss;
		 	int zmienna;
		 	string rokz;
		 	ss<<rok;
		 	ss>>zmienna;
		 	switch(zmienna){
		 		case 1:{
		 			rokz="I";
					break;
				 }
				 case 2:{
				 	rokz="II";
					break;
				 }
				 case 3:{
				 	rokz="III";
					break;
				 }
				 case 4:{
				 	rokz="IV";
					break;
				 }
				 case 5:{
				 	rokz="V";
					break;
				 }
			 }
		 	return indeks+"; "+pesel+"; "+imie+" "+nazwisko+"; "+rokz+" rok; zamieszka³y "+adres;
		 };
		 
		 bool SprawdzDzien(int dzien,int miesiac)
		 {
		 	if (dzien>0)
		 	switch(miesiac)
			 {
		 		case 1:
				 {
		 			if (dzien<=31)
		 			return 1; else
		 			return 0;
					break;
				 }
				 case 2:
				 {
				 		if (dzien<=28)
		 			return 1; else
		 			return 0;
					break;
				 }
				 case 3:
				 {
				 		if (dzien<=31)
		 			return 1; else
		 			return 0;
					break;
				 }
				 case 4:
				 {
				 		if (dzien<=30)
		 			return 1; else
		 			return 0;
					break;
				 }
				 case 5:
				 {
				 		if (dzien<=31)
		 			return 1; else
		 			return 0;
					break;
				 }
				 case 6:
				 {
				 		if (dzien<=30)
		 			return 1; else
		 			return 0;
					break;
				 }
				 case 7:
				 {
				 		if (dzien<=31)
		 			return 1; else
		 			return 0;
					break;
				 }
				 case 8:
				 {
				 		if (dzien<=31)
		 			return 1; else
		 			return 0;
					break;
				 }
				 case 9:
				 {
				 		if (dzien<=30)
		 			return 1; else
		 			return 0;
					break;
				 }
				 case 10:
				 {
				 		if (dzien<=31)
		 			return 1; else
		 			return 0;
					break;
				 }
				 case 11:
				 {
				 		if (dzien<=30)
		 			return 1; else
		 			return 0;
					break;
				 }
				 case 12:
				 {
				 		if (dzien<=31)
		 			return 1; else
		 			return 0;
					break;
				 }
				 default:
				 {
				 	return 0;
					break;
				 }
			 }
		 }
 };
		
		
	

int main() 
{
	system("chcp 1250 > nul");
	int wybor,i;
	bool *wskaznik,czyDobrze;
	wskaznik=&czyDobrze;
	string imie,nazwisko,adres,pesel,indeks,rok;
	vector<Student> st;
	
	do{
		cout<<"Wybierz : [ 1 ] pokaz liste studentow , [ 2 ] dodaj studenta , [ 3 ] wyjdz z programu"<<endl;
		cin>>wybor;
		switch(wybor)
		{
			case 1:
			{
				i=0;
				if (st.size()<=0)
				cout<<"Nie ma studentów"<<endl<<endl;
				for (i;i<st.size();i++)
				{	
					Student student=st.at(i);
					cout<<student.WyswietlStudenta();
					cout<<endl<<endl;
					}
				break;
			}
			case 2:
			{
				*wskaznik=1;
				cout<<"Podaj PESEL:"<<endl;
				cin>>pesel;
				cout<<"Podaj imiê:"<<endl;
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
					break;
				}
				else
					st.push_back(student);
				cout<<endl<<endl;
				break;
			}
			case 3:
			{
				cout<<"Nastêpuje koniec programu";
				break;
			}
			default:
			{
				cout<<"Nieprawid³owy wybór"<<endl<<endl;
				break;
			}
		}
	}
	while(wybor!=3);
	
	
	return 0;
}

