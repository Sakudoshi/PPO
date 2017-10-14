#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

#define STUDENTS_COUNT 1000

class Student {
	private:
		string studentNo;
		string imie;
		string nazwisko;
		string status;
		
	public:		
		Student(string studentNo,string imie,string nazwisko,string status) {
			this->studentNo = studentNo;
			this->imie=imie;
			this->nazwisko=nazwisko;
			this->status=status;
		}
		
		string getStudentNo() {
			return this->studentNo;
		}
		string getName() {
			return this->imie;
		}
		string getSurname() {
			return this->nazwisko;
		}
		string getStatus() {
			return this->status;
		}
};

string getRandomStudentNumber() {
	ostringstream ss;
	
	int randomNumber = rand() % 2000 + 37000;
	
	ss << randomNumber;
	
	return ss.str();
}
string getRandomName() {
	string imiona[10]= {"Kamil","Bamil","Mamil","Damil","Lamil","Tamil",
	"Gamil","Ramil","Wamil","Qamil"};
	int randomNumber = rand() % 10 ;

	return imiona[randomNumber];	
}
string getRandomSurname() {
	string nazwiska[10]={"Wski","Tski","Mski","Yski","Eski","Aski",
		"Rski","Uski","Iski","Oski"};
	int randomNumber = rand() % 10;

	return nazwiska[randomNumber];	
}
string getRandomStatus() {
	
	int randomNumber = rand() % 2;
	if (randomNumber==1) return "Aktywny";
	else return "Nieaktywny";
}

int main() {
	srand( time( NULL ) );
	vector<Student> students;
	
	for(int i = 0; i < STUDENTS_COUNT; i++) {
		Student student(getRandomStudentNumber(),getRandomName(),
		getRandomSurname(),getRandomStatus());
		students.push_back(student);
	}
	
	cout  << "Students group have been filled." << endl << endl;
	
	for(int i = 0; i < students.size(); i++) {
		if(students.at(i).getStatus()=="Aktywny"){
		
		cout <<students.at(i).getSurname()<< " "<< students.at(i).getName()
		 <<" "<<students.at(i).getStudentNo()<<" "<<students.at(i).getStatus()<< endl;}
	}
	
	return 0;
}


