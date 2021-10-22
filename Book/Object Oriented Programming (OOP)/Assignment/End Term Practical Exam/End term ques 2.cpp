#include<iostream>
#include<cmath>
using namespace std;
template<class T>
class A
{
    private:
        int p,r,t;
        int result;

    public:
        T Interest2(T p, T r, T t)
{
    T result =  p * pow((1+r/12),(12*t));
    return result - p;
}

T Interest(T p, T r, T t)
{
    return (p*r*t)/100;
}

};
int main()
{
    A<int> ob;
    int x,y,z;
    cout<<"Enter the Principle : ";
    cin>>x;
    cout<<"\nEnter the rate of Interest : ";
    cin>>y;
    cout<<"\nEnter the time : ";
    cin>>z;
    cout<<"\nSimple Interest :"<<ob.Interest(x,y,z)<<endl;

    cout<<"\nCompound Interest :"<<ob.Interest2(x,y,z)<<endl;

}
