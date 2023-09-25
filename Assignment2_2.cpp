/*Q2. Write a class Address. 
Implement constructors, getters, setters, accept() 
and display() methods.*/

#include<iostream>
#include<string>
using namespace std;

class Address
{
  private :
    string building;
    string street;
    string city;
    int  pin;

  public :

    void acceptAddress()
    {
        cout<<"* Enter the Building name "<<endl;
        getline(cin,building);
        cout<<"* Enter the Street name "<<endl;      
        getline(cin,street);
        cout<<"* Enter the City name "<<endl;       
        getline(cin,city);
        cout<<"* Enter the Pin "<<endl;
        cin>>pin;

    }  


    void displayAddress()
    { 
        cout<<"*=*=*=*=*=*=*=*=*=*=*"<<endl;
        cout<<"Address is : "<<endl;
        cout<<building<<endl;
        cout<<street<<endl;
        cout<<city<<endl;
        cout<<pin<<endl;
        cout<<"*=*=*=*=*=*=*=*=*=*=*"<<endl;
    }

    Address()
    {
        this->building ="---";
        this->street = "---";
        this->city = "---";
        this->pin = 000000;
    }

    Address(string bu,string st,string ci,int pi)
    {
        this->building=bu;
        this->street=st;
        this->city=ci;
        this->pin=pi;
    }

    string getBuilding()
    {
        return this->building;   
    }

    void setBuilding(string bui)
    {   
        this->building=bui;
    }

    string getSreet()
    {
        return this->street;   
    }

    void setStreet(string str)
    {
        this->street=str;
    }

    string getCity()
    {
        return this->city;   
    }

    void setCity(string cit)
    {
        this->city=cit;
    }

    int getPin()
    {
        return this->pin;   
    }

    void setPin(int pinn)
    {
        this->pin=pinn;
    }



};

int main()
{
    Address a;
    a.displayAddress();
    cout<<"=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*"<<endl;  
    Address b("White Villa","Nagar Road","Haveli",411014);
    b.displayAddress();
    cout<<"=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*"<<endl;    
    cout<<"Building name : "<<b.getBuilding()<<endl;
    b.setBuilding("Shanti Bhawan");
    cout<<"Building name : "<<b.getBuilding()<<endl;
    cout<<"=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*"<<endl;      
    cout<<"Street name : "<<b.getSreet()<<endl;
    b.setStreet("Pune Road");
    cout<<"Street name : "<<b.getSreet()<<endl;
    cout<<"=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*"<<endl;  
    cout<<"City name : "<<b.getCity()<<endl;
    b.setCity("Ahilyanagar");
    cout<<"City name : "<<b.getCity()<<endl;
    cout<<"=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*"<<endl;   
    cout<<"Pincode : "<<b.getBuilding()<<endl;
    b.setPin(422610);
    cout<<"Pincode : "<<b.getPin()<<endl;
    cout<<"=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*";
    b.displayAddress();
    cout<<"=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*"<<endl;  
    return 0;

}