// Program to calculate the BMI
#include <iostream>
using namespace std;
class BMI
{
public:
    float w, h, b;
    BMI(float weight, float height)
    {
        w = weight;
        h = height;
    }
    display()
    {
        b = w / (h * h);
        cout << "The calculated BMI is: " << b << endl;
    }
    category()
    {
        if (b < 18.5)
        {
            cout << "Underweight";
        }
        else if (b > 18.5 && b < 24.9)
        {
            cout << "Normal";
        }
        else if (b > 25 && b < 29.9)
        {
            cout << "Overweight";
        }
        else
        {
            cout << "Obese";
        }
    }
};
int main()
{
    float weight, height;
    cout << "Enter weight in kg : ";
    cin >> weight;
    cout << "Enter height in meters : ";
    cin >> height;
    BMI b1(weight, height);
    b1.display();
    b1.category();
    return 0;
}