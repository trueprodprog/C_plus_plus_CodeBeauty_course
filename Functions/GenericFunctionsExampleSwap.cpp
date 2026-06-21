#include <iostream>
using namespace std;


//without generic
/*
void Swap(int& a, int& b) {
    b = a + b;
    a = b - a;
    b = b - a;
}

void Swap(char & a, char & b) {
    char temp = a;
    a = b;
    b = temp;
}
*/
//with generic

template <typename T> //new type
//template <class T> //we can also use it for classes
void Swap(T& a,T& b){
    T temp;
    temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 5, b = 7;
    cout << "a = " << a << " b = " << b << endl;
    Swap(a, b);
    cout << "a = " << a << " b = " << b << endl;

    char c = 'c',d = 'd';
    Swap<char>(c, d); //we can specify <char> but we don't need
    cout << c << "--" << d << endl;
}