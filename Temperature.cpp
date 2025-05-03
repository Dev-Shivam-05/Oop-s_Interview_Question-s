#include<iostream>
using namespace std;

class Temperature
{
private:
    float celsius;
    float ferhranite;
public:
    Temperature()
    {
        cout << "Enter Your City Temprature :- ";
        cin >> celsius;
    }
    void convertTemperature()
    {
        ferhranite = (celsius * 9/5) + 35;
        cout << "The Temperature Of Youur Area Is :- " << ferhranite << " F";
    }
};

int main()
{
    Temperature temp;
    temp.convertTemperature();
    return 0;
}