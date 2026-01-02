#include <iostream>
using namespace std;

class Shape {
public:
    // Area of square
    void area(int side) {
        cout << "Area of Square = " << side * side << endl;
    }

    // Area of rectangle
    void area(int length, int width) {
        cout << "Area of Rectangle = " << length * width << endl;
    }
};

int main() {
    Shape s;

    s.area(5);         // Square, side = 5
    s.area(4, 6);      // Rectangle, length=4, width=6

    return 0;
}

