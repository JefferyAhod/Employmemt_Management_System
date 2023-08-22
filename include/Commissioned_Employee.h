#ifndef COMMISSIONED_EMPLOYEE_H
#define COMMISSIONED_EMPLOYEE_H

#include <Employee.h>
#include <string>
using namespace std;


class Commissioned_Employee : public Employee
{
    public:
        Commissioned_Employee();
        void Display();
        void Salary();

    protected:
        string Employee_Name;
        int Employee_Number;
        float Employee_Salary;
        float Rate;
        float Commissioned_Salary;

    private:
};

#endif // COMMISSIONED_EMPLOYEE_H
