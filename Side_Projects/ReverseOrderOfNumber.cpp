#include <iostream>
using namespace std;

int main() {
    //reversing number
    int number, reversedNumber = 0;
    cout << "Number: ";
    cin >> number;

    while (number != 0) {
        reversedNumber = (reversedNumber * 10) + (number % 10);
        //reversedNumber *= 10; //incorrect bcs multiplication by 10 in the end
        number /= 10;
    }
    cout << "Reversed number: " << reversedNumber;
}