#include <iostream>
using namespace std;

int main() {
    int luckyNumbers[5] = { 2, 3, 5, 7, 9 };

    cout << luckyNumbers << endl;
    cout << luckyNumbers[0] << " address of " << &luckyNumbers[0] << endl;
    cout << luckyNumbers[2] << endl;
    cout << *(luckyNumbers + 2) << endl; //address of lucky numbers 0 + 2 = 2nd (3rd) element

    //another way to define an array
    int luckyNumbers1[5];

    for (int i = 0; i <= 4; i++) {
        cout << "Number: ";
        cin >> luckyNumbers1[i];

    }

    for (int i = 0; i <= 4; i++) {
        cout << *(luckyNumbers+i)<<" ";
    }
    cout << endl;
    cout << *luckyNumbers;

}