//lab2q4.cpp
/* Assume that employee will have to pay 10 percent income tax to the government.
Ask user to enter the employee salary. Use inline function to display the net payment to the employee by the company. */

#include <iostream>

using namespace std;
inline void display_netpay(int salary)
{
    salary = salary - (0.1 * salary);
    cout<<endl<<"Net Payment = "<<salary;
}
int main()
{
    int salary;
    cout<<"Enter Salary: ";
    cin>>salary;
    display_netpay(salary);
    return 0;
}


