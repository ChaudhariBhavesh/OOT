#include<iostream>
using namespace std;

class student  //Base Classs
{
    public:
    int Rn;
    string name; 
};
class marks : public student  //Derived class
{
    public:
    int M1,M2,M3,Total;
    double Percent;
    void Getinfo()
    { 
        cout<<"\n Enter Name of student: ";
        cin>>name;
        cout<<"\n Enter Roll No : ";
        cin>>Rn;
    }
    void GetMarks()
    {
        cout<<"\n Enter marks of (M1 out of 100) : ";
        cin>>M1;
        cout<<"\n Enter marks of M2 (out of 100) : ";
        cin>>M2;
        cout<<"\n Enter marks of M3 (out of 100) : ";
        cin>>M3;
    }
    void Marks()
    {
        Total=M1+M2+M3;
        Percent=Total/3;
        

    }
    void display()
    {
        cout<<"___________________________________________________________________________________________________________________________________________"<<endl;
        cout<<"\n Name of student : "<<name<<endl; 
        cout<<"\n Roll No : "<<Rn;
        cout<<"\n \n Total marks of "<<name<< " Are : ";
        cout<<Total;
        cout<<"\n\n Total Percentage of "<<name<<" Are : ";
        cout<<Percent<<" %"<<endl<<endl;
    }
};

int main()
{
    marks obj;
    obj.Getinfo();
    obj.GetMarks();
    obj.Marks();
    obj.display();
    return 0;
}