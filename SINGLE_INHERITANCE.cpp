#include <iostream>
#include <conio.h>
using namespace std;
class Human
{
protected:
    string name;
    int age;

public:
    void introduce()
    {
        cout << "Hello human" << endl;
    }
};
class student : public Human
{
private:
    int roll_number;
    int fees;

public:
    student(string name, int age, int roll_number, int fees)
    {
        this->name = name;
        this->age = age;
        this->roll_number = roll_number;
        this->fees = fees;
    }
    void display()
    {
        cout << "The name of the student is:" << name << endl;
        cout << "The age of the student is:" << age << endl;
        cout << "The Roll-number of the student is:" << roll_number << endl;
        cout << "Fees of one year is:" << fees << endl;
    }
};
int main()
{
    student obj1("Shantanu", 22, 24, 26000);
    obj1.display();
    getch();
    return 0;
}