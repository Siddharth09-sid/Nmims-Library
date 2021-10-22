#include<iostream>
using namespace std;

#define ADD(a,b) (a+b)
#define SUBTRACT(a,b) (a-b)
#define MULTIPLICATION(a,b) (a*b)
#define DIVISION(a,b) (a/b)


int main()
{
    float a,b;

    cout<<"Enter the number a :";
    cin>>a;

    cout<<"Enter the number b:";
    cin>>b;

    float add = ADD(a,b);
    cout<<"Sum is :"<<add<<endl;

    float sub = SUBTRACT(a,b);
    cout<<"Difference is :"<<sub<<endl;

    float mul = MULTIPLICATION(a,b);
    cout<<"Product is :"<<mul<<endl;

    int div = DIVISION(a,b) ;
    cout<<"Division is :"<<div<<endl;

    return 0;
}
