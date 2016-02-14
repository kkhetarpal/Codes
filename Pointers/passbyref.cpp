/*
 * passbyreference.cpp
 *
 *  Created on: Feb 13, 2016
 *      Author: amazon
 */


#include <iostream>
#include <string>
using namespace std;

void passbyvalue(int x);
void passbyreference(int *x);
//void passbyreference(int&);


int main() {

	int apples = 13;
	int oranges = 13;

	passbyvalue(apples);   //parameter is passed as a value
	passbyreference(&oranges);

	cout << " Apples now are " << apples << endl;
	cout << " Oranges now are " << oranges << endl; ;

	return 0;
}


void passbyvalue(int x){    //passing 100 to the parameter
	x = 100;				//passes a copy of apples , not the same variable apples
}

void passbyreference(int *x)/*void passbyreference(int& x)*/{		//passing the address of oranges
	*x = 500;
}

