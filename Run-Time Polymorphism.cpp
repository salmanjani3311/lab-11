#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() {
        cout << "Area of Shape" << endl;
    }
};

class Triangle : public Shape {
public:
    void area() override {
        cout << "Area of Triangle = 0.5 * base * height" << endl;
    }
};

int main() {
    Shape* s;
    Triangle t;

    s = &t;
    s->area();   // Calls Triangle's area()

    return 0;
}


