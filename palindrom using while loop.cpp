#include <iostream>
using namespace std;
int main() {
    string str;
    cout <<"Enter a string: ";
    cin >> str;
    int left = 0, right = str.length() - 1;
    while (left < right){
        if (str[left++] !=str[right--]) {
            cout << str <<"is not a palindrome." << endl;
            return 0;
        }
    }
    cout<<str<<"is a palindrome."<< endl;
    return 0;
}
