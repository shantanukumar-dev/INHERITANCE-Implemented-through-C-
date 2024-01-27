#include <iostream>
#include <conio.h>
using namespace std;
class Father
{
protected:
    string surename = "Mahanta";
};
class son : public Father
{
private:
    string name = "Shantanu";

public:
    void display()
    {
        cout << "My name is " << name << " " << surename << endl;
    }
};
 int main()
{
son s1;
s1.display();
    getch();
    return 0;
}