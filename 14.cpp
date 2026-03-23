// Banking program for current and saving accounts using interest rates
#include <iostream>
using namespace std;
class bank
{
    float principal;
    int years;
    float rate;
    float interest;

public:
    bank(float p)
    {
        principal = p;
        years = 1;
        rate = 4.0;
        calculate();
    }
    bank(float p, int y)
    {
        principal = p;
        years = y;
        rate = 6.0;
        if (years >= 5)
        {
            rate = rate + 3.0;
        }
        calculate();
    }
    void calculate()
    {
        interest = (principal * rate * years) / 100.0;
    }
    void display()
    {
        cout << "-----Account details-----" << endl;
        cout << "Principal amount : " << principal << endl;
        cout << "Interest rate : " << rate << endl;
        cout << "Duration :" << years << endl;
        cout << "Interest earned : " << interest << endl;
        cout << "Total balance : " << principal + interest << endl;
    }
};
int main()
{
    char choice;
    do
    {
        float p;
        int y, ch;
        cout << "Enter deposit amount: ";
        cin >> p;
        cout << "Select account type:\n 1.Current account(4%)\n2.Savings account(6%)\nEnter your choice:";
        cin >> ch;
        if (ch == 1)
        {
            bank current(p);
            current.display();
        }
        else if (ch == 2)
        {
            cout << "Enter duration: ";
            cin >> y;
            bank savings(p, y);
            savings.display();
        }
        else
        {
            cout << "INVALID CHOICE!";
        }
        cout << "\nDo you want to perform more calculations?(y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    cout << "*****PROGRAM ENDED*****";
}
