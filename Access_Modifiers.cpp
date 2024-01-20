#include <iostream>
#include <conio.h>
using namespace std;
class Human // Base class
{
private:
    string name;

protected:
    int weight;

public:
    int height;
    void function(string x, int y, int z);
};
// THE ACCESSING BEHAVIOUR OF ACCESS MODIFIERS WITHIN THE CLASS:-
void Human::function(string x, int y, int z)
{
    // A private member of the class is accessed only through public member function of this class
    name = "x";
    weight = y; // We can access the protected data members with in the class.
    height = z; // We can access the public data members with in the class.
}
// class student:private Human
// {

// };
// class student: protected Human
// {

// };
// THE ACCESSING BEHAVIOUR OF ACCESS MODIFIERS WITHIN DERIVED CLASS:-
class student : public Human // Derived class
{
private:
    int roll_number;

public:
    void display();
    void initilize(int x);
};
void student::initilize(int x)
{
    roll_number = x;
}
void student::display()
{
    /* The following first line isn illegela becuse name is
    private data members of thebase class so it canot be inherited*/
    // cout << "The name of the student is" << name << endl;
    cout << "The roll number of the student is:" << roll_number << endl;
    cout << "The weight of the student is:" << weight << endl;
    cout << "The height of the student is:" << height << endl;
}
int main()
{
    Human shantanu;

    // THE ACCESSING BEHAVIOUR OF ACCESS MODIFIERS WITHIN MAIN FUNCTION:-
    /* shantanu.name="sambit";////illegal statement Because a is private member of the class,
    canot access in external code i.e within main function*/
    /*shantanu.weight = 60;////illegal statement Because b is private member of the class,
    canot access in external code i.e within main function*/
    // shantanu.height = 130; // Public data members are accessed any where
    student obj1;
    obj1.function("JAY_SHREE_RAM", 60, 130);
    obj1.initilize(24);
    obj1.display();
    getch();
    return 0;
}