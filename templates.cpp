//Rohan Sharma
//CIS 1202 801

#include <iostream>
#include <cmath>
using namespace std;

template<typename T>
T half(T input){
    return input / 2;
}
int half(int value) { //overloaded to handle rounding
    return static_cast<int>(round(static_cast<double>(value) / 2)); //convert to double then back to int because data type promotion isn't taken here
}

int main() {
    double a = 7.0;
    float b = 5.0f;
    int c = 3;

    cout << half(a) << endl;
    cout << half(b) << endl;
    cout << half(c) << endl;

    
}


