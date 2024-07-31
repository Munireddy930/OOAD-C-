#include <iostream>
using namespace std;
int factorial(int num) {
    int fact = 1;

    for (int i = 1; i <= num; ++i) {
        fact *= i;
    }
    return fact;
}
int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        int result = factorial(num);
        cout << "Factorial of " << num << " is " << result << endl;
    }
    return 0;
}
