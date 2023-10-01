#include <iostream>
using namespace std;

class employee
{
private:
    int id;
    float sal;

public:
    employee()
    {
        this->id = 0;
        this->sal = 0.0;
    }

    employee(int id, float sal)
    {
        this->id = id;
        this->sal = sal;
    }

    int get_id()
    {
        return this->id;
    }

    void set_id(int id)
    {
        this->id = id;
    }

    float get_sal()
    {
        return this->sal;
    }

    void set_sal(float sal)
    {
        this->sal = sal;
    }

    void acceptEmployee()
    {
        cout << "Enter the Employee ID = ";
        cin >> this->id;
        cout << "Enter the Employee Salary = ";
        cin >> this->sal;
    }

    void displayEmployee()
    {
        cout << "---------------------" << endl;
        cout << "Employee ID : " << this->id << endl;
        cout << "Employee Salary : " << this->sal << endl;
    }
};

class manager : virtual public employee
{
private:
    float bonus;

protected:
    void accept_manager()
    {
        employee ::acceptEmployee();
        acceptBonus();
    }

    void display_manager()
    {

        employee ::displayEmployee();
        displayBonus();
        cout << "---------------------" << endl;
    }

    void acceptBonus()
    {
        cout << "Enter the Bonus Amount = ";
        cin >> this->bonus;
    }

    void displayBonus()
    {
        cout << "Bonus Amount = " << this->bonus << endl;
    }

public:
    manager()
    {
        this->bonus = 0.0;
    }

    manager(int id, float sal, float bonus) : employee(id, sal)
    {
        this->bonus = bonus;
    }

    float get_bonus()
    {
        return this->bonus;
    }

    void set_bonus(float bonus)
    {
        this->bonus = bonus;
    }
};

class salesman : virtual public employee
{
private:
    float comm;

protected:
    void accept_salesman()
    {
        employee ::acceptEmployee();
        acceptComm();
    }

    void display_salesman()
    {

        employee ::displayEmployee();
        displayComm();
        cout << "---------------------" << endl;
    }

    void acceptComm()
    {
        cout << "Enter the Commission Amount = ";
        cin >> this->comm;
    }

    void displayComm()
    {
        cout << "Commission Amount = " << this->comm << endl;
    }

public:
    salesman()
    {
        this->comm = 0.0;
    }

    salesman(int id, float sal, float comm) : employee(id, sal)
    {
        this->comm = comm;
    }

    float get_comm()
    {
        return this->comm;
    }

    void set_comm(float comm)
    {
        this->comm = comm;
    }
};

class sales_manager : public manager, public salesman
{
public:
    sales_manager()
    {
    }
    sales_manager(int id, float sal, float bonus, float comm) : manager(id, sal, bonus), salesman(id, sal, comm), employee(id, sal)
    {
    }

    void accept_sales_manager()
    {
        cout << "---------------------" << endl;
        employee ::acceptEmployee();
        manager ::acceptBonus();
        salesman ::acceptComm();
    }

    void display_sales_manager()
    {
        employee ::displayEmployee();
        manager ::displayBonus();
        salesman ::displayComm();
        cout << "---------------------" << endl;
    }
};

int main()
{
    // employee e;
    // e.acceptEmployee();
    // e.displayEmployee();
    // employee e1(11,3000);
    // e1.displayEmployee();

    // manager m(1,2000,500);
    // m.display_manager();
    // return 0;

    // salesman s;
    // s.accept_salesman();
    // s.display_salesman();
    // cout<<"Employee ID = "<<s.get_id()<<endl;
    // s.set_comm(600.0);
    // s.display_salesman();

    sales_manager sam1(33, 30000, 3000, 300);
    sam1.display_sales_manager();
    sales_manager sm;
    sm.accept_sales_manager();
    sm.display_sales_manager();
    
}