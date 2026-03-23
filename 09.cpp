// Program to create a bank account
#include <iostream>
#include <string>
using namespace std;
class bankaccount
{
private:
    string id;
    string pass;
    float balance;

public:
    bankaccount(string userid, string password)
    {
        id = userid;
        pass = password;
        balance = 0;
    }
    login(string loginid, string loginpass)
    {
        if (loginid == id && loginpass == pass)
        {
            return 1;
        }
    }
    deposit(float amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposit successful" << endl;
        }
        else
        {
            cout << "Invalid deposit amount" << endl;
        }
    }
    withdraw(float amount, int &a)
    {

        if (amount > balance)
        {
            cout << "Amount exceeds the bank balance." << endl;
        }
        else if (amount <= 0)
        {
            cout << "Incorrect withdrawal amount." << endl;
        }
        else
        {
            if (a <= 2)
            {
                balance -= amount;
                cout << "Successfully withdrew" << endl;
                a++;
            }
            else
            {
                cout << "You cannot withdraw money from the bank more than twice a day" << endl;
            }
        }
    }
    depositbalance()
    {
        cout << "Current Balance: " << balance << endl;
    }
};
int main()
{
    string userid, loginid, password, loginpass;
    int ch, a = 1;
    float amount;
    cout << "Create bank account" << endl;
    cout << "Enter user ID: ";
    cin >> userid;
    cout << "Enter password: ";
    cin >> password;
    cout << "Account created successfully" << endl;
    bankaccount b(userid, password);
    cout << "LOGIN...." << endl;
    cout << "Enter user ID: " << endl;
    cin >> loginid;
    cout << "Enter Password: " << endl;
    cin >> loginpass;
    if (b.login(loginid, loginpass))
    {
        cout << "Login successfully" << endl;
        do
        {
            cout << "What you want to do?" << endl;
            cout << "1. Deposit money" << endl;
            cout << "2. Withdraw money" << endl;
            cout << "3. Request balance" << endl;
            cout << "4. Quit" << endl;
            cout << "Enter your choice: ";
            cin >> ch;
            switch (ch)
            {
            case 1:
                cout << "Enter deposit amount: ";
                cin >> amount;
                b.deposit(amount);
                break;
            case 2:
                cout << "Enter withdraw amount: ";
                cin >> amount;
                b.withdraw(amount, a);
                break;
            case 3:
                b.depositbalance();
                break;
            case 4:
                cout << "Quiting the program...." << endl;
                break;
            default:
                cout << "Invalid choice." << endl;
            }
        } while (ch != 4);
    }
    else
    {
        cout << "Login failed.Incorrect Id or Password." << endl;
    }
    return 0;
}
