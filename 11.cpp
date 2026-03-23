// Complex no program using constructors and friend function
#include <iostream>
using namespace std;

class complex
{
private:
    float real;
    float imag;

public:
    complex()
    {
        real = 0;
        imag = 0;
    }
    complex(float val)
    {
        real = val;
        imag = val;
    }
    complex(float r, float i)
    {
        real = r;
        imag = i;
    }
    friend complex &add(complex &c1, complex &c2);
    friend void display(complex &c);
};
complex &add(complex &c1, complex &c2)
{
    static complex c3;
    c3.real = c1.real + c2.real;
    c3.imag = c1.imag + c2.imag;
    return c3;
}
void display(complex &c)
{
    cout << c.real << " + " << c.imag << "i" << endl;
}
int main()
{
    float x, y, z;
    cout << "Enter First Complex Number:" << endl;
    cout << "Enter real part: " << endl;
    cin >> x;
    cout << "Enter imaginery part: " << endl;
    cin >> y;
    complex C1(x, y);
    cout << "Enter Second Complex Number:" << endl;
    cout << "Enter one value for real and imaginery part: " << endl;
    cin >> z;
    complex C2(z);
    complex C3;
    C3 = add(C1, C2);
    cout << "First Complex Number: ";
    display(C1);
    cout << "Second Complex Number: ";
    display(C2);
    cout << "---------------------------" << endl;
    cout << "Resultant Sum: ";
    display(C3);
    return 0;
}