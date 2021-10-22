#include <iostream>
using namespace std;
int main()
{
 register int n = 20;
 int *ptr;
 ptr = &n;
 cout<<"address of n : "<< ptr<<endl;
 cout<<"value of n : "<<n;
 return 0;
}


