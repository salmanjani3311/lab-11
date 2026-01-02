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

class Teacher : public Person {
public:
    string subject;
    float salary;

    Teacher(string n, int a, string s, float sal) : Person(n, a) {
        subject = s;
        salary = sal;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Subject: " << subject << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Teacher t("Khan", 40, "python", 50000);
    t.display();

    return 0;
}

