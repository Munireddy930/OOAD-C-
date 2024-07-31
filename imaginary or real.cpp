#include <iostream>
using namespace std;

class Example {
public:
    int value1;
    int value2;
    Example(int v1, int v2) : value1(v1), value2(v2) {}
};
int main() {
    Example obj(1, 54);
    Example* ptr = &obj;
    cout << "Value 1: " << ptr->value1 << endl;
    cout << "Value 2: " << ptr->value2 << endl;
    return 0;
}
