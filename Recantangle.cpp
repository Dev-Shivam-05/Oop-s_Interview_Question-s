#include<iostream>
using namespace std;

class Recantanle
{
private:
    float length;
    float width;
public:
    void setDimensions(float length,float width)
    {
        this->length = length;
        this->width = width;
    }
    float CalculateArea()
    {
        return length * width;
    }
    float CalculatePerimeter()
    {
        return 2 * (length + width);
    }
};

int main()
{
    float length;
    float width;

    cout << "Enter Length Of Rectangle :- ";
    cin >> length;
    cout << "Enter Width Of Rectangle :- ";
    cin >> width;

    Recantanle react;

    react.setDimensions(length,width);

    cout << "The Area Of Rectangle Is :- " << react.CalculateArea() << endl;
    cout << "The Perimeter Of Rectangle Is :- " << react.CalculatePerimeter() << endl;
    return 0;
}