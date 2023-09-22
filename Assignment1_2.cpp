/*Q2. Write a menu driven program for Date in a CPP language using structure and also using class.
Date is having data members day, month, year. Implement the following functions.
void initDate();
void printDateOnConsole();
void acceptDateFromConsole();
bool isLeapYear();*/

#include <iostream>

using namespace std;
struct Date{
 
     int Day;
     int Month;
     int Year;


void initDate()
{
    Day=0;
    Month=0;
    Year=0;
}

void acceptDateFromConsole()
{ 
    cout<<"Enter the Day"<<endl;
    cin >>Day;
    cout<<"Enter the Month"<<endl;
    cin>>Month;
    cout<<"Enter the Year"<<endl;
    cin>>Year;
}

void printDateOnConsole()
{
    cout<<Day<<"-"<<Month<<"-"<<Year<<endl;
}
};
int main()
{
    int choice;
    struct Date d;

    do
    {
        cout<<"Enter your choice\n"<<"1.Print default Date\n"<<"2.Accept the Date\n"<<"3.Print the Date\n"<<"4. Exit\n";
        cin>>choice;
        switch(choice)
       { 
        case 1 :
                 d.initDate();
                 d.printDateOnConsole();
                 break;

        case 2 : 
                 d.acceptDateFromConsole();
                 break;

        case 3 : 
                 d.printDateOnConsole();
                 break;

        case 4 : cout<<"\n";
              break;
       }      
    } while (choice != 4);
    
   return 0;
}