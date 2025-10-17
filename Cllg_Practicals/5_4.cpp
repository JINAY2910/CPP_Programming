#include <iostream>
#include <queue>
using namespace std;
class Fahrenheit;
class Celsius {
private:
    float tempC;
public:
    Celsius(float t = 0) : tempC(t) {}
    float getTemp() const { return tempC; }
    operator Fahrenheit();
    bool operator==(const Celsius& other) const {
        return tempC == other.tempC;
    }
};
class Fahrenheit {
private:
    float tempF;
public:
    Fahrenheit(float t = 32) : tempF(t) {}
    float getTemp() const { return tempF; }
    operator Celsius() {
        return Celsius((tempF - 32) * 5 / 9);
    }
    bool operator==(const Fahrenheit& other) const {
        return tempF == other.tempF;
    }
};
Celsius::operator Fahrenheit() {
    return Fahrenheit((tempC * 9 / 5) + 32);
}
int main() {
    Celsius c1(25); 
    Fahrenheit f1 = c1; 
    cout << "25 Celsius in Fahrenheit: " << f1.getTemp() << " F" << endl;
    Fahrenheit f2(77); 
    Celsius c2 = f2;
    cout << "77 Fahrenheit in Celsius: " << c2.getTemp() << " C" << endl;
    return 0;
}
