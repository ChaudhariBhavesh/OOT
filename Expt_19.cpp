#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
	fstream bhavesh;
	bhavesh.open("bhavesh",ios::out);
	if(!bhavesh)
	{
		cout<<"\n\nUnable to create file.\n\n";
	}
	else
	{
		cout<<"\n\n\t\t\t\t\t\t    File created successfully.\n\n";
		cout<<"\n_____________________________________________________________________________________________________________________________________________\n\n";
		cout<<"\n\n\t\t\t\t\t\t\t~~  Main Menu ~~\n\n";
		cout<<"\n\n\t\t\t\t1.Write text ";
		cout<<"\t\t\t\t\t 2.Terminate";
		cout<<"\n\n ENTER : ";
		int choice;
		cin>>choice;
		switch (choice)
		{
		case 1:
			char data[30];
			cout<<"\n\n ENTER DATA : ";
			cin>>data;
			bhavesh<<data;
			bhavesh.close();
			break;
		case 2:
			bhavesh.close();
			exit(0);
			break;
		
		default:
			cout<<"Invalid Input";
			break;
		}
	}
	return 0;
}	