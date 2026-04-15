// Single inheritance program displaying the result of 5 students using an array of object.
#include <iostream>
using namespace std;

class student
{
public:
    int roll;
    string name, course;
    void input_student()
    {
        cout << "Enter Roll Number: ";
        cin >> roll;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Course: ";
        cin >> course;
    }

    void display_student()
    {
        cout << "Roll Number: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Course: " << course << endl;
    }
};

class exam : public student
{
private:
    int mark1, mark2, mark3;

public:
    void input_marks()
    {
        cout << "Enter Marks of 3 Subjects: ";
        cin >> mark1 >> mark2 >> mark3;
    }

    void display_result()
    {
        int total = mark1 + mark2 + mark3;
        float avg = total / 3.0;

        display_student();

        cout << "Marks: " << mark1 << " " << mark2 << " " << mark3 << endl;
        cout << "Total: " << total << endl;
        cout << "Average: " << avg << endl;

        if (avg >= 40)
            cout << "Result: Pass";
        else
            cout << "Result: Fail";

        cout << "\n----------------------\n";
    }
};

int main()
{
    exam e[5];

    cout << "Enter details of 5 students\n";

    for (int i = 0; i < 5; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        e[i].input_student();
        e[i].input_marks();
    }

    cout << "\nStudent Results\n";

    for (int i = 0; i < 5; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        e[i].display_result();
    }
    return 0;
}