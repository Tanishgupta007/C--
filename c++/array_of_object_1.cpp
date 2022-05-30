#include<iostream>
using namespace std;

class employee
{
    int id;

    public: 
        int input()
        {
            cout<<"Enter the id of the employee: "<<endl;
            cin>>id;
        }
        int output()
        {
            cout<<" the id of the employee: "<<id<<endl;
        }
};
int main()
{
    employee miet[4];
    for(int i=0;i<4;i++)
    {
        miet[i].input();
        miet[i].output();
    }

    return 0;
}