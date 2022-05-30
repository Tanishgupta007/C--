#include<iostream>
using namespace std;

class adder{
    int a,b;
    public:
    int input()
    {
        cout<<"Enter the value of a and b"<<endl;
        cin>>a>>b;
    }
    int add()
    {
        c = a+b;
    }
    int total()
    {
        return c;
    }
    private:
    int c;
};
int main()
{
    adder q;
    q.input();
    // q.input();
    q.add();
    cout<<"The sum of a and b is : "<<q.total()<<endl;
    
    return 0;
}