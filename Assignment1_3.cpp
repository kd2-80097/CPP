/*Q3. Write a menu driven program for Student in CPP language. Create a class student with data
members roll no, name and marks. Implement the following functions
void initStudent();
void printStudentOnConsole();
void acceptStudentFromConsole();*/

#include<iostream>
#include<string>

using namespace std;
class Student
{
 private :
   int roll_no;
   string name;
   double marks;

 public :
    void initStudent()
    {
        roll_no = 0;
        name = "";
        marks = 0;
    }

    void acceptStudentFromConsole()
    {
        cout<<"Enter the Roll Number : "<<endl;
        cin>>roll_no;
        getchar();
        cout<<"Enter the Student name : "<<endl;
        getline(cin,name);
        cout<<"Enter the Marks"<<endl;
        cin>>marks;
    }

    void printStudentOnConsole()
    {
      cout<<roll_no<<"\n"<<name<<"\n"<<marks<<endl;
    }

};

int main()
{
    Student s;
    int choice;

    do
    {
       cout<<"*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*="<<endl;
       cout<<"Enter the choice"<<endl;
       cout<<"1.Initialize"<<endl;
       cout<<"2.Accept Student Details"<<endl;
       cout<<"3.Show Student Details"<<endl;
       cout<<"4.Exit"<<endl;
       cin>>choice;
       cout<<"*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*="<<endl;
       switch(choice)
       {
         case 1 : 
                 s.initStudent();
                 s.printStudentOnConsole();
                 break;

         case 2 :
                 s.acceptStudentFromConsole();
                 break;

         case 3 :
                 s.printStudentOnConsole();
                 break;

         case 4 :
                 cout<<"Thank you for using our Application"<<endl;
                 break;

         default :
                  cout<<"Entered the Wrong Choice"<<endl;  
                  break;                              
       }
    } while (choice != 4);
    
    
    return 0;
}