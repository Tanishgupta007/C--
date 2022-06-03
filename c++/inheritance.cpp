#include <iostream>
using namespace std;

// Base class or Parent class
class Employee
{
public:
    string name;
    float salary;

    int id = 1;
    Employee(int idd)
    {
        id = idd;
        name = "Tanish";
        salary = 100000;
    }
    Employee(){}
};

// Derived class or child class
class Programmer : public Employee
{

public:
    string lang = "C++";
    Programmer(int impid)
    {
        id = impid;
    }
};

int main()
{
    Employee Tanish(1);
    cout << Tanish.id;
    cout << Tanish.salary<<endl;
    
    Programmer skills(1);
    cout<<skills.lang<<endl;

    // cout<<


    return 0;
}
