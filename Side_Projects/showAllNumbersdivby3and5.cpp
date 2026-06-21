#include <iostream>
using namespace std;

int main() {
    //write out all the numbers between 100-500 that are divisible by 3 and 5
    int counter = 100;
    while (counter <= 500) {
        //((counter % 3 == 0) && (counter % 5 == 0))?: cout << counter: ;
        //(counter % 3 == 0 && counter % 5 == 0)? (cout << counter << " ") : (void)0; //not a good practice for this

        if (counter % 3 == 0 && counter % 5 == 0) {
            cout << counter << " is divisible by 3 and 5" << endl;
        }
        counter += 5; // more effective
        //counter++;
        //cout<<"Infinite loop";
    }
}
