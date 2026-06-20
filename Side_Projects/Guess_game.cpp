//
// Created by Konstantin on 21.06.26.
//

#include <iostream>
#include <cstdlib>
using namespace std;


void clearConsole(){
    system("clear");
}

int main() {
    int hostUserNum, guestUserNum;
    cout << "Guess number from 1 to 10 \n";
    cout << "Host: ";
    cin >> hostUserNum;
    clearConsole();
    (hostUserNum > 0 && hostUserNum < 11)? cout << "Correct number": cout << "Number is not according to rules. Relaunch. \n";

    cout << "Guest: ";
    cin >> guestUserNum;
    //ternary operator
    (hostUserNum == guestUserNum)? cout << "Correct!": cout << "Failed!";


    /*if (hostUserNum == guestUserNum) {
        cout << "Correct!";
    }
    else
        cout << "Failed";*/

}
