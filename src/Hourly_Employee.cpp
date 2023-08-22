#include "Hourly_Employee.h"
#include <iostream>
using namespace std;

Hourly_Employee::Hourly_Employee()
{
    //ctor
}
void Hourly_Employee::Display(){
 cout<<"Enter name of employee"<<endl;
 cin>>Employee_Name;

 cout<<"Enter number of employee"<<endl;
 cin>>Employee_Number;

 cout<<"Enter Salary"<<endl;
 cin>>Employee_Salary;

 cout<<"Enter number of hours worked"<<endl;
 cin>>Number_Hours;


 cout<<"\n Name:"<<Employee_Name;
 cout<<"\n Number:"<<Employee_Number;
 cout<<"\n Hours:"<<Number_Hours;
}
void Hourly_Employee::Salary(){
    Hourly_Salary=Number_Hours*Employee_Salary;
    cout<<"Your new salary is"<<Hourly_Salary;

}
