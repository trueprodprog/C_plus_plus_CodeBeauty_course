//
// Created by Konstantin on 21.06.26.
//

#include <iostream>
using namespace std;

int main() {
    //BMI calculator
    // weight(kg) / height * height (m)
    // Underweight < 18.5
    // Normal weight 18.5-24.9
    //Overweight >25
    //done by myself
    float weight, height, BMI;
    cout << "Enter your weight in kg" << endl;
    cin >> weight;
    cout << "Enter your height in m" << endl;
    cin >> height;
    BMI = weight / (height * height);
    cout << "BMI = " << BMI << endl;
    if (BMI < 18.5) {
        cout << "Underweight"<< endl;
    }
    else {
        if (BMI > 25) {
            cout << "Overweight";
        }
        else {
            cout << "Normal weight";
        }
    }

}