#include <iostream>
#include <string>

int main() {
	int reverse;
     int string s;
    std::cout << "Enter a string: ";
    std::cin >> s;

    std::string rev = s;
    reverse(rev.begin(), rev.end());

    if (s == rev) {
        std::cout << "Palindrome!" << std::endl;
    } else {
        std::cout << "Not a palindrome." << std::endl;
    }

    return 0;
}
