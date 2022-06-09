// l3q4.cpp
/* Write a program with classes to represent a circle, rectangle, and triangle. Each class should have data members
to represent the actual objects and member functions to read and display objects, find perimeter and area of the objects,
and other useful functions. Use the classes to create objects in your program. */

#include <iostream>
#include <cmath>
using namespace std;
class circle
{
private:
    float radius, perimeter, area;

public:
    void Read()
    {
        cout << endl << "Enter radius of circle: ";
        cin >> radius;
    }
    void Calc()
    {
        perimeter = 2 * 3.14 * radius;
        area = 3.14 * radius * radius;
    }
    void Display()
    {
        cout << endl << "Circle:" <<endl;
        cout << "Radius = "<<radius << "\nPerimeter = " << perimeter << ", Area = " << area << "\n";
    }
};

class rectangle
{
private:
    float length, breadth, perimeter, area;

public:
    void Read()
    {
        cout <<endl<< "Enter length of rectangle: ";
        cin >> length;
        cout << "Enter breadth: ";
        cin >> breadth;
    }
    void Calc()
    {
        perimeter = 2.0 * (length + breadth);
        area = length * breadth;
    }
    void Display()
    {
        cout << endl<<"Rectangle:"<<endl;
        cout<<"Length, Breadth = "<<length<<", "<<breadth<< "\nPerimeter = " << perimeter << ", Area = " << area << "\n";
    }
};

class triangle
{
private:
    float a, b, c, perimeter,semi_p, area;

public:
    void Read()
    {
        cout <<endl<< "Enter three sides of triangle:"<<endl;
        cin >> a;
        cin >> b;
        cin >> c;
        checkvalid();
    }
    void checkvalid()
    {
        if (! ( ((a + b) > c) && ((b + c) > a) && ((a + c) > b) ) ){
            cout<<"Triangle cannot exist!"<<endl;
            Read();
        }
    }
    void Calc()
    {
        perimeter = a + b + c;
        semi_p = perimeter / 2.0;
        area = sqrt( (semi_p) * (semi_p - a) * (semi_p - b) * (semi_p - c));
    }
    void Display()
    {
        cout <<endl<< "Triangle:"<<endl;
        cout <<"Sides = "<<a<<","<<b<<","<<c<<"\nPerimeter = " << perimeter << ", Area = " << area << "\n";
    }
};

int main()
{
    int choice;
    cout<<"Choose Shape:"<<endl;
    cout<<"[1] Circle\n[2] Rectangle\n[3] Triangle\nChoice (1/2/3) : ";
    cin >> choice;
    switch (choice)
    {
        case 1:
            circle s1;
            s1.Read();
            s1.Calc();
            s1.Display();
            break;

        case 2:
            rectangle s2;
            s2.Read();
            s2.Calc();
            s2.Display();
            break;

        case 3:
            triangle s3;
            s3.Read();
            s3.Calc();
            s3.Display();
            break;
    }
    return 0;
}
