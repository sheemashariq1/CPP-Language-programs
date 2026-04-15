// Program to calculate the area of triangle,square,rectangle using function overloading
#include <iostream>
using namespace std;
class to_calculate
{
public:
    float ar;
    float area(float a, float b, float c)
    {
        float s = (a + b + c) / 2;
        ar = ((s * (s - a)) + (s * (s - b)) + (s * (s - c)));
        return ar;
    }
    float area(float s)
    {
        ar = s * s;
        return ar;
    }
    float area(float l, float b)
    {
        ar = l * b;
        return ar;
    }
};
int main()
{
    to_calculate c;
    float s, b, l, s1, s2, s3;
    float sqarea, rectarea, triarea;
    cout << "Enter side of square: " << endl;
    cin >> s;
    sqarea = c.area(s);
    cout << "Enter length and breath of rectangle: " << endl;
    cin >> l >> b;
    rectarea = c.area(l, b);
    cout << "Enter three sides of triangle: " << endl;
    cin >> s1 >> s2 >> s3;
    triarea = c.area(s1, s2, s3);
    cout << "The area of square is: " << sqarea << endl;
    cout << "The area of rectangle is: " << rectarea << endl;
    cout << "The area of triangle is: " << triarea;
    return 0;
}