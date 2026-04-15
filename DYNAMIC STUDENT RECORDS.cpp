// Program to display the student details using class and array of objects (dynamic array).
#include <iostream>
using namespace std;

class student
{
private:
    int rollno;
    string name;
    float mark1, mark2, mark3;
    float total, average;

public:
    void getdata()
    {
        cout << "Enter Roll No: ";
        cin >> rollno;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Mark 1: ";
        cin >> mark1;

        cout << "Enter Mark 2: ";
        cin >> mark2;

        cout << "Enter Mark 3: ";
        cin >> mark3;

        total = mark1 + mark2 + mark3;
        average = total / 3;
    }

    void displaydata()
    {
        cout << "\nRoll No: " << rollno;
        cout << "\nName: " << name;
        cout << "\nMark1: " << mark1;
        cout << "\nMark2: " << mark2;
        cout << "\nMark3: " << mark3;
        cout << "\nTotal: " << total;
        cout << "\nAverage: " << average << endl;
    }
};

int main()
{
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    student *s = new student[n]; // Array of objects

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details for student " << i + 1 << endl;
        s[i].getdata();
    }

    cout << "\n--- Student Details ---\n";

    for (int i = 0; i < n; i++)
    {
        s[i].displaydata();
    }
    delete[] s;
    return 0;
}
