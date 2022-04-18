#include<iostream>
using namespace std;
class box
{
	private:
		int l,b,h;
	public:
		void getData()
		{
cout<<"Enter length,Breadth & Height of Box: ";
			cin>>l>>b>>h;
		}
		void area()
		{
int a=2*(l*b+b*h+l*h);
			cout<<"Area of Box is "<<a<<endl;
		}
		void volume()
		{
int v=l*b*h;
			cout<<"Volume of Box is "<<v<<endl;
		}
};
main()
{ 
	box m,*p;
	p=&m;
	p->getData();
	p->area();
	p->volume();
}
