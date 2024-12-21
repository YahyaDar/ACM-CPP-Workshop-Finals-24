// Write 2 functions. Both are named calculateArea
//One should calculate the area of a rectangle
//One should calculate the area of a circle

#include "iostream"
using namespace std;

double calculateArea(double w, double h)
{
    cout << "Rectangle" << endl;
    return w * h;
}

double calculateArea(double r)
{
    cout << "Circle" << endl;
    return 3.14 * r * r;
}

int main()
{
    cout << calculateArea(5, 4);
    cout << calculateArea(2);
}