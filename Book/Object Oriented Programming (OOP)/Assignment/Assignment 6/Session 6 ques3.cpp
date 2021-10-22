#include<iostream>
#include<stdio.h>
using namespace std;

class Electricity
{
private:
    int id;
    char name[25];
    int unit;
    int tariff;

public :
    void read();
    void cal_tariff();
    void display();
};

void Electricity::read()
{
    cout<<"Enter the name : ";
    gets(name);
    cout<<"Enter your Id : ";
    cin>>id;
    cout<<"Enter the Amount of Units Consumed: ";
    cin>>unit;
}
void Electricity::cal_tariff()
{
    if(unit<=100)
    {
        tariff=(unit*5);
    }
    else if((unit>100)&&(unit<=200))
    {
        tariff=(100*5)+(unit-100)*7;
    }
    else if((unit>200)&&(unit<=300))
    {
        tariff=(100*5)+(100*7)+(unit-200)*12;
    }
}
void Electricity::display()
{
    cout<<"Name : "<<name<<"\n";
    cout<<"ID : "<<id<<"\n";
    cout<<"Number Of Units Consumed :"<<unit<<"\n";
    cout<<"Total Amount :"<<tariff;

}
int main()
{
    Electricity ob;
    ob.read();
    ob.cal_tariff();
    ob.display();

}
