#include <iostream>

class VoterEligibility {
private:
    int age;
public:
    VoterEligibility(int a) : age(a) {}

    void checkEligibility() const {
        const int votingAge = 18;
        if (age >= votingAge) {
            std::cout << "You are eligible to vote." << std::endl;
        } else {
            std::cout << "You are not eligible to vote." << std::endl;
            std::cout << "You have to wait " << votingAge - age << " more year(s) to be eligible." << std::endl;
        }
    }
};

int main() {
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;

    VoterEligibility voter(age);
    voter.checkEligibility();

    return 0;
}
