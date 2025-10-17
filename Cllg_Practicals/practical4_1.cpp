#include <iostream>
#include <vector>
using namespace std;

class Shape {
protected:
    float radius;

public:
    Shape(float r) {
        radius = r;
    }
};

class Circle : public Shape {
    float area;

public:
    Circle(float r) : Shape(r) {
        area = 0;
    }

    void calculateArea() {
        area = 3.14159f * radius * radius;
    }

    void display() {
        cout << "Radius: " << radius << ", Area: " << area << endl;
    }
};

int main() {
    cout << "Using Array:" << endl;
    Circle arr[2] = { Circle(3.0f), Circle(4.5f) };
    for (int i = 0; i < 2; ++i) {
        arr[i].calculateArea();
        arr[i].display();
    }

    cout << "\nUsing Vector:" << endl;
    vector<Circle> circles;
    circles.push_back(Circle(5.0f));
    circles.push_back(Circle(2.2f));

    for (int i = 0; i < circles.size(); ++i) {
        circles[i].calculateArea();
        circles[i].display();
    }

    return 0;
}
