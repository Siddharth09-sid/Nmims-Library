#include<iostream>
using namespace std;

int main()
{
    int age;

    cout<<"Enter your age:";
    cin>>age;

if(age>=18)
        {
           cout<<"Eligible for voting";
        }

   else
   {
       try
    {
         if(age<0)
        {
            throw(age);
        }
        else if (age>0 && age<18)
        {
            throw(age);
        }
    }

    catch(int ex)
    {
        cout<<"Not eligible for voting";
    }
   }
    return 0;
}
