#include <iostream>
using namespace std;

void printNumber(int* numberPtr) {
    cout << *numberPtr << endl;
}

void printLetter(char* charPtr) {
    cout << *charPtr << endl;
}
//void pointer
void print(void* ptr, char type) {
    switch (type) {
        case 'i':cout << *((int*)ptr) << " void pointer "<< endl; break; // (int*)ptr cast to int and after
        case 'c':cout << *((char*)ptr) << " void pointer " << endl; break; // we can dereference it
    }
}

int main() {
    int n = 5;
    cout << &n << " - adddress" << endl;
    int* ptr = &n; //bcs n is int
    cout << ptr << endl;
    cout << *ptr << endl;
    *ptr = 10;
    cout << *ptr << " new value in ptr" << endl;
    cout << n << " new value of n" << endl;


    int v;
    int* ptr2 = &v;
    *ptr2 = 7;
    cout << *ptr2 << endl;
    cout << ptr2 << endl;
    cout << v << " is v" << endl;

    //void pointers (we can use any type, but we can't dereference them)
    cout << "Void pointers practice \n";
    int number = 5;
    char letter = 'a';
    printNumber(&number);
    printLetter(&letter);

    print(&number, 'i');
    print(&letter, 'c');





}