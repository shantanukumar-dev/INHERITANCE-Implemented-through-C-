#include <iostream>
#include <conio.h>
using namespace std;
class person
{
protected:
    string name;
    int age;

public:
    void introduce()
    {
        cout << "Name of the Manager is:" << name << endl;
        cout << "Age of the Manager is:" << age << endl;
    }
};
class Employee : public person
{
protected:
    string EmployeeID;
    int salary;

public:
    void income()
    {
        cout << "Given Employee-ID is:" << EmployeeID << endl;
        cout << "Salary of ths particular month is:" << salary << endl;
    }
};
class manager : public Employee
{
protected:
    string department;

public:
    manager(string name, int age, string EmployeeID, int salary, string department)
    {
        this->name = name;
        this->age = age;
        this->EmployeeID=EmployeeID;
        this->salary = salary;
        this->department = department;
    }
    void showcase()
    {
        introduce();
        income();
        cout << "Respective Department is:" << department << endl;
    }
};
int main()
{
    manager A1("Shantanu", 22, "CSE-24", 100, "CSE");
    A1.showcase();
    getch();
    return 0;
}