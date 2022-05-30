#include <iostream>
#include <string>
using namespace std;
class student
{
private:
    string s_name;
    int roll_no;
    string address;
    int marks;

public:
    student(string name, int roll, string add, int mark)
    {
        s_name = name;
        roll_no = roll;
        address = add;
        marks = mark;
    }

    void display()
    {
        cout << "\n\n--------------- STUDENT INFORMATION IS:----------------";
        cout << "\nName is:-  " << s_name;
        cout << "\nRoll no is:-  " << roll_no;
        cout << "\nAddress is:-  " << address;
        cout << "\nMarks is:-  " << marks;
    }

    ~student()
    {
        cout << "\n\n\n------------------------";
    }
};

class course
{
private:
    string course_name;
    int course_code;
    string faculty_name;
    string student_enrolled;

public:
    course(string c_name, int c_code, string fac_name, string stu_enrolled)
    {
        course_name = c_name;
        course_code = c_code;
        faculty_name = fac_name;
        student_enrolled = stu_enrolled;
    }

    void disp()
    {
        cout << "\n\n-------------------COURSE INFORMATION IS:------------------";
        cout << "\n Course Name is:-  " << course_name;
        cout << "\n Course code is:-  " << course_code;
        cout << "\n Faculty name is:- " << faculty_name;
        cout << "\n Student enrolled is:-  " << student_enrolled;
    }

    ~course()
    {
        cout << "\n\n\n--------------------------------------------------";
    }
};

int main()
{
    student s1("TANISH GUPTA", 57, "JAMMU", 95);
    s1.display();
    course c1("Object oriented programming with c++ Lab", 411, "Mr. Anil Gupta", "TANISH GUPTA");
    c1.disp();
    return 0;
}
