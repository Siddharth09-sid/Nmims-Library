#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int i;
    char name[25];
    int marks[3];
    int sum =0;
    cout<<"Enter the Name of Student ";
    gets(name);
    cout<<"Enter the marks of 3 subject ";
    for(i=0;i<3;i++)
    {
        cin>>marks[i];
        sum = sum+marks[i];
    }
    int average=(sum/3);
    cout<<"Name :"<<name<<endl;
    for(i=0;i<3;i++)
    {
    cout<<"Marks Of 3 Subject :"<<marks[i]<<endl;
    }

    cout<<"Average :"<<average;
}
