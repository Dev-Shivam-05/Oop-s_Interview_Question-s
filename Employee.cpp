#include<iostream>
using namespace std;

class Employee
{

public:
    string emp_name;
    int emp_id,emp_salary;
    void setEmployee(string emp_name,
        int emp_id,
        int emp_salary)
    {
        this->emp_name = emp_name;
        this->emp_id = emp_id;
        this->emp_salary = emp_salary;
    }
    void getEmployee()
    {
        cout << "Name :- " << emp_name << endl;
        cout << "Id :- " << emp_id << endl;
        cout << "Salary :- " << emp_salary << endl;
    }
};

int main()
{
    int size;

    cout << "Enter The Size of Company :- ";
    cin >> size;
    
    Employee emp[size];
    
    string emp_name;
    int emp_id,emp_salary;
    for (int i = 0; i < size; i++)
    {
        cout << endl;
        cout << endl << "Employee "<< i + 1 <<" :- " << endl;
        cout << "Enter Employee Name :- ";
        cin >> emp_name;
        cout << "Enter Employee Id :- ";
        cin >> emp_id;
        cout << "Enter Employee Salary :- ";
        cin >> emp_salary;
        cout << endl;

        emp[i].setEmployee(emp_name,emp_id,emp_salary);
    }
    for (int i = 0; i < size; i++)
    {
        cout << endl << "Employee "<< i <<" :- " << endl;
        emp[i].getEmployee();
    }

    int highest = emp[0].emp_salary;
    for (int i = 0; i < size; i++)
    {
        if (emp[i].emp_salary > highest)
        {
            highest = emp[i].emp_salary;
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (emp[i].emp_salary == highest)
        {
            cout << endl << "The Highest Salray is :- " << endl << endl;
            emp[i].getEmployee();
        }
    }

    int lowest = emp[0].emp_salary;
    for (int i = 0; i < size; i++)
    {
        if (emp[i].emp_salary < lowest)
        {
            lowest = emp[i].emp_salary;
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (emp[i].emp_salary == lowest)
        {
            cout << endl << "The Lowest Salray is :- " << endl << endl;
            emp[i].getEmployee();
        }
    }

    
    
    
    
    return 0;
}