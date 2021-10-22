#include<iostream>
using namespace std;

#define SI(p,r,t) (p*r*t)/100;

int main()
{
    float p ;
    float r ;
    float t ;
    cout<<"\nEnter Principal: ";
    cin>>p;
    cout<<"\n Enter rate: ";
    cin>>r;
    cout<<"\n Enter time: ";
    cin>>t;

    float k = SI(p,r,t) ;
    cout<<"\n SI is : "<<k<<endl;

    return 0;
}
