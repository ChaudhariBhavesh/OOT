#include<iostream>
using namespace std;
void Area(int r);
void Area(int l,int b);
int main()
{ 
	int L,B,R;
	cout<<"Enter Radius of Circle: ";
	cin>>R;
	Area(R);
	cout<<"Enter Length & Breadth of Rectangle: ";
	cin>>L>>B;
	Area(L,B);
}
void Area(int r)
	{	float a=3.14*r*r;
		cout<<"Area of Circle is "<<a<<endl;
	}
void Area(int l,int b)
	{	int a=l*b;
		cout<<"Area of Rectangle is "<<a<<endl;
	}
