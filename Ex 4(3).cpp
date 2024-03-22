
#include <iostream>
using namespace std;

double areaofCircle(double r, double pi = 3.142) {
    return pi * r * r;
}

int main() {
    double r;
    cout << "Enter the value of r: ";
    cin >> r;

    double area = areaofCircle(r);
    cout << "area of the circle is: " << area << endl;

    return 0;
}
