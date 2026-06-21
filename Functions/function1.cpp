#include <iostream>
using namespace std;


void saysmth(string greet = "hello");

void  introduceMe(string name) { //name is a parameter
    cout << "My name is " << name << endl;
}

void introduceMePro(string name, string city, int age) {
    cout << "My name is " << name << endl;
    cout << "I am from " << city << endl;
    cout << "I am " << age << " years old" << endl;
}

//default parameter
//If you declare your function in a header file (or above main) and define it later,
//put the default value only in the declaration (the prototype), not the definition.

void introduceMePro0(string name, string city, int age = 0) { //o is default parameter (no error)
    cout << "My name is " << name << endl; //we should specify default parameters from the end
    cout << "I am from " << city << endl;
    cout << "I am " << age << " years old" << endl;
}



//declaration of function
void function();
//function shouldbe always before calling it (before main())

int main() {
    cout << "Hello from main() \n";
    function();
    function();
    introduceMe("Saldina"); //"Saldina" is an argument
    introduceMe("Anna");
    introduceMePro("Saldina", "Mostar", 25);
    introduceMePro0("Anna", "NY", 27);
    introduceMePro0("Anna", "NY");
    //introduceMePro("Anna", "NY");
    saysmth();
    saysmth("heelloooo");

    string name1, city1;
    int age1;
    cout << "Your name: ";
    cin >> name1;
    cout << "Your city: ";
    cin >>city1;
    cout << "Your age: ";
    cin >> age1;
    introduceMePro(name1, city1, age1);
}
//definition of the function
void function() {
    cout << "Hello from function ()" << endl;
}

void saysmth(string greet) {
    cout << greet << endl;
}
