// l3q1.cpp
/* Write a simple program that converts the temperature in Celsius scale to Fahrenheit scale and vice versa
using the basic concept of class and object. Make separate classes for Celsius and Fahrenheit which will have
the private members that hold the temperature value and make conversion functions in each class for conversion
from one to another. For example, you need to have a function toFahrenheit() in class Celsius that converts to
Fahrenheit scale and returns the value. */

#include<iostream>
using namespace std;
class Celsius
{
    private:
        float tempr;
    public:
        void getTemp()
        {
            cout<<"Enter tempr in C: ";
            cin>>tempr;
        }
        void showConverted()
        {
            cout<<"Fahrenheit Equivalent = "<<toFahrenheit()<<endl;
        }
        float toFahrenheit()
        {
            return (9.0/5)*tempr +32;
        }
};
class Fahrenheit
{
    private:
        float tempr;
    public:
        void getTemp()
        {
        cout<<"Enter tempr in F: ";
        cin>>tempr;
        }
        void showConverted()
        {
            cout<<"Celsius Equivalent = "<<toCelsius()<<endl<<endl;
        }
        float toCelsius()
        {
            return (tempr-32)*5/9;
        }
};

int main()
{
    Celsius c;
    Fahrenheit f;
    c.getTemp();
    c.showConverted();
    f.getTemp();
    f.showConverted();
    return 0;
}
