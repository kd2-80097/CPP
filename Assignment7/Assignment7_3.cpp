/*Q3. Using the Q1 from assignment 6. 
Create an array of 10 employees. Provide menu driven code
for the functionalities: Insted of char[] use string datatype
1. Accept Employee
2. Display the count of all employees with respect to designation
3. Display respective designation employees*/

#include <iostream>
#include <string>
using namespace std;

class Employee
{
protected:
    int id;
    float sal;
    string designation;

public:
    Employee()
    {
        this->id = 0;
        this->sal = 0;
    }
    Employee(int id, float sal)
    {
        this->id = id;
        this->sal = sal;
    }
    virtual void accept()
    {
        cout << "\nEnter Employee Id : ";
        cin >> this->id;
        cout << "Enter Salary : ";
        cin >> this->sal;
    }
    virtual void display()
    {
        cout << "Employee ID : " << this->id << endl;
        cout << "Salary : " << this->sal << endl;
    }

    int get_Id()
    {
        return this->id;
    }
    void set_Id(int id)
    {
        this->id = id;
    }
    float get_Sal()
    {
        return this->sal;
    }
    void set_Sal(int sal)
    {
        this->sal = sal;
    }
    string getDesignation()
    {
        return this->designation;
    }
    void setDesignation(string designation)
    {
        this->designation = designation;
    }
    virtual ~Employee()
    {

    }
};

class Salesman : virtual public Employee
{
private:
    float comm;

public:
    Salesman()
    {
        this->designation = "Salesman";
        this->comm = 0.0;
    }
    Salesman(int id, float sal, float comm) : Employee(id, sal)
    {
        this->comm = comm;
    }
    void accept()
    {
        Employee ::accept();
        cout << "Enter Commision : ";
        cin >> this->comm;
    }
    void display()
    {
        cout << "----------------------" << endl;
        Employee ::display();
        cout << "Commision : " << this->comm << endl;
    }
    float get_Comm()
    {
        return this->comm;
    }
    void set_Comm(float comm)
    {
        this->comm = comm;
    }

protected:
    void displaySalesman()
    {
        cout << "Commision : " << this->comm << endl;
    }
    void acceptSalesman()
    {
        cout << "Enter commision : ";
        cin >> this->comm;
    }
};

class Manager : virtual public Employee
{
private:
    float bonus;

public:
    Manager()
    {
        this->designation = "Manager";
        this->bonus = 0;
    }
    Manager(int id, float sal, float bonus) : Employee(id, sal)
    {
        this->bonus = bonus;
    }
    void accept()
    {
        Employee ::accept();
        cout << "Enter bonus : ";
        cin >> this->bonus;
    }
    void display()
    {
        cout << "----------------------" << endl;
        Employee ::display();
        cout << "Bonus : " << this->bonus << endl;
    }
    float getBonus()
    {
        return this->bonus;
    }
    void setBonus(float bonus)
    {
        this->bonus = bonus;
    }

protected:
    void displayManager()
    {
        cout << "Bonus : " << this->getBonus() << endl;
    }
    void acceptManager()
    {
        cout << "Enter bonus : ";
        cin >> this->bonus;
    }
};

class Sales_manager : public Salesman, public Manager
{
public:
    Sales_manager()
    {
        this->designation = "Salesmanager";
    }
    Sales_manager(int id, float sal, float comm, float bonus) : Employee(id, sal), Salesman(id, sal, comm), Manager(id, sal, bonus)
    {
    }
    void accept()
    {
        Employee ::accept();
        float bonus, comm;
        cout << "Enter bonus : ";
        cin >> bonus;
        setBonus(bonus);
        cout << "Enter commision : ";
        cin >> comm;
        set_Comm(comm);
    }
    void display()
    {
        cout << "----------------------" << endl;
        cout << "\nSales Manager ID : " << id << "\nSalary : " << get_Sal() << "\nBonus : " << Manager ::getBonus() << "\nCommision : " << Salesman::get_Comm() << endl;
        cout << "----------------------" << endl;
    }
};

enum EMENU
{
    EXIT,
    ACCEPT_SALESMAN,
    ACCEPT_MANAGER,
    ACCEPT_SALESMANAGER,
    DISPLAY_COUNT_DESIGNATION,
    DISPLAY_ALL_EMP
};

EMENU menu()
{
    int choice;
    cout << "\n*******************************************";
    cout << "\n0.EXIT";
    cout << "\n1.ACCEPT SALESMAN";
    cout << "\n2.ACCEPT MANAGER";
    cout << "\n3.ACCEPT SALESMANAGER";
    cout << "\n4.DISPLAY COUNT OF DESIGNATION";
    cout << "\n5.DISPLAY ALL EMPLOYEES";
    cout << "\n\nENTER YOUR CHOICE = ";
    cin >> choice;
    cout << "\n*******************************************" << endl;
    return EMENU(choice);
}

int main()
{
    EMENU choice;

    Employee *arr[10];
    int index = 0;
    int sales_cnt = 0;
    int mgr_cnt = 0;
    int sales_mgr_cnt = 0;
    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case ACCEPT_SALESMAN:
        {
            if (index < 10)
            {
                arr[index] = new Salesman();
                arr[index]->accept();
                index++;
            }
            else
                cout << "Employee limit reached already 10 Employees added.";
        }
        break;
        case ACCEPT_MANAGER:
        {
            if (index < 10)
            {
                arr[index] = new Manager();
                arr[index]->accept();
                index++;
            }
            else
                cout << "Employee limit reached already 10 Employees added.";
        }
        break;
        case ACCEPT_SALESMANAGER:
        {
            if (index < 10)
            {
                arr[index] = new Sales_manager();
                arr[index]->accept();
                index++;
            }
            else
                cout << "Employee limit reached already 10 Employees added.";
        }
        break;
        case DISPLAY_COUNT_DESIGNATION:
        {
            for (int i = 0; i < index; i++)
            {
                if (arr[i]->getDesignation() == "Salesman")
                    sales_cnt++;
                if (arr[i]->getDesignation() == "Manager")
                    mgr_cnt++;
                if (arr[i]->getDesignation() == "Salesmanager")
                    sales_mgr_cnt++;
            }
            cout << "Designation : Salesman\t\t Count : " << sales_cnt << endl;
            cout << "Designation : Manager\t\t Count : " << mgr_cnt << endl;
            cout << "Designation : Salesmanager\t Count : " << sales_mgr_cnt << endl;
        }
        break;
        case DISPLAY_ALL_EMP:
        {
            for (int i = 0; i < index; i++)
                arr[i]->display();
        }
        break;
        default:
            cout << "Wrong choice." << endl;
            break;
        }
    }
    for (int i = 0; i < index; i++)
        delete arr[i];
    cout << "Thank you for using our app..." << endl;
    return 0;
}