#include<iostream>
#include<stdio.h>
using namespace std;
class customer
{
protected:
 int id,accno,bal,loannno,loanamt;
 char name[50];
public:
    void getdata()
    {
    cout<<"\nEnter your Name : ";
    gets(name);
    cout<<"Enter your Id :";
    cin>>id;
    }
    void display()
    {
    cout<<"\nCustomer Name: "<<name;
    cout<<"\n Customer ID: "<<id<<endl;
    }
};
class depositor:public customer
{
    int accno,bal;
    public:
void getdata()
    {

    cout<<"\nEnter your account number :";
    cin>>accno;

    cout<<"\nEnter the money you want to deposit:";
    cin>>bal;

    }
void display()
    {

    cout<<"\nAccount Number: "<<accno;
    cout<<"\nMoney Deposited: "<<bal;
    }
};
class borrower:public depositor
{
    int loanno,loanamt;
    public:
    void getdata()
    {

    cout<<"\nEnter your loan number:";
    cin>>loanno;

    cout<<"\nEnter the loan money you want:";
    cin>>loanamt;

    }
    void display()
    {

    cout<<"\nLoan Number: "<<loanno;
    cout<<"\nLoan Amount: "<<loanamt;
    }
};
int main()
{
depositor d;
 borrower b;
  cout<<"\t Data Input";
  d.customer::getdata();
  d.getdata();
  b.getdata();
  cout<<"\n\n\t Data Output";
  d.customer::display();
  d.display();
  b.display();
  return 0;
}
