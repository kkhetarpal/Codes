

#include <iostream>
#include <string>

using namespace std;


void replacespaces(string &s1, string &s2){

	for (int i = 0; i <= s1.length(); i++){
		if (s1.compare(i,1, " ") == 0)
			s2.append("%20");
		else
			s2.append(1,s1[i]);
	}
}

void replacespaces2(char* str){

	int count = 0;
	int length = 0;
	char *ptr = str;

	while(*ptr){
		if(*ptr == ' ')
			count++;         //count hold number of non spaces
		length++;			 //length of the original string
		ptr++;
	}

	int newlen = length + 2*count;
	str[newlen] = '\0';

	for(int i = newlen - 1; i >= 0;){
		if(str[i - 2*count] == ' '){
			str[i] = '0';
			str[i-1] = '2';
			str[i-2] = '%';
			i = i - 3;
			count--;
		}
		else{
			str[i] = str[i - 2*count];
			--i;
		}
	}
}



void removespaces(char* str){

	int count = 0;

	for(int i=0; str[i]; i++)
		if(str[i] != ' ')                           //if the char is not a space
			str[count++] = str[i];					//put this character at the index count; //increment count

	str[count] = '\0';
}

int main(){


	char str[] = "g eeks ";
    cout << str << endl;

    replacespaces2(str);
    cout << str << endl;

    /*string s1 = "k him";
    string s2 = " ";
    replacespaces(s1, s2);
    cout << s2 << endl;*/



	return 0;
}
