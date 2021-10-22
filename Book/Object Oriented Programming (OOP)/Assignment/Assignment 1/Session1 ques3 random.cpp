#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
    int n;
    srand(time(0));  // Initialize random number generator.
    cout<<"Enter the Number ";
    cin>>n;

    cout<<"Random numbers generated between 1 and "<<n<<" is : "<<endl;
    for(int i=0;i<n;i++)
        cout << (rand() % n) + 1<<" ";
    return 0;
}
