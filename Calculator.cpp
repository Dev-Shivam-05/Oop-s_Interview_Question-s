#include<iostream>
using namespace std;

class Calculator
{
private:
    int num_1,num_2;
public:
    Calculator()
    {
        cout << "Enter A Number :- ";
        cin >> num_1;
        cout << "Enter Another Number :- ";
        cin >> num_2;    
    }

    void add()
    {
        cout << endl << "The Sum Of "<< num_1 <<" And "<< num_2 <<" Is :- " << num_1 + num_2;
    }
    void sub()
    {
        cout << endl << "The Subtraction Of "<< num_1 <<" And "<< num_2 <<" Is :- " << num_1 - num_2;
    }
    void product()
    {
        cout << endl << "The Multiplication Of "<< num_1 <<" And "<< num_2 <<" Is :- " << num_1 * num_2;
    }
    void division()
    {
        cout << endl << "The Division Of "<< num_1 <<" And "<< num_2 <<" Is :- " << num_1 / num_2;
    }
    void module()
    {
        cout << endl << "The Module Of "<< num_1 <<" And "<< num_2 <<" Is :- " << num_1 % num_2;
    }
};

int main()
{
    Calculator c;

    int choice;
    do
    {
        cout << endl << "Enter 1 To Perfrom Addtion" << endl;
        cout << "Enter 2 To Perfrom Subtraction" << endl;
        cout << "Enter 3 To Perfrom Multiplicaction" << endl;
        cout << "Enter 4 To Perfrom Division" << endl;
        cout << "Enter 5 To Perfrom Modulas" << endl;
        cout << "Enter 0 To Exit" << endl;
        cout << "Enter Your Choice :- ";
        cin >> choice;
        
        switch(choice)
        {
            case 0:
                cout << "Program IS Exited Secussfully";
                break;
            case 1:
                c.add();
                break;
            case 2:
                c.sub();
                break;
            case 3:
                c.product();
                break;
            case 4:
                c.division();
                break;
            case 5:
                c.module();
                break;
            default:
                break;
        }
    }
    while (choice != 0);

    return 0;
}