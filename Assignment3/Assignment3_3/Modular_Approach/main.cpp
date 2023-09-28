#include "./cylinder.h"
#include"./menu.h"

int main()
{
  Cylinder c;
  Emenu choice;
  while ((choice =menu()) != EXIT)
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
      cout << "Set new Height = "<<endl;
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