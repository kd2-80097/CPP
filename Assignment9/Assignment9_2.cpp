/* Q2. Write a class to store Account information of Bank customer 
by using following class diagram.
Use enum to store information of account type. 
Create an array of 5 Accounts in main() and accept their details from user. 
Write Menu driven program to deposit/withdraw amount from the account.
After each transaction display updated account balance. 
Provide appropriate getters/setters with necessary validations. 
Throw exceptions for invalid values. 
Also implement an exception class InsufficientFunds. 
In withdraw() member function, if sufficient balance is not available
in account, throw this exception.*/


#include <iostream>
using namespace std;

enum account_type
{
    SAVING = 1,
    CURRENT = 2,
    DMAT = 3
};

class insuff_funds
{
    int acc_id;
    double current_bal;
    double withdraw_bal;

public:
    insuff_funds(int id, double current_bal, double withdraw_bal)
    {
        this->acc_id = id;
        this->current_bal = current_bal;
        this->withdraw_bal = withdraw_bal;
    }
    void display()
    {
        cout << "\n****************************Insufficient funds****************************\n";
        cout << "You Cannot withdraw amount\n";
        cout << "Account id : " << acc_id;
        cout << " Current balance : " << current_bal << " is less than withdrawl amount : " << withdraw_bal;
    }
};

class account
{
    int id;
    double balance;
    account_type type;

public:
    account()
    {
        this->id = 0;
        this->balance = 0;
    }
    account(int id, account_type type)
    {
        this->id = id;
        this->type = type;
    }
    int get_id()
    {
        return this->id;
    }
    void set_id(int id)
    {
        this->id = id;
    }
    void set_type(account_type type)
    {
        this->type = type;
    }
    account_type get_type()
    {
        return this->type;
    }

    void accept()
    {
        int num;
        cout << "\nEnter Bank Account Details";
        cout << "\nEnter Account ID : ";
        cin >> id;
        cout << "\nEnter Account Balance : ";
        cin >> balance;
        cout << "1.SAVING \n 2.CURRENT \n 3.DMAT \n Choose Account Type : ";
        cin >> num;
        type = (account_type)num;
    }
    void display()
    {
        cout << "\n*****************************Bank Account Details*****************************\n";
        cout << "Account id is : ";
        cout << this->id;
        cout << "\nAccount balance is : ";
        cout << this->balance;
        cout << "\nAccount type :";
        switch (account_type(type))
        {
        case SAVING:
            cout << "SAVING";
            break;
        case CURRENT:
            cout << "CURRENT";
            break;
        case DMAT:
            cout << "DMAT";
            break;
        };
    }
    void deposit(double depoAmt)
    {
        this->balance = this->balance + depoAmt;
    }
    void withdraw(double withdrawAmt)
    {
        if (withdrawAmt > balance)
            throw insuff_funds(id, balance, withdrawAmt);
       
        this->balance = this->balance - withdrawAmt;
    }
};

enum menulist
{
    EXIT,
    ADDBAL,
    WITHDRAW,
    DISPLAYAC
};

int menu()
{
    int choice;
    cout << "\n-------------------------MENU-------------------------\n";
    cout << "\n 0.EXIT \t 1.ACCEPT\t 2.DEPOSIT \t 3.WITHDRAW \t 4.DISPLAY";
    cout << "\nEnter your choice : ";
    cin >> choice;
    return menulist(choice);
}

int main()
{
    int choice, index = 0;
    double depAmt, withdrawAmt;
    account *arr[10];

    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:
            arr[index] = new account();
            arr[index]->accept();
            index++;
            break;
        case 2:
            cout << "Enter Amount to Deposit : ";
            cin >> depAmt;
            arr[index - 1]->deposit(depAmt);
            arr[index - 1]->display();
            break;
        case 3:
            cout << "Enter Amount to Withdraw : ";
            cin >> withdrawAmt;
            try
            {
                arr[index - 1]->withdraw(withdrawAmt);
            }
            catch (insuff_funds ins_funds)
            {
                ins_funds.display();
            }
            break;
        case 4:
            arr[index - 1]->display();
            break;
        }
    }

    for (int i = 0; i < index; i++)
    {
        delete arr[i];
    }

    return 0;
}