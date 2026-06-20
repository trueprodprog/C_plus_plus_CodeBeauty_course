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
    float annualSalary = 50000.99;
    //float annualSalary;
    cout<<"Enter your annual salary" << endl;
    //cin>>annualSalary;
    float monthlySalary = annualSalary / 12;
    cout<<"your monthly salary is " << monthlySalary << endl;
    cout<<"In 10 years you will earn "<< annualSalary * 10 << endl;



    int yearOfBirth = 2001;
    char gender = 'f';
    bool isOlderThan18 = true;
    float averageGrade = 4.5; //4 bytes
    double balance = 4505094834988934; //8 bytes

    char character = 'a'; //single quotation for variable
    float firstSecondThird; //camelCase

    cout<<"Size of int is " << sizeof(int) << " bytes \n";
    cout << "Int min value is " << INT_MIN << endl; //-1, ..., -2147483648
    cout << "Int max value is " << INT_MAX << endl; //0, ..., 2147483647

    cout << "Size of unsigned int is " << sizeof(unsigned int) << "bytes \n";
    cout << "Unsigned int max value is" << UINT_MAX <<endl; //4 294 967 295
    cout << "Size of double is" << sizeof(double) << " bytes \n";
    cout << "Double max value is " << numeric_limits<double>::max() << endl;


    int intMax = INT_MAX;
    cout << intMax << endl;
    cout << intMax + 1 << endl; //data type overflow - we got the lowest possible
    //Lesson 3 ASCII table
    cout << (int)'a' << endl; //casting operator
    cout << int('a') << endl;
    cout << int('A') << endl;
    cout << char(65) << endl;

    return 0;
}