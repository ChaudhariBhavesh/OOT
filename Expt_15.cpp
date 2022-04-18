#include<iostream>
using namespace std;
class demo
{
	private:
		static int x;
		static int y;
	public:
		demo(int a,int b)
		{
			x=a;
			y=b;
		}
		static void greatest()
		{
			int G=x>y?x:y;
			cout<<"value of X is "<<x<<endl;
			cout<<"value of y is "<<y<<endl;
			cout<<"Greatest No is "<<G<<endl;
		}
};
int demo::x;
int demo::y;
main()
{ 
	demo m(5,9);
	m.greatest();
}
