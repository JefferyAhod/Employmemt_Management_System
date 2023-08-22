#ifndef SALARIED_EMPLOYEE_H
#define SALARIED_EMPLOYEE_H

#include <Employee.h>
#include <string>
using namespace std;


class Salaried_Employee : public Employee
{
    public:
        Salaried_Employee();
        void Display();
        void Salary();

    protected:
        string Employee_Name;
        int Employee_Number;
        float Employee_Salary;


    private:
};

#endif // SALARIED_EMPLOYEE_H
