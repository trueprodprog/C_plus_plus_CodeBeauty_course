//
// Created by Konstantin on 21.06.26.
//

#include <iostream>
using namespace std;

int main() {
    //Program for swapping of two variables
    int a = 20;
    int b = 10;

    int  temp = a;
    a = b;
    b = temp;

    cout<< "a = "<< a << ", b = " << b;
    //without temp
    int c = 15;
    int d = 25;

    c = c + d; //40
    d = c - d; //15
    c = c - d; //25

    cout << "d = " << d << ", c = " << c << endl;

}