#include "ksiazki.h"
Ksiazki::Ksiazki(string tytul,string autor,string wydawnictwo,string rokwydania,bool *wskaznik){
if(podajTytul(tytul)==0){
	*wskaznik=0;
}
if(podajAutor(autor)==0){
	*wskaznik=0;
}
if(podajWydawnictwo(wydawnictwo)==0){
	*wskaznik=0;
}
if(podajRokWydania(rokwydania)==0){
	*wskaznik=0;
}
	
}
bool Ksiazki::podajTytul(string tytul){
    if (tytul.find_first_of("0123456789") != std::string::npos) {
        cout << "le podany tytu³ ";
        return 0;
    }

    else {
        this->tytul = tytul;
        return 1;
    }	
};
bool Ksiazki::podajAutor(string autor){
	    if (autor.find_first_of("0123456789") != std::string::npos) {
        cout << "le podany autor ";
        return 0;
    }

    else {
        this->autor = autor;
        return 1;
    }
	
};
bool Ksiazki::podajWydawnictwo(string wydawnictwo){
    if (wydawnictwo.find_first_of("0123456789") != std::string::npos) {
        cout << "le podane wydawnictwo ";
        return 0;
    }

    else {
        this->wydawnictwo = wydawnictwo;
        return 1;
    }	
};
bool Ksiazki::podajRokWydania(string rokwydania){
    if (rokwydania.find_first_of("qwertyuiopasdfghjklzxcvbnm") != std::string::npos) {
        cout << "Litery w rokuwydania ";
        return 0;
    }
	else if(rokwydania.size()!=4){
		cout<<"Dziwny format roku";
		return 0;
	}
    else {
        this->rokwydania = rokwydania;
        return 1;
    }
	
}
string Ksiazki::wyswietlKsiazke(){
    return tytul + "; " + autor + "; " + wydawnictwo + "; " + rokwydania;	
}
