#include <iostream>
using namespace std;

class numbers
{
    int num;

public:
    int set_num()
    {
        cout << "Enter the number 1 : " << endl;
        cin >> num;
        // cout << "Enter the number 2 : " << endl;
        // cin >> num2;
    }
    friend numbers display(numbers c1, numbers c2);
};

numbers display(numbers c1, numbers c2)
{
    numbers c3;
    c3.num = c1.num + c2.num;
    cout << "The Sum of num1 and num2 is : " << c3.num;
}

int main()
{
    numbers c1,c2,c3,sum;
    c1.set_num();
    c2.set_num();
    // c3.display();
    sum = display(c1,c2);
    return 0;
}
