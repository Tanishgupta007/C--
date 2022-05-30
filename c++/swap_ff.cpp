#include<iostream>
using namespace std;

class b;
class a
{
    private:
    int x;

    public:
    void input(void)
    {
        cin >> x;
    }
    friend int swap(a a1,b b1);
};
class b
{
    private:
    int y;

    public:
    void input(void)
    {
        cin >> y;
    }
    friend int swap(a a1,b b1);
};

int swap(a a1, b b1)
{
    cout<<"Before Swapping : "<<a1.x<<" "<<b1.y<<endl;
    int temp=a1.x;
    a1.x=b1.y;
    b1.y=temp;
    cout<<"After Swapping : "<<a1.x<<" "<<b1.y<<endl;
}

int main()
{
    a a1;
    b b1;

    cout<<"Enter the value of a class :";
    a1.input();

    cout<<"Enter the value of b class :";
    b1.input();

    cout << swap(a1,b1);
}