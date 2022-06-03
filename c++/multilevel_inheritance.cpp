/* Multiple inheritance 
    A
    |
    B
    |
    C
*/
#include <iostream>
using namespace std;

//-------------------------------------------------------
class Student                                            
{
protected:
    int roll_no;
    char name[20];

public:
    int set_roll();
    char set_name();
    void get_roll(void);
    void get_name(void);
};
int Student ::set_roll()
{
    cout<<"Enter rollno: ";
    cin>>roll_no;
    // roll_no = r;
};
void Student ::get_roll(void)
{
    cout << " The rollno is : " << roll_no<<endl;
};
char Student ::set_name()
{
    cout<<"Enter the name: "<<endl;
    cin>>name;
};
void Student ::get_name(void)
{
    cout << " The name is : " << name<<endl;
};
//--------------------------------------------------------------------


class marks : public Student{
    protected:
    float physics, maths;

    public:
    float set_marks();
    void get_marks(void);
};
float marks :: set_marks(){
    cout<<"Enter the marks of physics: ";
        cin>>physics;
    cout<<"Enter the marks of maths: ";
        cin>>maths;
};

void marks :: get_marks(){
    cout<<"The marks of physics : "<<physics<<endl;
    cout<<"The marks of maths : "<<maths<<endl;
};
// --------------------------------------------------------------------------
class result : public marks{
    protected:
    float percentage;

    public:
    void display(){
        cout<<"The percentage is "<<(physics+maths)/2<<endl;
    };
};
//-----------------------------------------------------------
int main()
{
    //A-->b--->c is called inheritance path.
    result r;
    r.set_name();
    r.set_roll();
    r.set_marks();
    r.get_name();
    r.get_roll();
    r.get_marks();
    r.display();
    return 0;
}
