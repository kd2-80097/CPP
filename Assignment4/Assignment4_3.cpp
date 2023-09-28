/* Q3. Write a Matrix class. 
Allocate memory dynamically in parameterized constructor. 
Also write parameter-less constructor. 
Write accept() and print() functions.
Also provide add(), subtract(), multiply() and transpose() function. */

#include<iostream>

using namespace std;

class Matrix
{

    int row;
    int column;
    int **mat;

public:
    Matrix()
    {
    }
    Matrix(int r, int c)
    {
        this->row = r;
        this->column = c;
        mat = new int *[r]; // allocate 1st dim
        for (int i = 0; i < c; i++)
            mat[i] = new int[c]; // allocate 2nd dim
    }

    void accept()
    {

        cout << "Enter Matrix :\n ";
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                cout << "mat[" << i << "]"
                     << "[" << j << "] : \t";
                cin >> mat[i][j];
            }
            cout << "\n";
        }
    }

    void print()
    {

        cout << "\n Matrix is : \n";
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                cout << "mat[" << i << "]"
                     << "[" << j << "] : ";
                cout << mat[i][j] << "\t";
            }
            cout << "\n";
        }
    }

    void add(Matrix m2)
    {
        Matrix res(row, column);
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                res.mat[i][j] = this->mat[i][j] + m2.mat[i][j];
            }
        }
        cout << "\nAddition  ";
        res.print();
    }
    void subtract(Matrix m2)
    {
        Matrix res(row, column);
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                res.mat[i][j] = this->mat[i][j] - m2.mat[i][j];
            }
        }
        cout << "\nResultant Subtraction ";
        res.print();
    }

    void mult(Matrix m2)
    {
        Matrix res(row, column);
        if (row == m2.column)
        {
            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < m2.column; j++)
                {
                    res.mat[i][j] = 0;
                    for (int k = 0; k < m2.column; k++)
                        res.mat[i][j] += mat[i][k] * m2.mat[k][j];
                }
            }
            cout << "\n Resultant Multiplication ";
            res.print();
        }
        else
            cout << "Multiplication is not possible ";
    }

    void transpose()
    {
        Matrix res(row, column);
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                res.mat[i][j] = this->mat[j][i];
            }
        }
        cout << "Resultant Transpose of matrix m1";
        res.print();
    }
};

int main()
{
    int r, c;
    cout << "Enter Matrix dimensions row and column: \n";
    cin >> r >> c;

    Matrix m1(r, c);
    m1.accept();
    m1.print();

    Matrix m2(r, c);
    m2.accept();
    m2.print();

    m1.add(m2);
    m1.print();

    m1.subtract(m2);
    m1.print();

    m1.mult(m2);
    m1.print();

    m1.transpose();
    m1.print();

    return 0;
}