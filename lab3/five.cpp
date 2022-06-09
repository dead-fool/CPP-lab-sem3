//lab3q5.cpp
/* Assume that an object represents an employee report that contains information like employee id, total bonus, total overtime in a particular year.
Use an array of objects to represent n employees' reports. Write a program that displays the report. Use setpara()
member function to set report attributes by passing the arguments and member function displayreport() to
show the report according to the parameter passed. Display the report in the following format.
An employee with ... ... ... has received Rs ... ... ...as a bonus
and had worked ... ... ... hours as overtime in the year ... ... */

#include<iostream>
#define N 10
using namespace std;

class employee_report{
private:
    int employee_id;
    int total_bonus;
    int overtime;

public:
    void setpara()
    {
        cout<<endl<<"Enter Employee ID: ";
        cin >> employee_id;
        cout<<"Enter Total Bonus: ";
        cin >> total_bonus;
        cout << "Enter Overtime Hours: ";
        cin >> overtime;
    }
    void displayreport()
    {
        cout<<endl<<"An employee with ID = "<<employee_id<<" has received Rs "<<total_bonus
        << " as a bonus and had worked "<<overtime<<" hours as overtime in the year 2069.\n";

    }
};
int main()
{
    int i, n;
    employee_report report[N];
    cout<<"Number of Employees: ";
    cin>>n;
    cout<<endl<<"Enter Data: "<<endl;
    for(i = 0;i < n; i++)
    {
        report[i].setpara();
    }
    cout<<endl<<"Employee Report: "<<endl;
    for(i = 0;i < n; i++)
    {
        report[i].displayreport();
    }
    return 0;
}
