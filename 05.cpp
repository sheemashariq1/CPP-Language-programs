// Program to implement the rectangle and triangle classes.Use the appropriate Constructors,Data members and Member functions.
#include <iostream>
#include <cmath>
using namespace std;
class rectangle
{
private:
    float l, b;

public:
    rectangle(float length, float breadth)
    {
        cout << "Constructor of class rectangle" << endl;
        l = length;
        b = breadth;
    }
    ~rectangle()
    {
        cout << "Destructor of class rectangle" << endl;
    }
    float area()
    {
        return l * b;
    }
    float perimeter()
    {
        return 2 * (l + b);
    }
};
class triangle
{
private:
    float a, b, c;

public:
    triangle(float x, float y, float z)
    {
        cout << "Constructor of class triangle" << endl;
        a = x;
        b = y;
        c = z;
    }
    ~triangle()
    {
        cout << "Destructor of class triangle" << endl;
    }
    float area()
    {
        float s = (a + b + c) / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }
    float perimeter()
    {
        return a + b + c;
    }
};
int main()
{
    char choice;
    cout << "Do you want to enter?(y/n)";
    cin >> choice;
    do
    {
        char ch;
        cout << "Which shape you want to enter?(r/t)";
        cin >> ch;
        if (ch == 'r' || ch == 'R')
        {
            float length, breadth;
            cout << "Enter the length and breadth of rectangle: ";
            cin >> length >> breadth;
            rectangle r(length, breadth);
            cout << "Area of rectangle : " << r.area() << endl;
            cout << "Perimeter of rectangle : " << r.perimeter() << endl;
        }
        else if (ch == 't' || ch == 'T')
        {
            float x, y, z;
            cout << "Enter the sides of triangle : ";
            cin >> x >> y >> z;
            triangle t(x, y, z);
            cout << "Area of triangle : " << t.area() << endl;
            cout << "Perimeter of triangle : " << t.perimeter() << endl;
        }
        else
        {
            cout << "Enter correct shape!" << endl;
        }
        cout << "Do you want to enter more?(y/n)";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');
    return 0;
}
