#include <iostream>
using namespace std;
int main() {
    int num1, num2, num3;
    double average;
    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;
    average = (num1 + num2 + num3) / 3.0;
    cout << "Average of the three integers is:" << average << endl;
    return 0;
}