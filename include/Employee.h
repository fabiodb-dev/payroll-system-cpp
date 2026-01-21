#include <string>

using namespace std;

class Employee{
    private:
        int id;
        string name, surname, role;
        double hourlyRate, hoursWorked, taxRate;

    public:
        Employee(int i, const string n, const string s, const string r, double rate, double tax){
            id = i;
            name = n;
            surname = s;
            role = r;
            hourlyRate = rate;
            hoursWorked = 0.0;
            taxRate = tax;
        }
        void addHours(double h);

        double calculateGrossSalary() const;

        double calculateNetSalary() const;
};

