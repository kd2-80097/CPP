#include "./cylinder.h"

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