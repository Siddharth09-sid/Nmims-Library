#include <iostream>
using namespace std;

template <class T>
T Largest(T a, T b)
{
        return ( a > b) ? a : b;
}

int main()
{
        int x1, x2;
        float y1, y2;
        char z1, z2;

        cout << "Enter two integers: "<<endl;
        cin >> x1 >> x2;
        cout << Largest(x1, x2) <<" is larger." << endl;

        cout << "\n Enter two floating-point numbers: \n";
        cin >> y1 >> y2;
        cout << Largest(y1, y2) <<" is larger." << endl;

        cout << "\nEnter two characters:\n";
        cin >> z1 >> z2;
        cout << Largest(z1, z2) << " has larger ASCII value.";

        return 0;
}
