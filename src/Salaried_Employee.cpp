#include "Salaried_Employee.h"
#include <string>
using namespace std;
#include <iostream>

Salaried_Employee::Salaried_Employee()
{
    //ctor
}
 void Salaried_Employee::Display(){
 cout<<"Enter name of employee"<<endl;
 cin>>Employee_Name;

 cout<<"Enter number of employee"<<endl;
 cin>>Employee_Number;

 cout<<"Enter Salary"<<endl;
 cin>>Employee_Salary;

 cout<<"\n Name:"<<Employee_Name;
 cout<<"\n Number:"<<Employee_Number;

 }

 void Salaried_Employee::Salary(){
     cout<<"\n Salary:"<<Employee_Salary;

 }
