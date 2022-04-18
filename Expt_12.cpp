#include<iostream>
using namespace std;
class shape
{
	protected:
		int b;
		int h;
	public: 
		virtual int area()=0;
		void getB(int a)
		{
			b=a;
		}
		void getH(int c)
		{
			h=c;
		}
};
class rectangle: public shape
{
	public:
		int area()
		{
			return (b*h);
		}
};
class triangle:public shape
{
	public:
		int area()
		{
			return (b*h)/2;
		}
};
int main()
{
	rectangle R;
	triangle T;
	
	int a,c;
	cout<<"Enter the Breadth and height of Rectangle"<<endl;
	cin>>a>>c;
	R.getB(a);
	R.getH(c);
	cout<<"Area of Rectangle is "<<R.area()<<endl;
	
	cout<<"Enter the Base and height of triangle"<<endl;
	cin>>a>>c;
	T.getB(a);
	T.getH(c);
	cout<<"Area of triangle is "<<T.area()<<endl;
}
