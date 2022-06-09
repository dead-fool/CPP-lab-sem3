//lab2q6.cpp
/* Write a program that displays the current monthly salary of chief executive officer, information officer, and system analyst,
programmer that has been increased by 9, 10, 12, and 12 percentages respectively in year 2010.
Let us assume that the salaries in year 2009 are
Chief executive officer Rs. 35000/m
Information officer Rs. 25000/m
System analyst Rs. 24000/m
Programmer Rs. 18000/m
Make a function that takes two arguments; one salary and the other increment. Use proper default argument. */

#include <iostream>

using namespace std;
int current_salary(int salary, int increment = 12);
int main()
{
    int salary;
    cout<<"The Current Salaries:"<<endl;
    cout<<endl<<"Chief Executive Officer : Rs."<<current_salary(35000, 9)<<"/m";
    cout<<endl<<"Information Officer : Rs."<<current_salary(25000, 10)<<"/m";
    cout<<endl<<"System Analyst : Rs."<<current_salary(24000, 12)<<"/m";
    cout<<endl<<"Programmer : Rs."<<current_salary(18000)<<"/m"; //invokes default argument
    return 0;
}
int current_salary(int salary, int increment)
{
    int updated_salary;
    updated_salary = salary + (increment / 100.0) * salary;
    return updated_salary;
}

