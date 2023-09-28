/* Q2. Stack is a Last-In-First-Out data structure.
Write a Stack class. It implements stack using
Dynamically allocated array.
Stack size should be passed in parameterized constructor.
If size is not given, allocate stack of size 5.
Provide member functions like push(),
pop(), peek(), isEmpty(), isFull(), and print(). */

#include <iostream>
using namespace std;

class stack
{
    int index = 0;
    int size;
    int *top;

public:
    stack()
    {
        this->size = 5;
        top = new int[size];
    }

    stack(int size)
    {
        this->size = size;
        top = new int[size];
    }

    void push()
    {
        if (!isFull())
        {
            cout << "Enter " << size << " Elements : \n";

            for (int i = 0; i < size; i++)
            {
                cin >> *(this->top);
                this->top++;
                index++;
            }
        }
        else
            cout << "Stack is full." << endl;
    }

    void pop()
    {
        if (!isEmpty())
        {
            cout << "Popped elements : \n";
            for (int i = 0; i < size; i++)
            {
                this->top--;
                cout << *(this->top) << "\n";
                index--;
            }
        }
        else
            cout << "Stack is Empty." << endl;
    }

    void peek()
    {
        if (!isEmpty())
            cout << "Peek Element =  " << *(this->top - 1) << endl;
        else
            cout << "Stack is Empty." << endl;
    }

    int isEmpty()
    {
        return (index <= 0);
    }

    int isFull()
    {
        return (index >= size);
    }

    void print()
    {
        if (!isEmpty())
        {
            cout << "Elements in The Stack Are : \n";
            int *st = top;
            int i = 1;
            while (i <= index)
            {
                st--;
                cout << *st << " ";
                i++;
            }
        }
        else
            cout << "Stack is Empty." << endl;

        cout << endl;
    }
};

int main()
{
    int size;
    stack s;
    s.push();

    s.peek();

    s.print();
    s.pop();
    s.print();

    cout << "Enter Size of stack: ";
    cin >> size;
    stack s1(size);

    s1.push();

    s1.peek();

    s1.print();
    s1.pop();

    return 0;
}