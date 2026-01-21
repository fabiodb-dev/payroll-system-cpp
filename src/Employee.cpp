#include "Employee.h"

void Employee::addHours(double h){
            if (h > 0)
                hoursWorked += h;
        }

double Employee::calculateGrossSalary() const{
    return hoursWorked * hourlyRate;
}

double Employee::calculateNetSalary() const{
    double netFactor = 1 - taxRate;
    return (calculateGrossSalary() * netFactor);
}
