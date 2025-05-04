#include<iostream>
using namespace std;

class Distance
{
private:
    int feet;
    int inches;
public:
    void inputDistance()
    {
        cout << "Enter Feet :- ";
        cin >> feet;
        cout << "Enter Inches :- ";
        cin >> inches;
    }
    Distance addDistance(Distance d2)
    {
        Distance result;
        result.feet = feet + d2.feet;
        result.inches = inches + d2.inches;
        if (result.inches >= 12)
        {
            result.feet += result.inches / 12;
            result.inches = result.inches % 12;
        }
        return result;
    }
    void displayDistance()
    {
        cout << feet << " Feet ," << inches << " Inches" << endl;
    }
};

int main()
{
    Distance d1;
    Distance d2;
    
    cout << endl << "First Distance :- " << endl;
    d1.inputDistance();
    cout << endl << "Second Distance :- " << endl;
    d2.inputDistance();
    Distance result = d1.addDistance(d2);
    cout << endl << "Total Distance Is :- " << endl;
    result.displayDistance();
    return 0;
}