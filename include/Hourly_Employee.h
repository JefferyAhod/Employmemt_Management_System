#ifndef HOURLY_EMPLOYEE_H
#define HOURLY_EMPLOYEE_H
#include <string>
#include <Employee.h>
using namespace std;


class Hourly_Employee : public Employee
{
    public:
        Hourly_Employee();
         void Display();
        void Salary();


    protected:
        string Employee_Name;
        int Employee_Number;
        float Employee_Salary;
        float Hourly_Salary;
        float Number_Hours;


    private:
};

#endif // HOURLY_EMPLOYEE_H
