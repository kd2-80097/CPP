#include "./menu.h"
#include<iostream>
using namespace std;

Emenu menu()
{
  int choice;
  cout<<endl;
  cout << "=*=*=*=*=*=*=*=*=*=*=*=*=*=*" << endl;
  cout << "0. EXIT " << endl;
  cout << "1. Show Default Values" << endl;
  cout << "2. Accept Dimensions Values" << endl;
  cout << "3. Show Given Dimensions" << endl;
  cout << "4. Print Volume of Cylinder" << endl;
  cout << "5. Set New Radius " << endl;
  cout << "6. Show Radius" << endl;
  cout << "7. Set new Height" << endl;
  cout << "8. Show Height" << endl;
  cin >> choice;
  cout << "=*=*=*=*=*=*=*=*=*=*=*=*=*=*" << endl;
  return Emenu(choice);
}
