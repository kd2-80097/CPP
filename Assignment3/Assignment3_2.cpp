/*Q.2 Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a fifty-cent toll.
Mostly they do, but sometimes a car goes by without paying.
The tollbooth keeps track of the number of cars that have gone by and of the total amount of money
collected. Model this tollbooth with a class called tollbooth.
The two data items are a type unsigned int to hold the total number of cars, and a type double to
hold the total amount of money collected.
A constructor initializes all data members to 0. A member function called payingCar() increments
the car total and adds 0.50 to the cash total. An other function, called nopayCar()
increments the car total but adds nothing to the cash total. Finally, a member function called
printOnConsole() displays the two totals and number of paying as well as non paying cars total.
( write a menu driven code for it)*/

#include <iostream>

using namespace std;
class Tollbooth
{
private:
   int total_cars;
   double total_money;

public:
   Tollbooth()
   {
      this->total_cars = 0;
      this->total_money = 0;
   }

   void payingCars()
   {
      total_cars++;
      total_money += 0.50;
   }

   void noPayCar()
   {
      total_cars++;
   }

   void printOnConsole()
   {
      int payingcars = total_money / 0.5;
      cout << "------------------------------------------" << endl;
      cout << "Total cars passed = " << total_cars << endl;
      cout << "Total Money Collected = " << total_money << endl;
      cout << "No. of paying Cars = " << payingcars << endl;
      cout << "No. of Non-Paying Cars = " << total_cars - payingcars << endl;
      cout << "------------------------------------------" << endl;
   }
};

int menu()
{
   int choice;
   cout << "********************************" << endl;
   cout << "Please Enter the Option From Tollbooth Menu" << endl;
   cout << "Tollbooth Menu" << endl;
   cout << "0. Exit" << endl;
   cout << "1. Car paid the toll" << endl;
   cout << "2. Card didn't pay the toll" << endl;
   cout << "3. Show Detailed Information" << endl;
   cin >> choice;
   cout << "********************************" << endl;
   return choice;
}

int main()
{
   Tollbooth t;
   int choice;

   while ((choice = menu()) != 0)
   {
      switch (choice)
      {
      case 0:
         cout << "Thank You" << endl;
         break;

      case 1:
         cout << "Car Paid the Toll RS 0.50" << endl;
         t.payingCars();
         break;

      case 2:
         cout << "Car Did not Pay the Toll" << endl;
         t.noPayCar();
         break;

      case 3:
         cout << "Tollbooth Status" << endl;
         t.printOnConsole();
         break;

      default:
         cout << "Entered the Wrong Choice" << endl;
      }
   }
   return 0;
}