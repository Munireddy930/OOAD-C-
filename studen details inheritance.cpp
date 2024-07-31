#include <iostream>
using namespace std;
class Person {
public:
    string name;
    int age;
};
class Student : public Person {
public:
    int studentID;
    void input() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter student ID: ";
        cin >> studentID;
        cin.ignore(); 
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Student ID: " << studentID << endl;
    }
};
int main() {
    Student student;
    student.input();
    student.display();
    return 0;
}
