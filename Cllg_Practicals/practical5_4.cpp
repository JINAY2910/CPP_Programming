#include <iostream>
#include <queue>
using namespace std;

class Fahrenheit;

class Celsius {
private:
    double temperature;

public:
    Celsius(double temp = 0) : temperature(temp) {}

    operator Fahrenheit();  
    bool operator ==(const Celsius& other) const {
        return temperature == other.temperature;
    }

    void display() const {
        cout << "Celsius: " << temperature << endl;
    }
};

class Fahrenheit {
private:
    double temperature;

public:
    Fahrenheit(double temp = 0) : temperature(temp) {}

    operator Celsius();  
    bool operator ==(const Fahrenheit& other) const {
        return temperature == other.temperature;
    }

    void display() const {
        cout << "Fahrenheit: " << temperature << endl;
    }
};

Celsius::operator Fahrenheit() {
    return Fahrenheit((temperature * 9/5) + 32);
}

Fahrenheit::operator Celsius() {
    return Celsius((temperature - 32) * 5/9);
}

int main() {
    queue<Celsius> celsiusQueue;
    queue<Fahrenheit> fahrenheitQueue;

    Celsius celsiusArray[2] = {Celsius(0), Celsius(100)};
    Fahrenheit fahrenheitArray[2] = {Fahrenheit(32), Fahrenheit(212)};
    
    celsiusQueue.push(Celsius(25)); 
    celsiusQueue.push(Celsius(30)); 

    fahrenheitQueue.push(Fahrenheit(98.6)); 
    fahrenheitQueue.push(Fahrenheit(32));

    cout << "--- From Celsius Queue ---" << endl;
    while (!celsiusQueue.empty()) {
        Celsius c = celsiusQueue.front();
        c.display();
        Fahrenheit f = c;
        f.display();
        celsiusQueue.pop();
    }

    cout << "--- From Fahrenheit Queue ---" << endl;
    while (!fahrenheitQueue.empty()) {
        Fahrenheit f = fahrenheitQueue.front();
        f.display();
        Celsius c = f;
        c.display();
        fahrenheitQueue.pop();
    }

    cout << "--- From Celsius Array ---" << endl;
    for (int i = 0; i < 2; i++) {
        celsiusArray[i].display();
        Fahrenheit f = celsiusArray[i];
        f.display();
    }

    cout << "--- From Fahrenheit Array ---" << endl;
    for (int i = 0; i < 2; i++) {
        fahrenheitArray[i].display();
        Celsius c = fahrenheitArray[i];
        c.display();
    }

    return 0;
}
