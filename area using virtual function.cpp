// Using base class pointer to access the derived class object and show the area of rectangle and triangle calculated to illustrate virtual functions. 
#include <iostream>
using namespace std;

class Polygon
{
protected:
    int width, height;

public:
    void set_value(int w, int h)
    {
        width = w;
        height = h;
    }

    virtual float calculate_area() // Virtual function
    {
        return 0;
    }
};

class Rectangle : public Polygon
{
public:
    float calculate_area()
    {
        return width * height;
    }
};

class Triangle : public Polygon
{
public:
    float calculate_area()
    {
        return (width * height) / 2;
    }
};

int main()
{
    int w, h;
    Polygon *p;
    Rectangle r;
    Triangle t;
    cout << "Enter rectangle width and height" << endl;
    cin >> w >> h;
    r.set_value(w, h);
    cout << "Enter triangle weight and height" << endl;
    cin >> w >> h;
    t.set_value(w, h);
    p = &r;
    cout << "Area of Rectangle: " << p->calculate_area() << endl;
    p = &t;
    cout << "Area of Triangle: " << p->calculate_area() << endl;
    return 0;
}
