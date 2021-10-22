#include <iostream>
using namespace std;
int main()
{
int*a; // declare an int pointer
 float* b; // declare a float pointer
a= new int; // dynamically allocate memory
 b = new float;
*a = 45; // assigning value to the memory
 *b = 45.45f;
cout << *a<< endl;
 cout << *b<< endl;
 delete a, b; // deallocate the memory
}
