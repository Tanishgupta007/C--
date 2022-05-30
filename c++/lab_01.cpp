#include <iostream>
using namespace std;

class student
{
    private:
        char name[20];
        int rollno;
        float marks;
    public:
    void input()
    {
        cin>>name>>marks>>rollno;
    }
    void display(){
        cout<<name;
        cout<<" has the most marks"<<endl;
    }
    float marksreturn()
    {
        return marks;
    }

};
int main(){

    student s[10];
    int n,i,loc,k;
    cout<<"Enter the number of students whose data you want "<<endl;
    cin>>n;
    for(int i=0; i<=n-1;i++)
    {
        k=i+1;
        cout<<"Enter the name, rollno,marks"<<endl;
        s[i].input();

    };
    float marks=0.0;
    loc=0;
    for(int i=0; i<=n-1;i++)
    {
        if(marks < s[i].marksreturn())
        {
            marks = s[i].marksreturn();
            loc=i;
        }
    }
    s[loc].display();

    return 0;   
}
