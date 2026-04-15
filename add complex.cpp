// Program for adding two complex numbers
#include <iostream>
using namespace std;
class complex
{
public:
    int r;
    float i;
    static int x;
    static float y;

public:
    complex(int a, float b)
    {
        r = a;
        i = b;
    }
    void add()
    {
        x += r;
        y += i;
    }
    void display()
    {
        cout << "The sum of complex number  is : " << x << " + " << y << " i" << endl;
    }
};
int complex::x = 0;
float complex::y = 0;
int main()
{
    int a;
    float b;
    cout << "Complex no 1:real part" << endl;
    cin >> a;
    cout << "Complex no 1:imaginery part" << endl;
    cin >> b;
    complex c(a, b);
    c.add();
    cout << "Complex no 2:real part" << endl;
    cin >> a;
    cout << "Complex no 2:imaginery part" << endl;
    cin >> b;
    complex c1(a, b);
    c1.add();
    c1.display();
    return 0;
}