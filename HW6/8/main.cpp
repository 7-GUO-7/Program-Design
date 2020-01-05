#include <iostream>
#include "employee.h"
using namespace std;
int main()
{
    salaried_employee person1("John",111111111,80,10);
    person1.output();
    hourly_employee person2("Tom",222222222,50,16);
    person2.output();
    commission_employee person3("Sue",333333333,10000,0.06);
    person3.output();
    base_salary_employee person4("Bob",444444444,5000,0.04,300);
    person4.output();
    return 1;
}
