#include <iostream>
using namespace std;

class Circle {
private:
    double radius ,PI=3.12;
    double area;

public:
    void getData() {
        cout << "Enter the radius of the circle: ";
        cin >> radius;
    }
    void putData() { 
        area = PI * radius*radius;
        cout << "Radius: " << radius << endl;
        cout << "Area: " << area << endl;
    }
};

int main() {
    Circle myCircle;
    myCircle.getData();
    myCircle.putData();

    return 0;
}

