#include <iostream>
using namespace std;
template<class T>
class A
{
private:
    T a,b;
public :


T add(T a, T b)
{

    return a + b;

}
T sub(T a, T b)
{

    return a - b;

}
T mul(T a, T b)
{

    return a * b;

}
T div(T a, T b)
{

    return a / b;

}
};
int main()
{
    A<int> ob;
    int x,y;
    cout<<"Enter the values ";
    cin>>x>>y;

  cout<<"Addition of "<<x<<" and "<<y<<" is: "<<ob.add(x,y)<<endl;
  cout<<"Subtraction of "<<x<<" and "<<y<<" is: "<<ob.sub(x,y)<<endl;
  cout<<"Multiplication of "<<x<<" and "<<y<<" is: "<<ob.mul(x,y)<<endl;
  cout<<"Division of "<<x<<" and "<<y<<" is: "<<ob.div(x,y)<<endl;

  return 0;
}
