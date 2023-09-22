/*Q1. Write a menu driven program for Date in a C. Declare a structure Date having data members
day, month, year. Implement the following functions.
void initDate(struct Date* ptrDate);
void printDateOnConsole(struct Date* ptrDate);
void acceptDateFromConsole(struct Date* ptrDate);*/


#include<stdio.h>
#include<stdlib.h>

struct Date{
 
     int Day;
     int Month;
     int Year;

};

void initDate(struct Date *ptrDate)
{
    ptrDate->Day=0;
    ptrDate->Month=0;
    ptrDate->Year=0;
}

void acceptDateFromConsole(struct Date *ptrDate)
{ 
    printf("Enter the Day \n");
    scanf("%d",&ptrDate->Day);
    printf("Enter the Month \n");
    scanf("%d",&ptrDate->Month);
    printf("Enter the Year \n");
    scanf("%d",&ptrDate->Year);
}

void printDateOnConsole(struct Date *ptrDate)
{
    printf("Date is %d-%d-%d \n",ptrDate->Day,ptrDate->Month,ptrDate->Year );
}

int main()
{
    int choice;
    struct Date d;

    do
    {
        printf ("Enter your choice\n1.Print default Date\n2.Accept the Date\n3.Print the Date\n4. Exit\n ");
        scanf("%d",&choice);
        switch(choice)
       { 
        case 1 :
                 initDate(&d);
                 printDateOnConsole(&d);
                 break;

        case 2 : 
                 acceptDateFromConsole(&d);
                 break;

        case 3 : 
                 printDateOnConsole(&d);
                 break;

        case 4 : printf("\n");
              break;
       }      
    } while (choice != 4);
    
   return 0;
}