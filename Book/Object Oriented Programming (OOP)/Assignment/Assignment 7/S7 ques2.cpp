#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int a;
    int square;


    cout<<"Enter the number:";
    cin>>a;

    if(a>=0)
    {
        square=sqrt(a);
	cout<<"Square root of "<<a<<" is "<<square;
    }
    else
    {
        try
        {
           throw(a);
        }
        catch(int ex)
        {
            cout<<"number cannot be negative";
        }
    }
    return 0;
}
