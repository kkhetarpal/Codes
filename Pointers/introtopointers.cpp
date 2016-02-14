/*
 * introtopointers.cpp
 *
 *  Created on: Feb 13, 2016
 *      Author: Khimya
 */


#include <iostream>
#include <string>
using namespace std;




int main() {
	int fish = 5;
	cout << &fish << endl;    			//memory address of a pointer

	int *fishPointer = &fish;			//pointer pointing to where the variable fish is stored
	cout << fishPointer << endl;

	return 0;
}

