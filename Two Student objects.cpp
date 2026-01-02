#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    Person(string n, int a) {
        name = n;
        age = a;
    }
};

class Student : public Person {
public:
    int roll;
    float gpa;

    Student(string n, int a, int r, float g) : Person(n, a) {
        roll = r;
        gpa = g;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << roll << endl;
        cout << "GPA: " << gpa << endl;
        cout << "------------------------" << endl;
    }
};

int main() {
    Student s1("khan", 20, 1, 3.4);
    Student s2("haira", 21, 2, 3.8);

    s1.display();
    s2.display();

    return 0;
}

