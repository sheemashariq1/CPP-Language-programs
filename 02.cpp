//TO ADD TWO NUMBERS
#include <iostream>
using namespace std;
class add
{
public:
    int a,b,c;
    add()
    {
        cout<<"input two numbers";
        cin>>a>>b;
        c=a+b;
    }
};
int main()
{   
    int res;
    add a;
    res=a.c;
    cout<<res;
    return 0;
}