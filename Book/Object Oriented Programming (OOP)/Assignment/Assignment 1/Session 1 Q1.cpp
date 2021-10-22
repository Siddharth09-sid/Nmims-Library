#include<iostream>

using namespace std;

int main()
{

    int a,b,c;
    cout<<"Enter the 3 number ";
    cin>>a>>b>>c;
    if((a>b)&&(a>c))
    {
        cout<<"The Largest Number is :"<<a;
    }
    else if((b>a)&&(b>c))
    {
        cout<<"The Largest Number is :"<<b;
    }
    else if((c>a)&&(c>b))
    {
        cout<<"The Largest Number is :"<<c;
    }
}
