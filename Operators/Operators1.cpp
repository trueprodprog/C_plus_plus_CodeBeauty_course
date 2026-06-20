//
// Created by Konstantin on 21.06.26.
//

#include <iostream>
using namespace std;


void fakeClear() {
    // Prints 100 empty lines to push old content up
    cout << string(20, '\n') << endl;
}

void clearScreen(){

    // \033[H moves cursor to top home, \033[2J clears the screen
    cout << "\033[H\033[2J" << std::flush;
}


int main() {
    //+,-,*,/,% arithmetic
    cout << 5 + 2 << endl; // 2 operands
    cout << 5 / 2 << endl; //bcs both are whole numbers
    cout << 5.0 / 2 << endl; //decimal point number
    cout << 5 % 2 << endl; // remainder of dividing
    // ++, -- unary operators
    int counter = 7;
    counter ++;
    cout << counter << endl;
    counter --;
    cout << counter << endl;

    int counter2 = 7;
    cout<< counter2++ << endl; //postincrement (shows first)
    cout << counter2 << endl;
    cout << ++counter2 << endl; //preincrement

    cout << counter2-- << endl;
    cout << counter2 << endl;
    cout << --counter2 << endl;

    //<,>, <=, >=, ==, != relational operators
    //system("cls"); doesn't work in CLion
    clearScreen();
    fakeClear();
    int a = 5, b = 5; //comma is a binary operator
    cout << (a > b) << endl; // output 0 is false
    cout << (a == b) << endl;
    fakeClear();
    //&&, ||, ! logical operators
    b = 8;
    cout << (a == 5 && b == 5); //and
    cout << (a == 5 || b ==5 ); // or
    cout << !(a == 5 || b == 5); // not
    fakeClear();

    cout << (a == 5 && b == 5 + 3); //arithmetic operators have more priority

    fakeClear();
    //=, +=, -=, *=, /=, %= assignment operators
    int x = 5;
    x += 7;
    cout << x << endl;
    x = x + 7;
    x -= 7;
    cout << x << endl;

}