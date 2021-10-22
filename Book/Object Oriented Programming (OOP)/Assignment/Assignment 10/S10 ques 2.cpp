#include<iostream>
using namespace std;

template< class T>
T Swap(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int x, y;
        cout<<" Enter First Number ";
        cin>>x;
        cout<<"\n Enter Second Number ";
        cin>>y;
        cout << "Before passing data to function template.\n";
        cout << "x = " << x << "\ny = " << y;
        Swap(x, y);
        cout << "\n\nAfter passing data to function template.\n";
        cout << "x = " << x << "\ny = " << y;
}
