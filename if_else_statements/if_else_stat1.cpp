//
// Created by Konstantin on 20.06.26.
//

#include <iostream>

using namespace std;

int main() {
    int number;
    cout << "Please, enter the whole number: ";
    cin >> number;
    if (number%2==0) {
        cout<<"You have entered an even number"<<endl;
    }
    else {
        cout<<"You have entered an odd number"<<endl;
    }
    cout<<"Thanks. Bue.";

}