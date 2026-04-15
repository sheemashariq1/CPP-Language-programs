// Program for addition and multiplication of two matrix objects.
#include <iostream>
using namespace std;
class matrix
{
private:
    int A[10][10];
    int r, c;

public:
    matrix(int rows, int cols)
    {
        r = rows;
        c = cols;
    }
    void input()
    {
        cout << "Enter elements" << endl;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin >> A[i][j];
            }
        }
    }
    void display()
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cout << A[i][j] << "\t";
            }
            cout << endl;
        }
    }
    matrix add(matrix m)
    {
        matrix temp(r, c);
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                temp.A[i][j] = A[i][j] + m.A[i][j];
            }
        }
        return temp;
    }
    matrix multiply(matrix m)
    {
        matrix temp(r, c);
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                temp.A[i][j] = 0;
                for (int k = 0; k < r; k++)
                {
                    temp.A[i][j] += A[i][k] * m.A[k][j];
                }
            }
        }
        return temp;
    }
};
int main()
{
    int rows, cols;
    char ch;
    do
    {
        cout << "Enter rows and columns of the matrix";
        cin >> rows >> cols;
        while (rows != cols)
        {
            cout << "Error:Rows and columns should match for a matrix!" << endl;
            cout << "Enter again....";
            cin >> rows >> cols;
        }
        matrix m1(rows, cols), m2(rows, cols);
        cout << "Input matrix 1" << endl;
        m1.input();
        cout << "displaying matrix 1" << endl;
        m1.display();
        cout << "Input matrix 2" << endl;
        m2.input();
        cout << "Displaying matrix 2" << endl;
        m2.display();
        matrix add = m1.add(m2);
        matrix mult = m1.multiply(m2);
        cout << "Addition of matrices" << endl;
        add.display();
        cout << "Multiplication of matrices" << endl;
        mult.display();
        cout << "Calculation completed.....Do you want to enter more?(y/n)" << endl;
        cin >> ch;
    } while (ch == 'Y' || ch == 'y');
    return 0;
}
