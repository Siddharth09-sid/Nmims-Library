#include<iostream>
using namespace std;
class Test
{
private:
int x; //data member : x
public:
void setX (int x) //local variable : x
{
this->x = x;
}
/*Test(int x)
{
this->x = x;
}*/
void print()
{
 cout << "x = " << x << endl;
}
};
int main()
{
Test obj;
obj.setX(20);
obj.print();
return 0;
}
