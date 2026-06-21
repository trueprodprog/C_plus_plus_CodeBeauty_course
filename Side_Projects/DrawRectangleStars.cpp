#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "Height: ";
    int height, width;
    cin >> height;
    cout << "Width: ";
    cin >> width;
    char symbol;
    cout << "Symbol: ";
    cin >> symbol;
    for (int h = 1; h <= height; h++) {
        for (int w = 1; w <= width; w ++ ) {
            cout << setw(3) << symbol; //setw is from <iomanip> library to add spacing
        }
        cout << endl;
    }

}