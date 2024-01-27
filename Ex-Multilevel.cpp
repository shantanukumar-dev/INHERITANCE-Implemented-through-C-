#include <iostream>
#include <conio.h>
using namespace std;
class A
{
protected:
    int Roll_number;

public:
    void getdata()
    {
        cout << "Enter your Roll-number:";
        cin >> Roll_number;
    }
};
class B : public A
{
protected:
    int Internal_mark;
    int Semester_mark;

public:
    void input()
    {
        cout << "Enter your internal_mark:";
        cin >> Internal_mark;
        cout << "Enter your semester_mark:";
        cin >> Semester_mark;
    }
};
class C : public B
{
private:
    string name;
    int securedmark;

public:
    C(string name)
    {
        this->name = name;
    }
    int totalmark(int x, int y)
    {
        securedmark = Internal_mark + Semester_mark;
        return (securedmark);
    }
    void strudentdetails()
    {

        getdata();
        input();
        totalmark(Internal_mark, Semester_mark);
        cout << "Name of the student is:" << name << endl;
        cout << "Roll-number of the student is:" << Roll_number << endl;
        cout << "TotalMark secured by the student is:" << securedmark << endl;
    }
};
int main()
{
    C obj1("Shantanu");
    obj1.strudentdetails();
    getch();
    return 0;
}