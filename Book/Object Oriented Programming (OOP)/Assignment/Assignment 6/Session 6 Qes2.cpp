#include<iostream>
#include<stdio.h>
using namespace std;

class A
{
private :
    char name[25];
    int roll;
    int marks[3];
    int i;

public :
    void insert()
    {
        cout<<"Enter the name ";
        gets(name);
        cout<<"Enter Roll No. ";
        cin>>roll;
        cout<<"Enter the marks of 3 subject ";
        for(i=0;i<3;i++)
        {
            cin>>marks[i];
        }
    }
    void output()
    {
        cout<<"Name :";
        cout<<this->name<<"\n";
        cout<<"Roll No. :";
        cout<<this->roll<<"\n";
        cout<<"Marks of 3 subject: ";
        for(i=0;i<3;i++)
        cout<<this->marks[i]<<"\n";
    }
};

int main()
{
    A ob;
    ob.insert();
    ob.output();
}
