#include <iostream>
using namespace std;

class hide
{
private:
    int num;

public:
    void input()
    {
        cout << "Enter the number: " << endl;
        cin >> num;
    }
    void out()
    {
        cout << "The number is : " << num << endl;
    }
};
int main()
{
    hide obj;
    obj.input();
    obj.out();
}