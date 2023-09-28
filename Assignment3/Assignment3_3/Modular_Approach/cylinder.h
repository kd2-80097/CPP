#ifndef CYLINDER_H
#define CYLINDER_H
#include<iostream>
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
#endif