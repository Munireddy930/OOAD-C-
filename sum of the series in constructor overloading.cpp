#include <iostream>
class SeriesSum {
private:
    int sum;
public:
    SeriesSum(int n) {
        sum = n * (n + 1) / 2; 
    }
    SeriesSum(int a, int d, int n) {
        sum = n * (2 * a + (n - 1) * d) / 2; 
    }
   
 int getSum() const {
        return sum;
    }
};
int main() {
    int choice;
    std::cout << "Choose the series to calculate the sum:\n";
    std::cout << "1. Sum of first n natural numbers\n";
    std::cout << "2. Sum of an arithmetic series\n";
    std::cin >> choice;
    if (choice == 1) {
        int n;
        std::cout << "Enter the value of n: ";
        std::cin >> n;
        SeriesSum series1(n);
        std::cout << "Sum of first " << n << " natural numbers is: " << series1.getSum() << std::endl;
    } else if (choice == 2) {
        int a, d, n;
        std::cout << "Enter the first term (a), common difference (d), and number of terms (n): ";
        std::cin >> a >> d >> n;
        SeriesSum series2(a, d, n);
        std::cout << "Sum of the arithmetic series is: " << series2.getSum() << std::endl;
    } else {
        std::cout << "Invalid choice!" << std::endl;
    }
    return 0;
}