#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int p;
	float r;
	int t;
	cout<<"Enter principal amount: ";
	cin>>p;
	cout<<"Enter rate of interest: ";
	cin>>r;
	cout<<"Enter time period (in years): ";
	cin>>t;
	float si = p*r*t;
	cout<<"Simple interest to be paid is: Rs."<<si<<endl;
	float total = p * pow((1+r/12), (12*t));
	float ci = total - p;
	cout<<"Compound interest to be paid is: Rs. "<<ci<<endl;
	return 0;
}
