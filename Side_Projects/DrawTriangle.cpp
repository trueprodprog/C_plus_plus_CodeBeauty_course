#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    //drawing isosceles triangle
    cout << "Length: ";
    int length;
    cin >> length;
    char symbol;
    cout<< "Symbol: ";
    cin >> symbol;

    for (int l = 1; l <= length; l++) {
        for (int w = 1; w<=l; w++) {
            cout << setw(2) << symbol;
        }
        cout << endl;
    }
    //reversed triangle
    cout << endl;

    for (int i = 0; i < length; i++){
        for (int j = 1; j <= length - i; j++) {
            cout << setw(2) << symbol;
        }
        cout<<endl;
    }
    //from the video
    for (int i = length; i >= 1; i--){
        for (int j = 1; j <= i; j++) {
            cout << setw(2) << symbol;
        }
        cout<<endl;
    }


}