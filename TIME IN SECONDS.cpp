// Program to print time in format hrs:min:sec and calculate the total seconds
#include <iostream>
using namespace std;
long hms_to_sec(int hrs, int min, int sec)
{
    long int seconds;
    seconds = (hrs * 3600) + (min * 60) + sec;
    return seconds;
}
int main()
{
    int hrs, min, sec, tot_sec;
    char ch;
    do
    {
        cout << "Enter hours";
        cin >> hrs;
        cout << "Enter minutes";
        cin >> min;
        cout << "Enter seconds";
        cin >> sec;
        if (sec >= 60)
        {
            min = min + (sec / 60);
            sec %= 60;
        }
        if (min >= 60)
        {
            hrs = hrs + (min / 60);
            min %= 60;
        }
        cout << "The time is : " << hrs << ":" << min << ":" << sec << endl;
        tot_sec = hms_to_sec(hrs, min, sec);
        cout << "The total seconds are : " << tot_sec << endl;
        cout << "Do you want to enter time again? (y/n)";
        cin >> ch;
        cout << endl;
    } while (ch == 'y' || ch == 'Y');
    return 0;
}