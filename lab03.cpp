#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>

using namespace std;

class Point {
	public:
		int x;
		int y;
		
		Point() {
			//cout << "Point has been created." << endl;
		}
		
		Point(int x, int y) {
			this->x = x;
			this->y = y;
		//	cout << "Point [" << this->x << ", " << this->y << "] has been created." << endl;
		}
		
		~Point() {
		//	cout << "Point [" << this->x << ", " << this->y << "] has been deleted." << endl;
		}
		
};

class Circle {
	public:
		Point center;
		int radius;
		
		Circle(Point center, int radius) {
			this->center = center;
			this->radius = radius;
		}
		
		void getCoordinates() {
			cout << "x: " << this->center.x << endl << "y: " << this->center.y << endl;
		}
};

class Square {
	public:
		Point a,b,c,d;
		Square(){
		}
		
		Square(Point a,int dlugosc){
			this->a=a;
			b=a;c=a;d=a;
			this->b.x+=dlugosc;
		this->c.y+=dlugosc;
			this->d.x+=dlugosc;	this->d.y+=dlugosc;
				
		};
			void getKoordinates() {
			cout << "A: (" << this->a.x<<"," <<this->a.y<<")"<<endl<< "B: (" << this->b.x<<"," <<this->b.y<<")"<<endl<< "C: (" << this->c.x<<"," <<this->c.y<<")"<<endl
			<< "D: (" << this->d.x<<"," <<this->d.y<<")"<<endl;
			
		};
		double rownanie(Point a, Point b) {
			return sqrt(pow((this->b.x-this->a.x),2.0)+pow((this->b.y-this->a.y),2.0));
		}
		void czyKwadrat () {
			double ar=rownanie(a,b);
			if (ar==rownanie(a,c) && ar==rownanie(c,d) && ar==rownanie(d,b))
			cout << "Kwadrat"<<endl;
			else cout << "Nie Kwadrat"<<endl;
			
		};
		
		
	
};

int main() {
	system("chcp 1250 > nul");
	int i=0,n, dlugosc,inputX,inputY;
	cout << "Ile chcesz kwadratów? ";
	cin >> n;
	Point p;
	Square s;
	
	do {
	cout <<i+1<< ". Podaj d³ugoœæ: ";
	cin >>dlugosc;
	cout <<i+1<< ". Podaj x i y: ";
	cin >>inputX;
	cin >>inputY;
	if (dlugosc<=0)
	{
		cout<<"Z³e dane, koniec programu";
		break;
	}
	else
	{
	
	Point p = Point(inputX, inputY);
	Square s = Square(p,dlugosc);	
	s.getKoordinates();
	s.czyKwadrat();
	}
	cout<<endl;
	i++;
}while(i<n);
	
	return 0;
}

