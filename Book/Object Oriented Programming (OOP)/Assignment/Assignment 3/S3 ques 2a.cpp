#include<iostream>
using namespace std;

int main() //calling function
{
 int a, b; // a & b are actual arguments

 a = 10;
 b = 40;
 cout << "(a,b) = (" << a << ", " << b << ")\n";
 swap(a, b); //function callint temp;

 cout << "(a,b) = (" << a << ", " << b << ")\n";

}
void swap(int x, int y)
{
 int temp;
 temp = x;
 x = y;
 y = temp;

}
