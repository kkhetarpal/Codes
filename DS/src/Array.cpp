//============================================================================
// Name        : Array.cpp
// Author      : Khimya Khetarpal
// Version     :
// Copyright   : Your copyright notice
// Description : Reverse a string
//============================================================================

#include <iostream>
#include <string>
using namespace std;

void reverseastring(char *str);
bool isuniquechar(string str);

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


void reverseastring(char *str){
	char *end = str;
	char temp;
	if (str) {
		while(*end){
			++end;
		}
		--end;
	while(str < end){
		temp = *str;
		*str = *end;
		*end = temp;
		*str++;
		*end--;
		}
	}
}

int main() {

	char s1[] =  "Khimya";

	reverseastring(s1);
	cout << " Reverse of string Khimya is " << s1;
	return 0;
}
