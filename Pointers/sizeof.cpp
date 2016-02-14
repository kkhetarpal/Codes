/*
 * sizeofpointers.cpp
 *
 *  Created on: Feb 13, 2016
 *      Author: Khimya
 */


#include <iostream>
#include <string>
using namespace std;




int main() {

	char c;
	int i;
	double d;
	double arr[10];

	cout << sizeof(arr)/sizeof(arr[0]) << endl;   //find the length of an array
	cout << "Size of character " << sizeof(c) << endl;
	cout << "Size of integer " << sizeof(i) << endl;
	cout << "Size of double " << sizeof(d) << endl;  /*more precise a value is more space in the memory is taken*/
	cout << "Size of integer " << sizeof(arr) << endl;   //Each double is 8 bytes

	return 0;
}



