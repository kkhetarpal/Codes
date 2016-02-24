#include <iostream>
#include <math.h>
using namespace std;

int duplicatetolargestnum(int x[], int size);     //functio declaration

int duplicatetolargestnum(int x[], int size){
    int number = 0, power = 0;
    int max = 0, index = 0;
    
    for(int k=0; k <size; k++){
        if (max < x[k]){
            max = x[k];
            index = k;
        }
    }
  
    for(int k=0; k <index; k++){
        
        power = pow(10,size - 1 - k);
        number += x[k] * power;
    }
    
    for(int k=index; k <=size+1; k++){
        power = pow(10,size - 1 - k+1);
        number += x[k] *power;
    }
    
    return number;   
}


int main() {

    int X = 12511;
    int len = 5;
    int x[len] = {};
    int newnum = 0;
    
    for (int i=0; i<5; i++){                           //split number into digits
        
        int power = pow(10,len - 1 - i);
        x[i] = (X/power) % 10;
    }
    
    newnum = duplicatetolargestnum(x, len);           //return the max number by duplicating
    cout << newnum << endl;
	return 0;
}








