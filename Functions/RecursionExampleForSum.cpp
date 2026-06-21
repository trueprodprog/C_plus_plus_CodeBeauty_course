#include <iostream>
using namespace std;

template <typename T>



void Swap(T & a, T & b) {
    T temp = a;
    a = b;
    b = temp;
}

//recursive function

int recursive_sum(int m, int n) {
    if (m == n) //base case to stop recursion
        return m; //last step when it stops and after rolls back
    return m + recursive_sum(m + 1, n); //2+(3+(4))
}

//additional task for myself
int factorial(int n) {
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

//sum numbers between m-n
int main() {
    int m = 1, n = 2000;
    if (m > n)
        Swap(m,n);
    /*
    int sum = 0;

    for (int i = m; i <= n; i++) {
        sum += i;
    }

    cout << "Sum = " << sum;*/

    cout<<"Sum = " << recursive_sum(m, n);
    cout<<"Factorial = " << factorial(3);


}