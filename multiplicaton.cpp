#include<iostream>
using namespace std;
void printMultiplicationTable(int num) {
    for (int i = 1; i <= 10; ++i) {
        cout << num << " x " << i << " = " << num * i << endl;
    }
}
int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    cout << "Multiplication table of " << num << ":" << endl;
    printMultiplicationTable(num);
    return 0;
}
