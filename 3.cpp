/*3:Create a abstract class Shape with pure virtual method area;
Create Rectangle,Circle,Square class..inherit them from Shape class..Override area method.
Test these all classes by creating object of respective class.*/
#include <iostream>
using namespace std;

class Shape {
public:
    // Pure virtual function for calculating the area
    virtual double area() const = 0;
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double len, double wid) : length(len), width(wid) {}

    // Override the area method for Rectangle
    double area() const override {
        return length * width;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double rad) : radius(rad) {}

    // Override the area method for Circle
    double area() const override {
        return 3.14159 * radius * radius;
    }
};

class Square : public Shape {
private:
    double side;

public:
    Square(double s) : side(s) {}

    // Override the area method for Square
    double area() const override {
        return side * side;
    }
};

int main33() {
    Rectangle rectangle(5.0, 4.0);
    Circle circle(3.0);
    Square square(2.0);

    cout << "Area of Rectangle: " << rectangle.area() << endl;
    cout << "Area of Circle: " << circle.area() << endl;
    cout << "Area of Square: " << square.area() << endl;

    return 0;
}

