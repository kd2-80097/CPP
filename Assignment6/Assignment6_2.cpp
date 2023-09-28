#include <iostream>

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
};

class manager: 
{
private:
    float bonus;

public:
    manager()
    {
        this->bonus = 0.0;
    }

    manager(float bonus)
    {
        this->bonus = bonus;
    }
};

class salesman
{
private:
    float comm;

public:
    salesman()
    {
        this->comm = 0.0;
    }

    salesman(float comm)
    {
        this->comm = comm;
    }
};

class sales_manager
{
public:
};