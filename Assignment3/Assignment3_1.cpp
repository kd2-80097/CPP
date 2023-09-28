/*Q1. Write a menu driven program 
to calculate volume of the box(length * width * height).
Provide necessary constructors.*/

#include<iostream>

using namespace std;
class Volume
{
  private : 

  double length;
  double width;
  double height;
  
  public:

  Volume()
  {
    this->length=0;
    this->width=0;
    this->height=0;
  }

  void acceptDimensions()
  {
    cout<<"Enter the Length : ";
    cin>>length;
    cout<<"Enter the Width : ";
    cin>>width;
    cout<<"Enter the Height : ";
    cin>>height;
  }

  void displayDimensions()
  {
      cout<<"Length = "<<length<<endl;
      cout<<"Width = "<<width<<endl;
      cout<<"Height = "<<height<<endl;
  }

  void displayVolume()
  {
    cout<<"Volume of the box is : "<<length*width*height<<endl;
  }

};

  int menu()
  {
    int choice;
    cout<<"=*=*=*=*=*=*=*=*=*=*=*=*=*=*"<<endl;
    cout<<"0. EXIT"<<endl;
    cout<<"1. Show Default Values"<<endl;
    cout<<"2. Accept Dimensions"<<endl;
    cout<<"3. Show Entered Dimensions"<<endl;
    cout<<"4. Show Volume"<<endl;
    cin>>choice;
    cout<<"=*=*=*=*=*=*=*=*=*=*=*=*=*=*"<<endl;
    return choice;
    
  }
int main()
{
   Volume v;
   int choice;

   while((choice = menu()) != 0)
   {
    switch(choice)
    {
      

      case 1 :
              v.displayDimensions();
              break;

      case 2 :
              v.acceptDimensions();
              break;

      case 3 :
              v.displayDimensions();
              break;

      case 4 :
              v.displayVolume();
              break;

      default : 
              cout<<"Entered The Wrong Choice"<<endl;                                           

    }
   }
   cout<<"Thank You For Using Our Application"<<endl;
   return 0;
}