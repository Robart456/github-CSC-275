#include <iostream>
using namespace std;

class Vector {
public:
    Vector() : x(0), y(0) {}
    Vector(float xx) : x(xx), y(0) {}
    Vector(float xx, float yy) : x(xx), y(yy) {}
    float getX() const { return x; }
    float getY() const { return y; }
    void setX(float xx) { x = xx; }
    void display() const { cout << x << " " << y << endl; }
    Vector operator+(const Vector &v) const {
        return Vector(x + v.x, y + v.y);
    }
    Vector operator-() const {
        return Vector(-x, -y);
    }
    Vector operator-(const Vector &v) const {
        return Vector(x - v.x, y - v.y);
    }
private:
    float x, y;
};
class Fruit {
public:
    Fruit() : name("bannana"), price(0) {}
    Fruit(string fname, float fprice) : name(fname), price(fprice) {}
    float getPrice() const { return price; }
    bool operator>(const Fruit &f) const {
        return price > f.price;
    }
private:
    string name;
    float price;
};
int main() {
    cout << "Hello, World!" << endl;
    Vector vector1(3, 5), vector2(-1, 4);

    Vector vector3 = vector1 + vector2;
    Vector vector4 = vector1 - vector2;
    Vector vector5 = vector1 + Vector(3);
    Vector vector6 = vector1 - Vector(3);
    Vector vector7 = -vector1;
    vector7.display();
    vector5.display();
    vector3.display();
    vector4.display();
    (vector1 + vector2).display();
    Fruit fruit1("apple", 1.49), fruit2("orange", 1.99);
    Fruit fruit3;
    if (fruit2 > fruit1) {
        cout << "orange is more expensive";
    }
    return 0;
}
