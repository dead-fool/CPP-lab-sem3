// l3q3.cpp
/* Create a class called carpark that has int data member for car id, int data member for charge/hour,
and float data member for the parked time. Make functions to set data members and show the charges and
parked hours of the corresponding car id. Make functions for setting and showing the data members.
Member function should be called from other functions. */
#include <iostream>

using namespace std;

class carpark
{
private:
    int car_id;
    int charge_per_hour;
    float time_parked;

public:
    void SetData(int id, int charge, float t)
    {
        car_id = id;
        charge_per_hour = charge;
        time_parked = t;
    }
    void Display_details()
    {
        cout << endl << "Car No. " << car_id << ", Time: " << time_parked <<"hrs, Charge: Rs. " << charge_calculate();
    }
    float charge_calculate()
    {
        return charge_per_hour * time_parked;
    }
};

int main()
{
    carpark c1;
    int id, rate;
    float time;
    cout<<"Enter Car ID: ";
    cin>>id;
    cout<<"Enter Charge per hour: ";
    cin>>rate;
    cout<<"Enter Time Parked(in hours): ";
    cin>>time;
    c1.SetData(id, rate, time);
    c1.Display_details();
    return 0;
}
