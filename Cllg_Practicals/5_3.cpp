#include<iostream>
#include<stack>
using namespace std;
class points {
    int a, b;
public:
    points() {}
    points(int x, int y) : a(x), b(y) {}
    points operator+(points c2) {
        return points(a + c2.a, b + c2.b);
    }
    points operator-(points c2) {
        return points(a - c2.a, b - c2.b);
    }
    void operator-() {
        a -= 1;
        b -= 1;
    }
    int operator==(points c2) {
        if (a == c2.a && b == c2.b)  return 1;
        else return 0;
    }
    void display() {
        cout << "Points: (" << a << "," << b << ")" << endl;
    }
};
int main() {
    points p1(3, 4), p2(1, 2);
    p1.display();
    p2.display();
    points sum = p1 + p2;
    sum.display();
    stack<points>s;
    s.push(sum);
    s.push(sum);
    return 0;
}
