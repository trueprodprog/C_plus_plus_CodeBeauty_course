#include <iostream>
using namespace std;

bool isPrimeNumber(int number) {
    for (int i = 2; i <= number / 2; i ++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

int plus3(int number) {
    return number + 3;
}

int main() {
    int number;
    cout << plus3(9) << endl;
    cout << "Enter number: ";
    cin >> number;
    bool isPrimeFlag = isPrimeNumber(number);


    if (isPrimeFlag)
        cout << "Prime number" << endl;
    else
        cout << "Not prime number" << endl;

    //let's show all primes from 0 to 1000
    for (int i = 1; i <= 1000; i++) {
        if (isPrimeNumber(i)) {
            cout<< i << " is a prime number" << endl;
        }
    }



    /*
    bool isPrimeFlag = true;

    for (int i = 2; i < number / 2; i ++) {
        if (number % i == 0) {
            isPrimeFlag = false;
            break;
        }
    }

    if (isPrimeFlag)
        cout << "Prime number" << endl;
    else
        cout << "Not prime number" << endl;
    */

}