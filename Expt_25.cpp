#include<iostream>
using namespace std;
class sum
{
	private:
		int n;
	public:
		sum()
		{
			n=5;
		}
		sum(int x)
		{
			n=x;
		}
		sum(sum &i)
		{
			n=i.n;
		}
		void add()
		{
			int s=0;
			for(int i=1;i<=n;i++)
			{
				s=s+i;
			}
			cout<<"Sum is "<<s<<endl;
		}
};
int main()
{
	sum a(3);
	cout<<"Parameterized Constructor: ";
	a.add();
	
	sum x;
	cout<<"\nDefault Constructor: ";
	x.add();
	
	sum c(6);
	sum b(c);
	cout<<"\nCopy Constructor: ";
	b.add();
	
}
