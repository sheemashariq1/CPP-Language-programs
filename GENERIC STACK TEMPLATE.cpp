// Generic class Stack to implement the push() and pop() functions of a stack for different data types.
#include <iostream>
using namespace std;

template <class T>
class Stack
{
    T *arr;
    int top, size;

public:
    Stack(int s)
    {
        size = s;
        arr = new T[size];
        top = -1;
    }

    void push(T value)
    {
        if (top == size - 1)
        {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = value;
    }

    T pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow\n";
            return T();
        }
        return arr[top--];
    }
    void display()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    int n;
    cout << "Enter stack size: ";
    cin >> n;

    // Integer stack
    Stack<int> s1(n);
    int x;

    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        s1.push(x);
    }

    cout << "Integer Stack: ";
    s1.display();

    cout << "Popped from int stack: " << s1.pop() << endl;
    s1.display();

    // Character stack
    Stack<char> s2(n);
    char ch;

    cout << "\nEnter " << n << " characters:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> ch;
        s2.push(ch);
    }

    cout << "Character Stack: ";
    s2.display();

    cout << "Popped from char stack: " << s2.pop() << endl;
    s2.display();

    return 0;
}