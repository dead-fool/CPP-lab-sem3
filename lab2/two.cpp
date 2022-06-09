//lab2q2.cpp
//program to convert feet to inches, illustrating function overloading


#include <iostream>

using namespace std;

float convert();
void convert(float &);
void convert(float , float);


int main()
{
    float feet, inches;
    cout<<"No parameters:"<<endl;
    inches = convert();
    cout<<"Equivalent Inches = "<<inches<<endl;
    cout<<"One parameter:"<<endl<<"Feet = ";
    cin>>feet;
    convert(feet);
    cout<<"Two parameters:"<<endl;
    cout<<"Feet = ";
    cin>>feet;
    cout<<"Inches = ";
    cin>>inches;
    convert(feet, inches);
    return 0;
}

float convert()
{
    float ft;
    cout<<"Feet = ";
    cin>>ft;
    return (ft * 12);
}

void convert(float &ft)
{
    cout<<"Equivalent Inches = "<<ft * 12<<endl;
}

void convert(float ft, float in)
{
    in = ft * 12 + in;
    cout<<"Equivalent Inches = "<<in<<endl;
}
