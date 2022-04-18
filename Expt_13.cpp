#include<iostream>
using namespace std;
class worker
{
	private:
		int wg,wd;
	public:
		worker(int w,int d)
		{
			wg=w;
			wd=d;
		}
		void showData()
		{
			cout<<"\nWages is "<<wg<<endl<<"Wdays is "<<wd<<endl;
		}
		friend void payment(worker);
};
void payment(worker z)
{
	int p=z.wg*z.wd;
	cout<<"Payment is "<<p<<endl;
}
main()
{ 
	worker a(500,5),b(400,6);
	a.showData();
	payment(a);
b.showData();
	payment(b);
}
