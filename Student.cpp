#include<iostream>
using namespace std;

class Student
{
private:
    string std_name;
    int std_rollNo;
    float marks[3];
public:
    Student(int roll_no,string name,float m1,float m2,float m3)
    {
        this->std_rollNo = roll_no;
        this->std_name = name;
        this->marks[0] = m1;
        this->marks[1] = m2;
        this->marks[2] = m3;
    }
    float CalculateTotal()
    {
        return marks[0] + marks[1] + marks[2];
    }
    float CalculateAvearge()
    {
        return CalculateTotal() / 3;
    }
    void displayResult()
    {
        cout << "Name :- " << std_name << endl;
        cout << "Roll No. :- " << std_rollNo << endl;
        cout << "Total Marks Obtained :- " << CalculateTotal() << endl;
        cout << "Average :- " << CalculateAvearge() << endl;
    }
};

int main()
{
    int roll;
    string name;
    int m1,m2,m3;

    cout << "Enter Student Name :- ";
    cin >> name;
    cout << "Enter Student Roll No :- ";
    cin >> roll;
    cout << "Enter Marks Of 3 Subject :- ";
    cin >> m1 >> m2 >> m3;

    Student std(roll,name,m1,m2,m3);

    std.displayResult();
    return 0;
}