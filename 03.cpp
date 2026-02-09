//FIND THE LARGEST OF THREE GIVEN NUMBERS USING CLASS LARGEST
#include <iostream>
using namespace std;
class largest
{
private:
    int x, y, z;

public:
    void input()
    {
        cout << "input three numbers";
        cin >> x >> y >> z;
    }
    void findlargest()
    {
        int max;
        if (x >= y && x >= z)
        {
            max = x;
        }
        else if (y >= x && y >= z)
        {
            max = y;
        }
        else
        {
            max = z;
        }
        cout << "The largest number is:" << max;
    }
};
int main()
{
    largest obj;
    obj.input();
    obj.findlargest();
    return 0;
}