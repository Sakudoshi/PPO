//Kamil Matuszewski 37939 2(1)
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include <math.h>

using namespace std;

class Point {
	public:
		float x;
		float y;
		
		Point();
		
		Point(float x, float y) {
			this->x = x;
			this->y = y;
		}
		
		void move(float x, float y) {
			this->x += x;
			this->y += y;
		}
};

class Figure {
	public:
		vector<Point> corners;
		
		
		void printCornersCoordinates() {
			for(int i = 0; i < corners.size(); i++) {
				Point corner = corners.at(i);
				cout << "[" << corner.x << ", " << corner.y << "]" << endl;
			}
		}
		void getName(){};
};


class Triangle : public Figure {
	public:		
		Triangle(){
		};
		Triangle(Point lowerLeftCorner, float width) {
			Point lowerRightCorner = lowerLeftCorner;
			lowerRightCorner.move(width, 0);
			
			Point upperCorner = lowerLeftCorner;
			upperCorner.move(width / 2, width * sqrt(3) / 2);
			this->corners.push_back(lowerLeftCorner);
			this->corners.push_back(lowerRightCorner);
			this->corners.push_back(upperCorner);
		}
		void getName(){cout<<"Trójk¹t"<<endl;};
};

class Rectangle : public Figure {
	public:		
		Rectangle(){};
		Rectangle(Point lowerLeftCorner, float height, float width) {
			Point upperLeftCorner = lowerLeftCorner;
			upperLeftCorner.move(0, height);
			
			Point upperRightCorner = lowerLeftCorner;
			upperRightCorner.move(width, height);
			
			Point lowerRightCorner = lowerLeftCorner;
			lowerRightCorner.move(width, 0);
			
			this->corners.push_back(lowerLeftCorner);
			this->corners.push_back(upperLeftCorner);
			this->corners.push_back(upperRightCorner);
			this->corners.push_back(lowerRightCorner);
		}
				void getName(){cout<<"Prostok¹t"<<endl;};
};


class Square : public Rectangle {
	public:
		Square(){};
		Square(Point lowerLeftCorner, float width) : Rectangle(lowerLeftCorner, width, width) {}
				void getName(){cout<<"Kwadraty"<<endl;};
};


int main() {
	system("chcp 1250 > nul");
	srand(time(NULL));
	int i,at,ar,as,wybor;
	float px,py,dl1,dl2;
	vector<Figure> figures;
	Triangle t;
	Rectangle r;
	Square s;
	cout<<"Wpisz ile chcesz trójk¹tów, prostok¹tów, kwadratów"<<endl;
	cin>>at;
	cin>>ar;
	cin>>as;
	i=0;
	do{
	cout<<"Podajesz dane 1.rêcznie czy 2.losowo?"<<endl;	
	cin>>wybor;
	switch(wybor){
		case 1:{
			cout<<"Podaj punkty x i y, oraz d³ugoœæ boku trójk¹ta"<<endl;
			cin>>px; cin>>py; cin>>dl1;
			t=Triangle(Point(px,py),dl1);
			cout<<"Podaj punkty x i y, oraz d³ugoœci boków prostok¹ta"<<endl;
			cin>>px; cin>>py; cin>>dl1; cin>>dl2;
			r=Rectangle(Point(px,py),dl1,dl2);
			cout<<"Podaj punkty x i y, oraz d³ugoœæ boku kwadratu"<<endl;
			cin>>px; cin>>py; cin>>dl1;
			s=Square(Point(px,py),dl1);
			figures.push_back(t);
			figures.push_back(r);
			figures.push_back(s);
			i++;
			break;
		}
		default:{
			cout<<"Nie poda³eœ, wiêc bêd¹ losowo"<<endl;
			break;
		}
		case 2:{
			break;
		}
		
	}
		
	}while(i<at||i<ar||i<as);
	
/*	Triangle t = Triangle(Point(0, 0), 3);
	cout << "Triangle: " << endl;
	t.printCornersCoordinates();
	
	Rectangle r = Rectangle(Point(0, 0), 3, 5);
	cout << endl << "Rectangle: " << endl;
	r.printCornersCoordinates();
	
	Square s = Square(Point(0, 0), 3);
	cout << endl << "Square: " << endl;
	s.printCornersCoordinates();
	
	figures.push_back(t);
	figures.push_back(r);
	figures.push_back(s);
	t=Triangle(Point(10,10),5);
	figures.push_back(t);
	*/
	for (int i=0;i<figures.size();i++){
		Figure figure=figures.at(i);
		
		t.printCornersCoordinates();
		//r.printCornersCoordinates();
		//s.printCornersCoordinates();
	}
	
	return 0;
}


