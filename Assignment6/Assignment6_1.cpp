/* Q1. Implement following classes. Test all functionalities in main().Insted of char[] use string
datatype Employee<-Date<-Person */

#include <iostream>
using namespace std;

class Date
{
private:
       int day;
       int month;
       int year;

public:
       Date()
       {
              this->day = 0;
              this->month = 0;
              this->year = 0;
       }
       Date(int day, int month, int year) : day(day), month(month), year(year)
       {
       }

       int getDay()
       {
              return this->day;
       }

       void setDay(int day)
       {
              this->day = day;
       }

       int getMonth()
       {
              return this->month;
       }

       void setMonth(int month)
       {
              this->month = month;
       }

       int getYear()
       {
              return this->year;
       }

       void setYear(int year)
       {
              this->year = year;
       }

       void acceptDate()
       {
              cout << "Enter the day = ";
              cin >> this->day;
              cout << "Enter the month = ";
              cin >> this->month;
              cout << "Enter the year = ";
              cin >> this->year;
       }

       void displayDate()
       {
              cout << "Date is " << this->day << "/" << this->month << "/" << this->year << endl;
       }

       bool isLeapYear()
       {
              if (this->year % 4 == 0 && this->year % 100 != 0 || this->year % 400 == 0)
              {
                     return true;
              }
              return false;
       }
};

class Person
{
private:
       string name;
       string addr;
       Date birth_date;

public:
       Person()
       {
              this->name = " ";
              this->addr = " ";
       }
       Person(string name, string addr, int d, int m, int y) : birth_date(d, m, y)
       {
              this->name = name;
              this->addr = addr;
       }
       string getName()
       {
              return this->name;
       }
       void setName(string name)
       {
              this->name = name;
       }
       string getAddr()
       {
              return this->addr;
       }
       void setAddr(string addr)
       {
              this->addr = addr;
       }

       Date getBirthDate()
       {
              return this->birth_date;
       }

       void setBirthDate(Date b)
       {
              this->birth_date = b;
       }

       void acceptPerson()
       {
            //  cin.ignore();
              cout << "Enter the Name :";
              getline(cin, this->name);
              cout << "Enter the Address :";
              getline(cin, this->addr);
              cout << "Enter the Birth Date : " << endl;
              birth_date.acceptDate();
       }

       void displayPerson()
       {
              cout << "==========================" << endl;
              cout << "$----- Persons Details Are As Follows -----$" << endl;
              cout << "Name : " << this->name << endl;
              cout << "Address : " << this->addr << endl;
              cout << "DOB : ";
              birth_date.displayDate();
              cout << "==========================" << endl;
       }
};

class Employee
{
private:
       int id;
       double sal;
       string dept;
       Date joining;

public:
       Employee()
       {
              this->id = 0;
              this->sal = 0000.00;
              this->dept = "--";
       }
       Employee(int id, double sal, string dept, int d, int m, int y) : joining(d, m, y)
       {
              this->id = id;
              this->sal = sal;
              this->dept = dept;
       }
       int getID()
       {
              return this->id;
       }
       void setID(int id)
       {
              this->id = id;
       }
       double getSAL()
       {
              return this->sal;
       }
       void setSAL(double sal)
       {
              this->sal = sal;
       }
       string getDEPT()
       {
              return this->dept;
       }
       void setDEPT(string dept)
       {
              this->dept = dept;
       }
       Date getJoining()
       {
              return this->joining;
       }
       void setJoining(Date j)
       {
              this->joining = j;
       }
       void acceptEmployee()
       {
             // cin.ignore();
              cout << "Enter the Employee ID : ";
              cin >> id;
              cout << "Enter the Salary = ";
              cin >> sal;
              cout << "Enter the Department : ";
              cin >> dept;
              cout << "Enter the Joining Date" << endl;
              joining.acceptDate();
       }

       void displayEmployee()
       {
              cout << "==========================" << endl;
              cout << "$----- Employees Details Are As Follows -----$" << endl;
              cout << "Employee ID : " << this->id << endl;
              cout << "Employee Salary : " << this->sal << endl;
              cout << "Employee Department Name : " << this->dept << endl;
              cout << "Employee Joining Date : ";
              joining.displayDate();
              cout << "==========================" << endl;
       }
};

int main()
{
       // Employee e;
       // e.displayEmployee();
       Employee e1(1, 2000, "HR", 1, 1, 2021);
       e1.displayEmployee();
       //     Date d;
       //     d.acceptDate();
       //     e1.setJoining(d);
       //     e1.setDEPT("Sales");
       //     e1.displayEmployee();
        Person p;
       // p.displayPerson();
       // Person p1("Chetan Arote", "Karad, DIst. Satara", 5, 11, 1995);
       // p.displayPerson();
       p.acceptPerson();
       p.displayPerson();
       //  cout<<p1.getAddr()<<endl;
       // p1.setAddr("Karad Bus Stand, Satara");

       //  d.displayDate();
       //   p.setBirthDate(d);
       // p1.setBirthDate(d);
       //  cout<<p1.getAddr()<<endl;
       // p.displayPerson();
       // Date d1(5, 11, 2020);
       // d1.displayDate();
       // if (d1.isLeapYear() == true)
       // {
       //        cout << "Year is a Leap Year" << endl;
       // }
       // else
       //        cout << "Not a Leap Year" << endl;

       // return 0;
}