//l3q2.cpp
/* Assume that you want to check whether the number is prime or not. Write a program that asks for numbers repeatedly.
When it finishes checking a number the program asks if the user wants to do another calculation.
The response can be 'y' or 'n'. Don't forget to use the object-oriented concept. */

#include <iostream>
using namespace std;
class number
{
private:
    int n;
    int flag;

public:
    void GetNum()
    {
        cout << endl << "Enter number: ";
        cin >> n;
    }
    bool isPrime()
    {
        flag = 0;
        for (int i = 2; i < (n - 1); i++)
        {
            if (n % i == 0)
            {
                flag += 1;
                break;
            }
        }
        if (flag > 0) return false;
        else return true;
    }

};

int main()
{
    number num;
    char ans;
    bool prime, valid_ans;
    valid_ans = false;
    do
    {
        valid_ans = false;
        num.GetNum();
        prime = num.isPrime();
        prime ? cout<<"It is Prime!" : cout<<"It is Not Prime!";
        while (!valid_ans)
        {
            cout << endl << "Do you want to check another number? (y/n): ";
            cin >> ans;
            if ((ans == 'y') || (ans == 'n')){
                valid_ans = true;
            }
            else
                cout<<"Please Enter Valid Choice.";
        }
    } while (ans == 'y');
    return 0;
}
