/*Q1. Write a user defined function factorial() 
that calculates factorial of given number and it throws
exception if number entered by user is negative.*/

#include <iostream>
using namespace std;

void factorial()
{
    int num1;
    int num;
    cout << "******** Program To Print Factorial Of Given Number ********" << endl;
    cout << "Enter The No = ";
    cin >> num;
    if (num < 0)
        throw 1;
    else if (num == 0)
        cout << "Factorial of 0 is Always 1" << endl;
    else
    {
        for (int i = num - 1; i > 0; i--)
        {
            num = num * i;
        }
        cout << "----Facotrial = " << num << " ----" << endl;
    }
}

int main()
{
    try
    {
        factorial();
    }
    catch (int error)
    {
        cout << "Can not find the Factorial of Negative Number" << endl;
    }

    return 0;
}