#include <iostream>
using namespace std; //now we don't need to write stdl
int main() {
    //1st lesson
    std::cout << "Hello, World! \n"; //this will output to the console hello world
    //system("pause>0"); //only for windows

    std::cout<< "My name is Mr" <<std::endl;
    std::cout<< "Today is Saturday"<<endl;

    cout<<"hello again"<<endl;
    cout<<"Have a nice day" << endl;
    //2nd lesson: variables
    //float annualSalary = 50000.99;
    float annualSalary;
    cout<<"Enter your annual salary" << endl;
    cin>>annualSalary;
    float monthlySalary = annualSalary / 12;
    cout<<"your monthly salary is " << monthlySalary << endl;
    cout<<"In 10 years you will earn "<< annualSalary * 10;

    char character = 'a'; //single quotation for variable
    float firstSecondThird; //camelCase

    return 0;
}