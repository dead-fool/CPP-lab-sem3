//lab2q4.cpp
/* Write a function that passes two temperatures by reference and sets the larger of the two
numbers to a value entered by user by using return by reference. */


#include <iostream>

using namespace std;

float & larger_temp (float &, float &);

int main()
{
    float tempa, tempb;
    tempa = 69; //larger one
    tempb = 47.5;
    cout<<"Temperature to replace the larger one: ";
    cin>>larger_temp(tempa, tempb);
    cout<<endl<<"Temperatures:"<<endl<<tempa<<endl<<tempb;
    return 0;
}

float & larger_temp(float &a, float &b)
{
    if (a > b)
        return a;
    else
        return b;
}
