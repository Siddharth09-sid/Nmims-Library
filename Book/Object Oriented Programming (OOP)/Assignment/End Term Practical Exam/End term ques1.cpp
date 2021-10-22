#include<iostream>
using namespace std;

class Date
{
private:
    int day,month ,year;
public :
    date(int d, int m, int y)
    {
        day = d;
        month = m;
        year = y;
    }
    void nextday()
    {
        int d,m,y;
        if(d==30)
        {
        d = d%30;
        d = d+1;
        m = m + 1;
        cout<<"\nThe day after increment is : "<<d<<"/"<<m<<"/"<<y;
        }
        else
        {

        d = day + 1;
        m = month;
        y = year;
        cout<<"\nThe day after increment is : "<<d<<"/"<<m<<"/"<<y;
        }
    }
};

int main()
{
    Date ob1;
    int x,y,z;
    cout<<"Enter the day (1-30):";
    cin>>x;
    cout<<"\nEnter the month (1-12):";
    cin>>y;
    cout<<"\nEnter the year :";
    cin>>z;
    cout<<"\nTodays date is : "<<x<<"/"<<y<<"/"<<z;
    ob1.date(x,y,z);
    ob1.nextday();
}
