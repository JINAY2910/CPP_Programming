#include <iostream>
using namespace std;

class Point {
private:
    int x, y;

public:
    // Constructor
    Point(int x = 0, int y = 0) {
        this->x = x;
        this->y = y;
    }

    // Chainable move function using `this` pointer
    Point& move(int dx, int dy) {
        x += dx;
        y += dy;
        return *this; // enables chaining
    }

    // Function to print point
    void print() const {
        cout << "(" << x << ", " << y << ")\n";
    }
};

// Function demonstrating pass-by-reference using pointer
void updatePoint(Point* p, int dx, int dy) {
    p->move(dx, dy);
}

int main() {
    Point p(1, 2);
    cout << "Initial Point: ";
    p.print();

    p.move(2, 3).move(-1, 4);  // Chained call
    cout << "After Chained Moves: ";
    p.print();

    updatePoint(&p, -2, -2);  // Pass-by-reference with pointer
    cout << "After updatePoint(): ";
    p.print();

    return 0;
}

