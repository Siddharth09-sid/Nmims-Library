#include<iostream>

using namespace std;

int main()
{

    char operator1;
    int a,b;
    cout<<"Enter an operator (+, -, *,): ";
    cin>>operator1;
    cout<<"Enter two Numbers: ";
    cin>>a>>b;


    switch (operator1)
    {
	case '+':
	    cout<<a<<"+"<<b<<"="<<a + b;
	    break;
	case '-':
	    cout<<a<<"-"<<b<<"="<<a - b;
	    break;
	case '*':
	    cout<<a<<"*"<<b<<"="<<a * b;
	    break;
	case '/':
	    cout<<a<<"/"<<b<<"="<<a / b;
	    break;
	default:
	    cout<<"Error! operator is not correct";
    }
   return 0;
}
