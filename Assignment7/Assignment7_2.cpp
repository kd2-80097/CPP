/*Q2. A shop sells book or tapes. The Book class holds id, title, author, and price;
whereas Tape class holds id, title, artist, and price.
There is 5% discount on tapes, while 10% discount on books.
Assuming that each user purchase 3 products (either book or tape), calculate final bill.
The program should be menu driven and should not cause memory leakage.*/

#include <iostream>
using namespace std;

class Product
{
protected:
    int id;
    string title;
    double price;

public:
    Product()
    {
        this->id = 0;
        this->title = "";
        this->price = 0;
    }
    Product(int id, string title, double price) : id(id), title(title), price(price)
    {
    }

    virtual void addProduct()
    {
        cout << "Enter Product id : ";
        cin >> this->id;
        cout << "Enter Product title : ";
        cin >> this->title;
        cout << "Enter Product price : ";
        cin >> this->price;
    }

    virtual double calcDiscount() = 0;

    double calcFinalPrice()
    {
        return price - calcDiscount();
    }
};

class Book : public Product
{
private:
    string author;

public:
    Book()
    {
        this->author = "";
    }
    Book(int id, string title, string author, double price) : Product(id, title, price)
    {
        this->author = author;
    }
    void addProduct()
    {
        cout << "Enter Book Details " << endl;
        Product::addProduct();
        cout << "Enter Book Author : ";
        cin >> this->author;
    }

    double calcDiscount()
    {
        return 0.10 * price; // 10% off on Books
    }
};

class Tape : public Product
{
private:
    string artist;

public:
    Tape()
    {
    }
    Tape(int id, string title, string artist, double price) : Product(id, title, price)
    {
        this->artist = artist;
    }
    void addProduct()
    {
        cout << "Enter Tape Details : ";
        Product::addProduct();
        cout << "Enter Tape artist : ";
        cin >> this->artist;
    }

    double calcDiscount()
    {
        return 0.05 * price; // 5% off on Tapes
    }
};

int menu()
{
    int choice;
    cout << "--------------------" << endl;
    cout << "0. Exit" << endl;
    cout << "1. Add Book" << endl;
    cout << "2. Add Tape" << endl;
    cout << "Enter Your Chocie = ";
    cin >> choice;
    cout << "--------------------" << endl;
    return choice;
}

int main()
{
    int choice;
    double totalBill = 0.0;
    int index = 0;
    Product *arr[3]; // To store Max 3 products

    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:
            if (index < 3)
            {
                arr[index] = new Book();
                arr[index]->addProduct();
                arr[index]->calcDiscount(); //  calls book class function( overridden )
                arr[index]->calcFinalPrice();
                index++;
            }
            else
            {
                cout << "Product limit reached already 3 products added.";
            }
            break;
        case 2:
            if (index < 3)
            {
                arr[index] = new Tape();
                arr[index]->addProduct();
                arr[index]->calcDiscount(); //  calls tape class function( overridden )
                arr[index]->calcFinalPrice();
                index++;
            }
            else
            {
                cout << "Product limit reached.....Max 3 products allowed to buy at a time ";
            }
            break;
        case 3:
         // Calculate and display the final bill
            for (int i = 0; i < 3; i++)
            {
                totalBill += arr[i]->calcFinalPrice();
            }
            cout << "Total Bill : " << totalBill << endl;
            break;
        default:
            cout << "Wrong Choice ..." << endl;
            break;
        }
    }

    // Deallocating Memory
    for (int i = 0; i < 3; i++)
    {
        delete arr[i];
    }
    return 0;
}