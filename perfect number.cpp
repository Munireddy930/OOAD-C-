#include <iostream>
using namespace std;
bool isPerfectNumber(int number) {
    if (number <= 1) {
        return false; 
    }
    int sum = 1; 
    int i = 2;  
    while (i <= number / 2) {
        if (number % i == 0) {
            sum += i; 
        }
        i++; 
    }
    return sum == number;
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPerfectNumber(num)) {
        cout << num << " is a perfect number." << endl;
    } else {
        cout << num << " is not a perfect number." << endl;
    }
    return 0;
}
