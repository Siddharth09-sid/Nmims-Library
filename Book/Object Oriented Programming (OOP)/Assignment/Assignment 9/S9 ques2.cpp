#include<iostream>
using namespace std;

class add
{
private:
    int x;
public:
    add(): x(100){}
    void operator ++()
    {
        x = x + 100;
    }
    void display()
    {
         cout << "Enter the Number: ";
         cin >> x;
         x = x + 100;
         cout << "Sum = " << x <<endl;
    }
};

int main()
{
    add ob;
    ob.display();
    ++ ob;
    ob.display();
    return 0;
}
