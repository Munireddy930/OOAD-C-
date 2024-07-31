#include <iostream>
double calculateSimpleInterest(double principal, double rate, double time) {
    return (principal * rate * time) / 100;
}
int main() {
    double principal, time;
    char isSeniorCitizen;
    std::cout << "Enter the principal amount: ";
    std::cin >> principal;
    std::cout << "Enter the time (in years): ";
    std::cin >> time;
    std::cout << "Is the customer a senior citizen? (y/n): ";
    std::cin >> isSeniorCitizen;
    double rate = (isSeniorCitizen == 'y' || isSeniorCitizen == 'Y') ? 12.0 : 10.0;
    double interest = calculateSimpleInterest(principal, rate, time);
    std::cout << "The simple interest is: " << interest << std::endl;
    return 0;
}
