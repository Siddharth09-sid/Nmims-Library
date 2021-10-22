#include<iostream>

using namespace std;

class addcomplex
{
	public:
		int real, i;
		addcomplex()
		{
			real = 0;
			i = 0;
		}
		addcomplex(int r, int imaginary)
		{
			real = r;
			i = imaginary;
		}
		addcomplex add(addcomplex c1, addcomplex c2)
		{
			addcomplex C;
			C.real = c1.real + c2.real;
			C.i = c1.i + c2.i;
			return C;
		}

};
int main()
{


	addcomplex c1(8, 5);
	cout<<"\nComplex number 1: "<<c1.real<<" + i"<<c1.i<<endl;

	addcomplex c2(9, 3);
	cout<<"\nComplex number 2: "<<c2.real<<" + i"<<c2.i<<endl;

	addcomplex C;
	C = C.add(c1, c2);

	cout<<"\n Sum of complex number: "<<C.real<<" + i"<<C.i;

	return 0;
}
