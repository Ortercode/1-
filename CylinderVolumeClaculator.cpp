//This program allows you to calculate value of a
// cylinder quick and easy. Just input height and
//Radius 

// using Pi equal to 3.1416 or 22/7

#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

void startFunc();
void pieVal(double heig, double radi);
void getVol(double height, double radius, int pi);
void goAgain();

class Cylinder {
	public:
		Cylinder(double hei, double radi, int pieChoice) {
			setEquation(hei, radi, pieChoice);
		}
		
		
		
		void threeFunc(double rad, double heig) {
			area = 3.14 * (rad * rad);
			volume = area * heig;
			getVolume();
	
		}
		void two7Func(double rad, double heig) {
			area = (rad * rad) * (22/7);
			volume = area * heig;
			getVolume();
		}
		
		
		
		
		void setEquation(double h, double r, int p) {
			height = h;
			radius = r;
			pi = p;
			
			switch(p) {
				case 1:
					threeFunc(r, h);
					break;
				case 0:
					two7Func(r, h);
					break;
				default:
					cout<<endl;
					cout<<"Incorrect input !";
					cout<<endl;
					pieVal(height, radius);
					cout<<endl;
					break;
			}
			
			
		}
		
		double getVolume() {
			cout<<endl;
			return volume;
		}
	
	private:
		double area;
		double height;
		double volume;
		float pi;
		double radius;
};
/*
class Calculation {
	public:
		Calculation(float rad, float he) {
			setVolume(rad, he);
		}
		float setVolume(float r, float h) {
			radius = r;
			height = h;
			
			area = pi * (radius * radius);
			vol = height * area;
			
			
		}
		
		float getVolume() {
			return vol;
		}
		
	private:
		float area;
		float vol;
		float radius;
		float height;
		float pi = 3.1416;
};*/

int main(int argc, char *argv[])
{
	cout<<" \'X³\' by Eman - Get the approximate volume of any Cylinder"<<endl;
	cout<<"____________________________________________________________"<<endl;
	startFunc();
	
	/*
	Calculation cyl1(10, 10);
	cout<<"Radius : 10 units"<<endl;
	cout<<"Height : 10 units"<<endl;
	cout<<"Pi = 3.1416"<<endl;
	cout<<"____________________"<<endl;
	cout<<endl;
	cout<<"Volume : "<<cyl1.getVolume()<<" units"<<endl;*/
	
	return 0;
}

void startFunc() {
	
	cout<<endl;
	cout<<"ENTER Variables |"<<endl;
	// INPUT
	double h;
	double r;
	cout<<"Height : "<<endl;
	cin>> h;
	cout<<endl;
	cout<<"Radius (Divide diameter by 2) : "<<endl;
	cin >> r;
	cout<<endl;
	
 	pieVal(h, r);
	
}

void pieVal(double heig, double radi) {
	
	int pi;
	
	cout<<"Choose value for Pi"<<endl;
	cout<<"Enter '1' for 3.14 or Enter '0' for 22/7"<<endl;
	
	cin >> pi;
	cout<<endl;
	
	getVol(heig, radi, pi);
}

void getVol(double heig, double radi, int pi) {
	Cylinder cylNew(heig, radi, pi);
	cout<<endl;
	cout<<"Volume : ";
	cout<<cylNew.getVolume();
	cout<<" units³";
	cout<<endl;
	
	goAgain();
}

void goAgain() {
	int oneOrZero;
								cout<<"\\\\______________________________//"<<endl;
	cout<<"Enter '1' to restart the program or any other key to close it"<<endl;
	
	cin >> oneOrZero;
	cout<<endl;
	
	if(oneOrZero == 1) {
		startFunc();
	} else {
		cout<<"You have ended the progam :)"<<endl;
		
	}
	
}