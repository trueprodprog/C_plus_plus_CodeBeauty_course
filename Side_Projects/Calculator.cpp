

#include <iostream>
using namespace std;

int main() {
    float operand1, operand2, result;
    char operation;
    cout<<"**CodeBeauty calculator**"<<endl;
    cin>>operand1>>operation>>operand2;
    //old way
    /*
    if (operation == '+'){
        result = operand1 + operand2;
    }
    else if (operation == '-') {
        result = operand1 - operand2;
    }
    else if (operation == '/') {
        result = operand1 / operand2;
    }
    else if (operation == '*') {
        result = operand1 * operand2;
    }
    else {
        cout<<"Unknown operation";
        return 0;
    }
    cout << result;*/
    //new way

    switch (operation) {
        //if we don't add break then we will execute all cases after our correct one
        case '-':cout<<operand1<<operation<<operand2<<"="<<operand1 - operand2; break;
        case '+':cout<<operand1<<operation<<operand2<<"="<<operand1 + operand2; break;
        case '*':cout<<operand1<<operation<<operand2<<"="<<operand1 * operand2; break;
        case '/':cout<<operand1<<operation<<operand2<<"="<<operand1 / operand2; break;
        case '%':
            bool isNum1Int, isNum2Int;
            (int(operand1) == operand1)?  isNum1Int = 1: isNum1Int = 0;
            //isNum1Int = ((int)operand1 == operand1); //easier way
            (int(operand2) == operand2)?  isNum2Int = 1: isNum2Int = 0;
            if (isNum1Int == 1 && isNum2Int) {
                cout<<operand1<<operation<<operand2<<"="<<int(operand1) % int(operand2); //only for integers
            }
            else
                cout << "Not valid";
            break;
        default:std::cout << "Not valid operation!" << endl; break;
        //case '+':cout<<operand1<<operation<<operand2<<"="<<operand1 + operand2; break;
    }

}