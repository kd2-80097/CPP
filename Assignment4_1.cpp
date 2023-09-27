/*Q1. Write a class for Time and provide the functionality
Time()
Time(int h,int m,int s)
getHour()
getMinute()
getSeconds()
printTime()
setHour()
setMinute()
setSeconds()
In main create array of objects of Time.
Allocate the memory for the array and the object dynamically.*/

#include<iostream>

using namespace std;

class Time
{
 private :
         int h;
         int m;
         int s;

 public :

    Time()
    {
       this->h = 0;
       this->m = 0;
       this->s = 0;
    }         

    Time(int hr,int min,int sec)
    {
        this->h = hr;
        this->m = min;
        this->s = sec;
    }   

    
    int getHour()
    {
        return this->h;
    }

    void setHour(int hr)
    {
        this->h= hr;
    }

    int getMinute()
    {
        return this->m;
    }

    void setMinute(int min)
    {
        this->m = min;
    }

    int getSeconds()
    {
       return this->s;
    }

    void setSeconds(int sec)
    {
        this->s = sec;
    }

    void acceptTime()
    {
        cout<<"Hr = "<<endl;
        cin>>this->h;
        cout<<"Min = "<<endl;
        cin>>this->m;
        cout<<"Sec = "<<endl;
        cin>>this->s;
    }

    void printTime()
    {
        cout<<"=*=*=*=*=*=*=*=*=*=*=*"<<endl;
        cout<<h<<" : "<<m<<" : "<<s<<endl;
        cout<<"=*=*=*=*=*=*=*=*=*=*=*"<<endl;
    }
};


int main()
{
  Time t;
  t.printTime();
  Time e(17,55,30);
  e.printTime();
  cout<<"Hr = "<<e.getHour()<<endl;
  e.setHour(18);
  cout<<"Hr = "<<e.getHour()<<endl;
  cout<<"Min = "<<e.getMinute()<<endl;
  e.setMinute(57);
  cout<<"Min = "<<e.getMinute()<<endl;
  cout<<"Sec = "<<e.getSeconds()<<endl;
  e.setSeconds(32);
  cout<<"Hr = "<<e.getSeconds()<<endl;
  e.printTime();
  cout<<"=*=*=*=*=*=*=*=*=*=*=*=*=*"<<endl;

  Time **arr = new Time *[3];

  for(int i=0;i<3;i++)
  arr[i]=new Time;

  for(int i=0;i<3;i++)
  arr[i]->acceptTime();

  for(int i=0;i<3;i++)
  arr[i]->printTime();

  for(int i=0;i<3;i++)
  delete arr[i];

  delete[] arr; 

  return 0;
}