//define a student class with attributes name,roll number,and grade.
#include <iostream>
#include <string>

using namespace std;
class student
{
public:
    string name;
    int rollno;
    string grade;
};
int main()
{
    student s1;
    s1.name = "Simran";
    s1.rollno = 101;
    s1.grade = "A++";

    cout << "name is = " << s1.name << endl;
    cout << "Roll is = " << s1.rollno << endl;
    cout << "Grade  is = " << s1.grade << endl;
    return 0;
}