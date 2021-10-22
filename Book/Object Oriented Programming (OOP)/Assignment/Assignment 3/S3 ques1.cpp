#include<iostream>
#include <cmath>
using namespace std;


int volume(int a)
    {

        return(a*a*a);
    }
float volume(int r,int h)
    {

        return (3.14 * r * r * h);
    }
float volume(float radius, float height)
    {

        return(0.33*3.14*radius*radius*height);
    }
    int main()
{
    int a;
    float radius;
    float height;
    int r;
    int h;

    cout<<"Enter side of cube:"<<endl;
    cin>>a;

    cout<<"Enter radius and height of a cylinder:"<<endl;
    cin>>r>>h;

    cout<<"Enter radius and height of cone: "<<endl;
    cin>>radius>>height;

    cout<<"\nVolume of cube is "<<volume(a)<<endl;
    cout<<"\nVolume of Cylinder is "<<volume(r,h)<<endl;
    cout<<"\nVolume of cone is "<<volume(radius, height)<<endl;

}
