//============================================================================
// Name        : Array.cpp
// Author      : Khimya
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

bool isuniquechar(string str){

	bool charset[256] = {false};

	for(int k = 0; k < str.length(); k++){
		char c = str[k];
		int val = int(c);

		if(charset[val] == true)
			return false;
		charset[val]= true;
	}
	return true;
}

int main() {

	string s1 =  "Khimya";
	string s2 = "Priti";

	bool s11 = isuniquechar(s1);
	bool s22 = isuniquechar(s2);
	cout << "Unique Characters in %s" << s1 << " ? " << s11  << endl; // prints !!!Hello World!!!
	cout << "Unique Characters in %s" << s2 << " ? " << s22  << endl; // prints !!!Hello World!!!
	return 0;
}
