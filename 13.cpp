// Complex numbers program using operator overloading
#include <iostream>
using namespace std;

class Complex
{
    float real, imag;

public:
    void getdata()
    {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginery part: ";
        cin >> imag;
    }
    // Member function
    Complex operator+(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    void display()
    {
        cout << real << " + " << imag << "i";
    }
};
int main()
{
    Complex c1, c2, c3;
    cout << "Enter first complex number: " << endl;
    c1.getdata();
    cout << "Enter second complex number: " << endl;
    c2.getdata();
    cout << "\nFirst complex number: ";
    c1.display();
    cout << "\nSecond complex number: ";
    c2.display();
    cout << "\nResultant sum is: ";
    c3 = c1 + c2;
    c3.display();
    return 0;
}