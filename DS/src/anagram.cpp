//============================================================================
// Name        : anagram.cpp
// Author      : Khimya Khetarpal
// Version     :
// Copyright   : Your copyright notice
// Description : Write a method to decide if two strings are anagrams or not.
//============================================================================

#include <iostream>
#include <string>
#include <algorithm>    // std::sort
using namespace std;




bool isanagram(string  str1, string str2){

	sort(str1.begin(),str1.end());
	sort(str2.begin(),str2.end());


	return str1==str2;
}

int main() {

/*	string s1 =  "Monkey";
	string s2 =  "Donkey";*/


	string s1 =  "Mars";
	string s2 =  "ram";


	if (s1.length() != s2.length()){
			cout << " the two strings are not anagrams"<< endl;
			return 0;
	}

	bool k = isanagram(s1,s2);
	cout << " Are the strings Khimya and aymihK anagrams ? " << k;
	return 0;
}
