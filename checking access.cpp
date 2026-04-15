// Checking access of private members of base class in derived class
#include <iostream>
using namespace std;

class Base2; // Forward declaration

class Base1
{
public:
    int a1 = 10;

protected:
    int a2 = 20;

private:
    int a3 = 30;

public:
    void displayBase1()
    {
        cout << "Base1 Public: " << a1 << endl;
        cout << "Base1 Protected: " << a2 << endl;
        cout << "Base1 Private: " << a3 << endl;
    }
};

class Base2
{
public:
    int b1 = 40;

protected:
    int b2 = 50;

private:
    int b3 = 60;

    // Base1 is friend
    friend class Base1;
};

class Derived : public Base1, public Base2
{
public:
    void checkAccess()
    {
        cout << "Accessing Base1 members inside Derived class\n";

        cout << "Public: " << a1 << endl;    // Accessible
        cout << "Protected: " << a2 << endl; // Accessible
        // cout << a3;                          // Not accessible (private)

        cout << "\nAccessing Base2 members inside Derived class\n";

        cout << "Public: " << b1 << endl;    // Accessible
        cout << "Protected: " << b2 << endl; // Accessible
        // cout << b3;                          // Not accessible (private)
    }
};

int main()
{
    Derived d;
    d.checkAccess();
    return 0;
}