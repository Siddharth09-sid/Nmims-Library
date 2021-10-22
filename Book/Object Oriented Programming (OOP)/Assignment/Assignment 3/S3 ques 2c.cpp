#include<iostream>
using namespace std;
void swap(int &x, int &y)
{
 int temp;
 temp = x;
 x = y;
 y = temp;
}
int main()
 {
 int a, b;
 a = 10;
 b = 40;
 cout << "(a,b) = (" << a << ", " << b << ")\n";
 swap(a, b);
 cout << "(a,b) = (" << a << ", " << b << ")\n";
 }
