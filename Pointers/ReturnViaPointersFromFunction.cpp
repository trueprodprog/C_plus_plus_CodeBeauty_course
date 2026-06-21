#include <iostream>
using namespace std;

int getMin(int numbers[], int size) {
    int min_number = numbers[0];
    for (int i = 0; i < size; i++) {
        if (numbers[i] < min_number)
            min_number = numbers[i];

    }
    return min_number;
}

int getMax(int numbers[], int size) {
    int max = numbers[0];
    for (int i = 1; i < size; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    return max;
}

void getMinMax(int numbers[], int size, int* min, int* max) {
    *min = numbers[0];
    *max = numbers[0];

    for (int i = 1; i < size; i++) {
        if (numbers[i] < *min)
            *min = numbers[i];
        if (numbers[i] > *max)
            *max = numbers[i];
    }

}

int main() {
    int numbers[5] = { 5,4,-2,29,6 };
    cout << "Min is " << getMin(numbers, 5) << endl;
    cout << "Max is " << getMax(numbers, 5) << endl;

    int min, max;
    getMinMax(numbers, 5, &min, &max);
    cout << "Min is * " << min << " Max is *" << max << endl;


}