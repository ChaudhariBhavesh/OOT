#include<iostream>
using namespace std;
class getRows
{
	protected:
		int temp,n,i,j,k;
	
	public:
		getRows()		
		{
			cout<<"\n\nEnter the number of rows : ";
			cin>>n;
		}
	
	friend void makePyramid(getRows obj);
};

void makePyramid(getRows obj)
{
	obj.temp=obj.n;
	for(obj.i=1;obj.i<=obj.n;obj.i++)
	{
		for(obj.j=1;obj.j<=obj.temp;obj.j++)
		{
			cout<<" ";
		}
		obj.temp--;
		for(obj.k=1;obj.k<=obj.i;obj.k++)
		{
			cout<<" "<<obj.i;
		}
		cout<<endl;
	}
}

int main()
{
	getRows obj;
	cout<<"\n\n________________________________________________________________________________________________________________________\n\n";
	makePyramid(obj);
}