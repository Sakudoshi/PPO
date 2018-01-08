#include "gry.h"
Gry::Gry(string tytul, string wydawca, string dystrybutor, string gatunek, string pegi, bool *wskaznik){
podajTytul(tytul);
podajWydawca(wydawca);
podajDystrybutor(dystrybutor);
if(podajGatunek(gatunek)==0){
	*wskaznik=0;
}
if (podajPegi(pegi)==0){
	*wskaznik=0;
}
	
}
bool Gry::podajTytul(string tytul){

        this->tytul = tytul;
        return 1;
    	
}
bool Gry::podajWydawca(string wydawca){
        this->wydawca = wydawca;
        return 1;	
}
bool Gry::podajDystrybutor(string dystrybutor){
        this->dystrybutor = dystrybutor;
        return 1;	
}
bool Gry::podajGatunek(string gatunek){
    if (gatunek.find_first_of("0123456789") != std::string::npos) {
        cout << "le podany gatunek ";
        return 0;
    }

    else {
        this->gatunek = gatunek;
        return 1;
    }	
}
bool Gry::podajPegi(string pegi){
    if (pegi.find_first_of("qwertyuiopasdfghjklzxcvbnm") != std::string::npos) {
        cout << "Litery w pegi ";
        return 0;
    }

    else if((pegi=="3") || (pegi=="7") || (pegi=="12") || (pegi=="16") || (pegi=="18")) {
        this->pegi = pegi;
        return 1;
    }
	else{
		cout<<"Z³e pegi";
		return 0;
	}	
}
string Gry::wyswietlGre(){
    return tytul + "; " + wydawca + "; " + dystrybutor + "; " + gatunek + "; " + pegi;	
}
