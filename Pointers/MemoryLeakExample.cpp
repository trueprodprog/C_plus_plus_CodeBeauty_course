#include <iostream>
using namespace std;

void myFunction() {
    int* ptr = new int[50000];
    ptr[2] = 10;
    cout << "Hi, I am = " << ptr [2];

    delete [] ptr; //prevent leaking memory
}

int main() {
    myFunction();

}