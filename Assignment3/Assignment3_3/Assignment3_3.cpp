/* Q3. Write a class to find volume of a Cylinder by using following members. (volume of
Cylinder=3.14 * radius * radius *height) (write a menu driven code for it and also use modular
approach)
Class having following member functions:
Cylinder()
Cylinder(double radius, double height)
getRadius()
setRadius()
getHeight()
setHeight()
getVolume()
printVolume()
Initialize members using constructor member initializer list.*/

#include <iostream>

using namespace std;

class Cylinder
{
private:
  double radius;
  double height;
  double volume;

public:
  Cylinder();
  Cylinder(double radius, double height);
  void acceptDimensions();
  void printVolume();
  void displayDefaultValues();
  void displayGivenDimensions();
  double getRadius();
  void setRadius();
  double getHeight();
  void setHeight();
  double getVolume();
};

enum Emenu
{
  EXIT,
  DEFAULT_VALUES,
  ACCEPT_VALUES,
  SHOW_GIVEN_VALUES,
  VOLUME_OF_CYLINDER,
  CHANGE_RADIUS,
  SHOW_RADIUS,
  CHANGE_HEIGHT,
  SHOW_HEIGHT

};

Emenu menu();

int main()
{
  Cylinder c;
  Emenu choice;
  while ((choice = menu()) != EXIT)
  {
    switch (choice)
    {
    case EXIT:
      cout << "Thank You" << endl;
      break;

    case DEFAULT_VALUES:
      c.displayDefaultValues();
      break;

    case ACCEPT_VALUES:
      c.acceptDimensions();
      break;

    case SHOW_GIVEN_VALUES:
      c.displayGivenDimensions();
      break;

    case VOLUME_OF_CYLINDER:
      c.printVolume();
      break;

    case CHANGE_RADIUS:
      cout << "Set new Radius = ";
      c.setRadius();
      break;

    case SHOW_RADIUS:
      cout << "New radius = " << c.getRadius();
      break;

    case CHANGE_HEIGHT:
      cout << "Set new Height = " << endl;
      c.setHeight();
      break;

    case SHOW_HEIGHT:
      cout << "New Height = " << c.getHeight();
      break;

    default:
      cout << "Entered the wrong choice " << endl;
    }
  }

  return 0;
}

Cylinder::Cylinder() : radius(0), height(0)
{
}

Cylinder::Cylinder(double radius, double height) : radius(radius), height(height)
{
}

void Cylinder::acceptDimensions()
{
  cout << "Radius of Cylinder = ";
  cin >> this->radius;
  cout << "Height of Cylinder = ";
  cin >> this->height;
}

void Cylinder::printVolume()
{
  this->volume = 3.14 * radius * radius * height;
  cout << "=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=" << endl;
  cout << "Volume of Cylinder = " << volume << endl;
  cout << "=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=" << endl;
}

void Cylinder::displayDefaultValues()
{
  cout << "Radius = " << this->radius << endl;
  cout << "Height = " << this->height << endl;
}

void Cylinder::displayGivenDimensions()
{
  cout << "Radius = " << this->radius << endl;
  cout << "Height = " << this->height << endl;
}

double Cylinder::getRadius()
{
  return this->radius;
}

void Cylinder::setRadius()
{
  cin >> this->radius;
  this->radius = radius;
}

double Cylinder::getHeight()
{
  return this->height;
}

void Cylinder::setHeight()
{
  cin >> this->height;
  this->height = height;
}

double Cylinder::getVolume()
{
  cout << "Volume of Cylinder is = ";
  return this->volume = 3.14 * radius * radius * height;
}

Emenu menu()
{
  int choice;
  cout << endl;
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
