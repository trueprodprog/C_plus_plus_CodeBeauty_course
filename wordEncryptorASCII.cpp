//
// Created by Konstantin on 20.06.26.
//

#include <iostream>

using namespace std;

int main() {
    char c1, c2, c3, c4, c5;
    int n1, n2, n3, n4, n5;
    cout<<"Enter 5 letters: ";
    cin>>c1>>c2>>c3>>c4>>c5;
    cout<<"ASCII message: "<<int(c1)<<' '<<int(c2)<<' '<<int(c3)<<' '<<int(c4)<<' '<<int(c5)<<endl;
    cout<<"Enter 5 numbers from 0 till 255: ";
    cin>>n1>>n2>>n3>>n4>>n5;
    cout<<"The word is "<<char(n1)<<char(n2)<<char(n3)<<char(n4)<<char(n5);
}