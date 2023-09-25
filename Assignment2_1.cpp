/*Q1. Create a namespace NStudent. 
Create the Student class(created as per assignment-1 Q3) inside
namespace. Test the functionalities.*/

#include<iostream>
#include<string>
 using namespace std;
namespace NStudent
{
  
    class Date
{
  private :
     int Day;
     int Month;
     int Year;

  public :
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

   bool isLeapYear()
   {
    if ((Year%4 ==0 && Year%100 !=0) || Year%400==0)
    {return true;}
    return false;
   }
};
}

int main()
{
    using namespace NStudent;
    int choice;
    Date d;

    do
    {
        cout<<"=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*"<<endl;
        cout<<"Enter your choice\n"<<"1.Print default Date\n"<<"2.Accept the Date\n"<<"3.Print the Date\n"<<"4.Check for Leap Year \n"<<"5.Exit"<<endl;
        cin>>choice;
        cout<<"=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*"<<endl;
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

         case 4 : if(d.isLeapYear())
                {
                    cout<<"Year is a Leap Year"<<endl;
                }
                else
                {
                    cout<<"Year is NOT a Leap Year"<<endl;
                }
              break;

         case 5 : 
                  cout<<"Thank you for using our Application"<<endl;
                  break;     

         default :
                   cout<<"Entered a wrong choice"<<endl;        
       }      
        
    } while (choice != 5);
    

    return 0;
}