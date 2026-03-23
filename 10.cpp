// Another program for using a bank system
#include <iostream>
#include <string>
using namespace std;

class bank
{
public:
    string name;
    int accNumber;
    string accType;
    double balance;
    string userID;
    string password;
    void createAccount();
    bool login();
    void deposit();
    void withdraw(int &a);
    void display();
};

void bank::createAccount()
{
    cout << "Enter Depositor Name: ";
    cin >> name;
    cout << "Enter Account Number: ";
    cin >> accNumber;
    cout << "Enter Account Type (Saving/Current): ";
    cin >> accType;
    cout << "Enter Initial Balance: ";
    cin >> balance;
    cout << "Create User ID: ";
    cin >> userID;
    cout << "Create Password: ";
    cin >> password;
    cout << "\nAccount Created Successfully!\n";
}
bool bank::login()
{
    string id, pass;
    cout << "\nLogin\n";
    cout << "Enter User ID: ";
    cin >> id;
    cout << "Enter Password: ";
    cin >> pass;
    if (id == userID && pass == password)
    {
        cout << "Login Successful!\n";
        return true;
    }
    else
    {
        cout << "Login Failed! Returning to Main Menu...\n";
        return false;
    }
}
void bank::deposit()
{
    double amount;
    cout << "Enter amount to deposit: ";
    cin >> amount;
    balance += amount;
    cout << "Amount Deposited Successfully!\n";
}
void bank::withdraw(int &a)
{
    double amount;
    cout << "Enter amount to withdraw: ";
    cin >> amount;
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
void bank::display()
{
    cout << "\nAccount Holder Name: " << name << endl;
    cout << "Current Balance: " << balance << endl;
}

int main()
{
    bank account;
    int choice;
    int a = 1;
    account.createAccount();
    do
    {
        cout << "\n===== MAIN MENU =====\n";
        cout << "1. Login\n";
        cout << "2. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            if (account.login())
            {
                int option;
                do
                {
                    cout << "\n--- BANK MENU ---\n";
                    cout << "1. Deposit\n";
                    cout << "2. Withdraw\n";
                    cout << "3. Display\n";
                    cout << "4. Logout\n";
                    cout << "Enter your option: ";
                    cin >> option;
                    switch (option)
                    {
                    case 1:
                        account.deposit();
                        break;
                    case 2:
                        account.withdraw(a);
                        break;
                    case 3:
                        account.display();
                        break;
                    case 4:
                        cout << "Logged out successfully!\n";
                        break;
                    default:
                        cout << "Invalid option!\n";
                    }
                } while (option != 4);
            }
        }
    } while (choice != 2);
    cout << "Thank you for using the Bank System!\n";
    return 0;
}