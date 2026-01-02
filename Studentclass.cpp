#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    // Constructor
    Person(string n, int a) {
        name = n;
        age = a;
    }
};

class Student : public Person {
public:
    int roll;
    float gpa;

    // Constructor using base class constructor
    Student(string n, int a, int r, float g) : Person(n, a) {
        roll = r;
        gpa = g;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << roll << endl;
        cout << "GPA: " << gpa << endl;
    }
};

int main() {
    Student s("Ali", 20, 1, 3.4);
    s.display();

    return 0;
}


