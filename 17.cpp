// Program of Multilevel and Hierarchical inheritance
#include <iostream>
using namespace std;

// Base class
class Staff
{
protected:
    int code;
    char name[10];

public:
    void getStaff()
    {
        cout << "Enter Staff Code: ";
        cin >> code;
        cout << "Enter Name: ";
        cin >> name;
    }
    void showStaff()
    {
        cout << "Code: " << code << endl;
        cout << "Name: " << name << endl;
    }
};

class Faculty : public Staff
{
    char department[10];
    char subject[10];
    char researchArea[10];

public:
    void getFaculty()
    {
        getStaff();
        cout << "Enter Department: ";
        cin >> department;
        cout << "Enter Subject Taken: ";
        cin >> subject;
        cout << "Enter Research Area: ";
        cin >> researchArea;
    }
    void showFaculty()
    {
        showStaff();
        cout << "Department: " << department << endl;
        cout << "Subject: " << subject << endl;
        cout << "Research Area: " << researchArea << endl;
    }
};

class Officer : public Staff
{
    char rank[10];
    char grade;

public:
    void getOfficer()
    {
        getStaff();
        cout << "Enter Rank: ";
        cin >> rank;
        cout << "Enter Grade: ";
        cin >> grade;
    }
    void showOfficer()
    {
        showStaff();
        cout << "Rank: " << rank << endl;
        cout << "Grade: " << grade << endl;
    }
};

class Typist : public Staff
{
protected:
    char office[10];
    int speed;

public:
    void getTypist()
    {
        getStaff();
        cout << "Enter Office: ";
        cin >> office;
        cout << "Enter Typing Speed: ";
        cin >> speed;
    }
    void showTypist()
    {
        showStaff();
        cout << "Office: " << office << endl;
        cout << "Speed: " << speed << " wpm" << endl;
    }
};

class Permanent : public Typist
{
    float salary;

public:
    void getPermanent()
    {
        getTypist();
        cout << "Enter Salary: ";
        cin >> salary;
    }
    void showPermanent()
    {
        showTypist();
        cout << "Salary: " << salary << endl;
    }
};

class Casual : public Typist
{
    float dailyWages;

public:
    void getCasual()
    {
        getTypist();
        cout << "Enter Daily Wages: ";
        cin >> dailyWages;
    }
    void showCasual()
    {
        showTypist();
        cout << "Daily Wages: " << dailyWages << endl;
    }
};

int main()
{
    int choice;
    Faculty f;
    Officer o;
    Permanent p;
    Casual c;
    do
    {
        cout << "\n=====STAFF MENU=====\n";
        cout << "1.Faculty\n";
        cout << "2.Officer\n";
        cout << "3.Permanent Typist\n";
        cout << "4.Casual Typist\n";
        cout << "5.Exit\n";
        cout << "Enter your choice:";
        cin >> choice;
        switch (choice)
        {
        case 1:
            f.getFaculty();
            cout << "\n--- Faculty Details ---\n";
            f.showFaculty();
            break;
        case 2:
            o.getOfficer();
            cout << "\n--- Officer Details ---\n";
            o.showOfficer();
            break;
        case 3:
            p.getPermanent();
            cout << "\n--- Permanent Typist Details ---\n";
            p.showPermanent();
            break;
        case 4:
            c.getCasual();
            cout << "\n--- Casual Typist Details ---\n";
            c.showCasual();
            break;
        case 5:
            cout << "Program Ended";
            break;
        default:
            cout << "Invalid choice!";
        }
    } while (choice != 5);
    return 0;
}