#include <iostream>
#include <cmath>
using namespace std;

typedef int* IntPtr;
class Point {
public:
    Point(int x = 0, int y = 0): x(x), y(y) {}

    int getX() const { return x; }
    int getY() const { return y; }

    void setX(int xVal) { x = xVal; }
    void setY(int yVal) { y = yVal; }

private:
    int x, y;
};

Point* fillPointArray(Point parray[], int size) {
    for(int i = 0; i < size; i++) {
        parray[i] = Point(i, pow(i, 2));
    }
    return parray;
}

Point* fillPointArray2(Point* ptr, int size) {
    for(int i = 0; i < size; i++) {
        ptr[i] = Point(i, pow(i, 3));
    }
    return ptr;
}

int main() {
    IntPtr ptr1 = new int;
    *ptr1 = 10;
    cout << "Address of ptr1: " << ptr1 << endl;
    cout << "Value at ptr1: " << *ptr1 << endl;

    // Dynamic allocation of Point objects
    const int N = 5;
    Point *ptr2 = new Point(5, 1);
    cout << "Point ptr2: x = " << ptr2->getX() << ", y = " << ptr2->getY() << endl;

    Point parray[N];
    fillPointArray(parray, N);
    cout << "Filled Point Array with squares:" << endl;
    for(int i = 0; i < N; i++) {
        cout << "Point " << i << ": x = " << parray[i].getX() << ", y = " << parray[i].getY() << endl;
    }

    fillPointArray2(parray, N);
    cout << "Filled Point Array with cubes:" << endl;
    for(int i = 0; i < N; i++) {
        cout << "Point " << i << ": x = " << parray[i].getX() << ", y = " << parray[i].getY() << endl;
    }
    delete ptr1;
    delete[] ptr2;
    return 0;
}
