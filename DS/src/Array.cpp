//============================================================================
// Name        : Array.cpp
// Author      : Khimya
// Version     :
// Copyright   : Your copyright notice
// Description :Write code to reverse a C-Style String. (C-String means that “abcd” is represented as five characters, including the null character.)
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

void reverseastring(string str){

	int n = str.length();
	string newstring;
	if(n == 0)
		cout << "Empty String" << endl;
	if(n==1 || n==2)
		cout << "The reverse string is " << str << endl;

	for(int i = 0; i <= n-1; i++){
		newstring[i] = str[n-i-1];
		cout << newstring[i];
	}
}


int main() {

	string s1 =  "Khimya";
	string s2 = "Priti";

//	bool s11 = isuniquechar(s1);
//	bool s22 = isuniquechar(s2);
//	cout << "Unique Characters in %s" << s1 << " ? " << s11  << endl;
//	cout << "Unique Characters in %s" << s2 << " ? " << s22  << endl;

	reverseastring(s1);
	cout << endl;
	reverseastring(s2);
	cout << endl;

	return 0;
}
