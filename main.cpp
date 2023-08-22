#include <iostream>
using namespace std;
#include "Salaried_Employee.h"
#include <Employee.h>
#include "Hourly_Employee.h"
#include "Commissioned_Employee.h"


int main()
{
    int choice;
    Employee *emp[3]{};

    Salaried_Employee se;
    Hourly_Employee he;
    Commissioned_Employee ce;
do{

    cout<<"1.Salaried Employee"<<endl;
    cout<<"2.Hourly Employee"<<endl;
    cout<<"3.Commissioned Employee"<<endl;
    cout<<"4.Exit"<<endl;
    cout << "Enter your choice: ";
    cin>> choice;

    switch(choice){
        case 1:
            emp[0]=&se;
            emp[0]->Display();
            emp[0]->Salary();
            break;
        case 2:
            emp[1]=&he;
            emp[1]->Display();
            emp[1]->Salary();
            break;
        case 3:
            emp[2]=&ce;
            emp[2]->Display();
            emp[2]->Salary();
            break;
        case 4:
            break;

    }

  }while(choice!=4);

}

//Ahodokpo Jeffery Worlali
//SRI.41.008.015.21
//Computer Science and Engineering
