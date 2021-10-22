#include <iostream>
using namespace std;
class Time
{
    int hrs,minute,sec;
    public:
    time(int h, int m, int s)
		{
			hrs = h;
			minute = m;
			sec = s;
		}

    void setTime()
{
    cout << "\n Enter the hour(0-11) ";
    cin >> hrs;
    cout << "\n Enter the minute(0-59) ";
    cin >> minute;
    cout << "\n Enter the second(0-59) ";
    cin >> sec;
}



void operator +(Time t)
{


int h, m, s;
s = sec + t.sec;
m = minute + t.minute+(s/60);
h = hrs + t.hrs+(m/60);
m=m%60;
s=s%60;
cout<<"\n The added time is: "<<h<<":"<<m<<":"<<s;

}
};



int main()
{
    Time t1,t2;

    cout << "\n Enter the first time ";
    t1.setTime();
    cout << "\n Enter the second time ";
    t2.setTime();
      t1 + t2;	//adding of two time object using '+' operator


}

