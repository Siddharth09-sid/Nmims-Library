#include <iostream>

using namespace std;

template <class T, class X>
T value(T x, X y)
{
    cout<<"\nThe variables are: "<<x<<" "<<y;
    return 0;
}

int main()
{
    value(50,'S');
    return 0;
}
