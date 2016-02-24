/*Split the number into digits*/

#include <iostream>
#include <math.h>
using namespace std;

int main() {

    int X = 12511;
    int len = 5;
    int x[len] = {};

    
    for (int i=0; i<5; i++){
        int power = pow(10,len - 1 - i);
        x[i] = (X/power) % 10;
        cout << x[i] <<endl;
    }
    return 0;
}

