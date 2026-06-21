#include <iostream>
using namespace std;

int main() {
    //factorial
    int number;
    cout << "Number: ";
    cin >> number;
    int factorial = 1;

    for (int i = 1; i <= number; i++) {
        factorial *= i;
    }
    cout<< "Factorial is "<< factorial << endl;
    cout << number << "! = " << factorial << endl;

    int factorial1 = 1;
    //6! =  6*5*4*3*2*1
    for (int i = number; i > 0; i--) {
        factorial1 *= i;
    }
    cout << number << "! = " << factorial1;

}