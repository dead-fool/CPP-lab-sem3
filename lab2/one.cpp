#include <iostream>
using namespace std;
struct date{
    int dd;
    int mm;
    int yy;
};
void display(date );
int main()
{
    date d1;
    cout<<"Year: ";
    cin>>d1.yy;
    cout<<"Month: ";
    cin>>d1.mm;
    cout<<"Day: ";
    cin>>d1.dd;
    display(d1);
    return 0;
}

void display(date D)
{
    cout<<"The date in format(mm/dd/yy) :"<<endl;
    cout<<D.mm<<"/"<<D.dd<<"/"<<D.yy;
}
