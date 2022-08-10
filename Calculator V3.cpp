
#include<iostream>
#include<cstdlib>
using namespace std;
//CALCULATOR

double input1; 
double input2;
char oprator;
char oneOrZero;

double total;

void firstFunc();
void secondFunc();
void oprSelector();
void cjeckOzers();
void checkMult();
void theLastBoiDiv();
void restartFunc();
void oneOrZeroFunc();


int main(int argc, char *argv[])
{
	cout << "7OUL's C++ 2-input Calculator";
	cout<<endl;
	cout <<endl;
	firstFunc();
	
}

void firstFunc() {
    
	cout << "TYPE IN FIRST NUMBER";
	cout<<endl;
	cout<<"Type in a number. The program will crash if you enter anything else";
	cout <<endl;
	cout << "________________________"<<endl;
	cout <<endl;
	cin >> input1;
	cout<<endl;
	cout << "TYPE IN SECOND NUMBER";
	cout <<endl;
	cout << "__________________________"<<endl;
	cout<<endl;
	cin >> input2;
	cout<<endl;
	secondFunc();
}


void secondFunc() {
	cout << "Select an operator";
	cout<<endl;
	cout<<"___________________________";
	cout <<endl;
	cout<<endl;
	cout << "'+' for addition"<<endl<<"'-' for subtraction" <<endl<<"'*' for multiplication"<<endl<<"'/' for divison"<<endl;
	cout<<endl;
	cout<<endl;
	oprSelector();
	
	
	
}

void oprSelector() {
	cin >> oprator;
	cout<<endl;
	
	if(oprator == '+') {
		total = input1 + input2;
		cout<<input1;
		cout<<" + ";
		cout<<input2;
		cout<<endl;
		cout<<"Answer is : ";
		cout<<total;
		cout<<endl;
		cout<<endl;
		cout<<"_________________________";
		cout<<endl;
		restartFunc();
	} else {
		cjeckOzers();
	}
}

void cjeckOzers() {
	if(oprator == '-') {
		total = input1 - input2;
		cout<<input1;
		cout<<" - ";
		cout<<input2;
		cout<<endl;
		cout<<"Answer is : ";
		cout <<total;
		cout<<endl;
		cout<<endl;
		cout<<"_________________________";
		cout<<endl;
		restartFunc();
	} else {
		checkMult();
	}
}

void checkMult() {
	if(oprator == '*') {
		total = input1 * input2;
		cout<<input1;
		cout<< " × ";
		cout<<input2;
		cout<<endl;
		cout<<"Answer is : ";
		cout<<total;
		cout<<endl;
		cout<<endl;
		cout<<"_________________________";
		cout<<endl;
		restartFunc();
	} else {
		theLastBoiDiv();
	}
}

void theLastBoiDiv() {
	if(oprator == '/') {
		total = input1 / input2;
		cout <<input1;
		cout << " ÷ ";
		cout<<input2;
		cout<<endl;
		cout <<"Answer is : ";
		cout<<total;
		cout<<endl;
		cout<<endl;
		cout<<"_________________________";
		cout<<endl;
		restartFunc();
	} else {
		cout<<"OOPS ! You might've selected a wrong character !"<<endl;
		cout<<endl;
		secondFunc();
	}
}

void restartFunc() {
	cout<<"The program has done it's job :) ";
	cout<<endl;
	cout<<"__________________________";
	cout<<endl;
	cout<<endl;
	
	cout<<"If you'd like to restart it type in '1'";
	cout<<endl;
	cout<<"If you'd like to end it - type in '0'";
	cout<<endl;
    cout<<endl;
    oneOrZeroFunc();
    
}

void oneOrZeroFunc() {
    cin>> oneOrZero;
    cout<<endl;
    switch(oneOrZero) {
        case '1':
            firstFunc();
            break;
        case '0':
            cout<<"You have ended the program :)";
            break;
        default:
        	cout<<"Please chose ONE or ZERO !'"<<endl;
            restartFunc();
    }       
    
    
}
