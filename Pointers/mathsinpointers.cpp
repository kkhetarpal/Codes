/*
 * mathinpointers.cpp
 *
 *  Created on: Feb 13, 2016
 *      Author: amazon
 */


#include <iostream>
#include <string>
using namespace std;




int main() {

	int arr[5];
	int *arr0 = &arr[0];
	int *arr1 = &arr[1];
	int *arr2 = &arr[2];

	cout<< "Arr0 is at " << arr0 << endl;
	cout<< "Arr1 is at " << arr1 << endl;
	cout<< "Arr2 is at " << arr2 << endl;   //each is 4 bytes away ; as each int takes up 4 bytes

	arr0 += 2;   //instead of changing the mem address it changes where it points
	cout<< "Arr0 is now at " << arr0 << endl;

	return 0;
}



