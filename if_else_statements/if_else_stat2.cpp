//
// Created by Konstantin on 20.06.26.
//
#include <iostream>
using namespace std;

int main() {
    //User enters side lengths of a triangle (a, b, c)
    //Program should write out whether that triangle is equilateral, isosceles or scalene
    float a, b, c;
    cout<<"Enter 3 sizes of sides: ";
    cin>>a>>b>>c;
    if (a==b && b==c){
        cout<<"Equilateral triangle";
    }
    else {
        if (a!=b && b!=c && a!=c){
        cout<<"Scalene triangle";
        }
        else {
            cout<<"Isosceles triangle";
        }
    }
}