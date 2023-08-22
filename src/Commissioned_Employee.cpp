#include "Commissioned_Employee.h"
#include <iostream>
using namespace std;

Commissioned_Employee::Commissioned_Employee()
{
    //ctor
}
 void Commissioned_Employee::Display(){
 cout<<"Enter name of employee"<<endl;
 cin>>Employee_Name;

 cout<<"Enter number of employee"<<endl;
 cin>>Employee_Number;

 cout<<"Enter Salary"<<endl;
 cin>>Employee_Salary;

 cout<<"Enter the rate"<<endl;
 cin>>Rate;

 cout<<"Name:"<<Employee_Name;
 cout<<"Number:"<<Employee_Number;
 cout<<"Salary:"<<Employee_Salary;
 cout<<"Rate:"<<Rate;

 }
void Commissioned_Employee::Salary(){
Commissioned_Salary = Rate *Employee_Salary;
cout<<"Your salary is:"<<Commissioned_Salary<<endl;

}
