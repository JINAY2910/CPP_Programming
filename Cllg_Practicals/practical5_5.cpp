#include <iostream>
#include <vector>
using namespace std;

class Shape {
public:
    virtual double Area() = 0;
    virtual void display() = 0;
    virtual ~Shape() {}
};

class Rectangle : public Shape {
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    double Area() {
        return length * width;
    }
    void display() {
        cout << "Rectangle Area: " << Area() << endl;
    }
};

class Circle : public Shape {
    double radius;
public:
    Circle(double r) : radius(r) {}
    double Area() {
        return 3.14159 * radius * radius;
    }
    void display() {
        cout << "Circle Area: " << Area() << endl;
    }
};

int main() {
    Shape* staticShapes[2];
    staticShapes[0] = new Rectangle(4, 5);
    staticShapes[1] = new Circle(3);

    for (int i = 0; i < 2; i++) {
        staticShapes[i]->display();
        delete staticShapes[i];
    }

    vector<Shape*> dynamicShapes;
    dynamicShapes.push_back(new Rectangle(6, 7));
    dynamicShapes.push_back(new Circle(2.5));

    for (size_t i = 0; i < dynamicShapes.size(); i++) {
        dynamicShapes[i]->display();
        delete dynamicShapes[i];
    }

    return 0;
}
