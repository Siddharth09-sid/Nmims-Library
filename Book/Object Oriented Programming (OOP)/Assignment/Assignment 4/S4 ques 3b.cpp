#include <iostream>
using namespace std;

class operators
{
    int a,b,add,sub,mul;
    float div;
public:
    void getdata();
    void addition();
    void subtract();
    void multiplication();
    void division();
};
inline void operators :: getdata()
{
    cout << "Enter first number:";
    cin >> a;
    cout << "Enter second number:";
    cin >> b;
}

inline void operators :: addition()
{
    add = a+b;
    cout << "Addition of two numbers: " << a+b << "\n";
}

inline void operators :: subtract()
{
    sub = a-b;
    cout << "Subtraction of two numbers: " << a-b << "\n";
}

inline void operators :: multiplication()
{
    mul = a*b;
    cout << "Multiplication of two numbers: " << a*b << "\n";
}

inline void operators ::division()
{
    div=a/b;
    cout<<"Division of two numbers: "<<a/b<<"\n" ;
}

int main()
{
    operators o;
    o.getdata();
    o.addition();
    o.subtract();
    o.multiplication();
    o.division();

    return 0;
}
