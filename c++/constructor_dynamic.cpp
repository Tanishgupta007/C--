#include <iostream>
using namespace std;

class BankDeposit
{
    int principal;
    int time;
    float rate;
    float ret_value;

public:
    BankDeposit(){}
    BankDeposit(int p,int t,float r);
    BankDeposit(int p,int t,int r);
    void show();
};

BankDeposit :: BankDeposit(int p, int t, float r)
{
    principal = p;
    time = t;
    rate = r;
    ret_value = principal;

    for (int i = 0; i < t; i++)
    {
        ret_value = ret_value * (1+rate);
    }
}
BankDeposit :: BankDeposit(int p, int t, int r)
{
    principal = p;
    rate = float(r) / 100;
    time = t;
    ret_value = principal;

    for (int i = 0; i < t; i++)
    {
        ret_value = ret_value * (1+rate);
    }
}
void BankDeposit ::show()
{
    cout << "The princpal was : " << principal << ", and after " << time << " years, "
         << "The principal is " << ret_value << endl;
}
int main()
{
    BankDeposit b1,b2;
    int p,t;
    int R;
    float r;
    cout<<"Enter the principal: "<<endl;
    cin>>p;
    cout<<"Enter the rate: "<<endl;
    cin>>r;
    cout<<"Enter the time period: "<<endl;
    cin>>t;
    b1 = BankDeposit(p,t,r);
    b1.show();
    cout<<"Enter the principal: "<<endl;
    cin>>p;
    cout<<"Enter the rate: "<<endl;
    cin>>R;
    cout<<"Enter the time period: "<<endl;
    cin>>t;
    b2 = BankDeposit(p,t,R);
    b2.show();
}
