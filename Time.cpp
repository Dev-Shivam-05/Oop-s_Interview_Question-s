#include<iostream>
using namespace std;

class Time
{
private:
    // Declaring Variables
    int hour;
    int minute;
    int second;
public:
    // Using Funtion To Take Input 
    void inputTime()
    {
        cout << "Enter Hour :- ";
        cin >> hour;
        cout << "Enter Minute :- ";
        cin >> minute;
        cout << "Enter Second :- ";
        cin >> second;
    }
    
    // Using Funtion To Show Time 
    void showTime()
    {
        // Formating Manually To Print As Time.
        (hour < 10) 
            ? cout << "0" << hour
            : cout << hour;
        cout << ":";
        (minute < 10) 
            ? cout << "0" << minute
            : cout << minute;
        cout << ":";
        (second < 10) 
            ? cout << "0" << second
            : cout << second;
    }
};

int main()
{
    // Taking A Object Of Time As myTime
    Time myTime;
    // Calling inputTime Funtion To Take Input 
    myTime.inputTime();
    
    cout << "The Time Is :- ";
    // Calling inputTime Funtion To Show Output In HH / MM / SS 
    myTime.showTime();
    return 0;
}