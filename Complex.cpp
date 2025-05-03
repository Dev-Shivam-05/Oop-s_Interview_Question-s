#include<iostream>
using namespace std;

class Complex
{
private:
    float real;
    float imag;
public:
    Complex(float r = 0,float i = 0)
    {
        real = r;
        imag = i;
    }
    Complex add(const Complex& c)
    {
        Complex result;
        result.real = real + c.real;
        result.imag = imag + c.imag;
        return result;
    }
    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    float real;
    float imag;
    
    cout << "Enter A Real Value :- ";
    cin >> real;
    cout << "Enter A Imaginary Value :- ";
    cin >> imag;
    
    Complex c1(real,imag);
    
    cout << "Enter Another Real  Value :- ";
    cin >> real;
    cout << "Enter Another Imaginary  Value :- ";
    cin >> imag;
    
    Complex c2(real,imag);
    
    cout << "First Complex Number :- " << endl;
    c1.display();
    cout << "Second Complex Number :- " << endl;
    c2.display();

    
    Complex c3 = c1.add(c2);

    cout << "Sum of Complex Numbers: ";
    c3.display();
    return 0;
}