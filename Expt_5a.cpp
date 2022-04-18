// Practical_A

#include<iostream>
using namespace std;

class Employee  //Base Class 
    {
        public:
        int EmpNo;
        string name, Dgn;
    };  
class Salary : public Employee  //Derived class 
{
    public:
    int BS,HRA,DA,PF,Total;
    void GetData()
    {
        cout<<"\n Enter Employee No: ";
        cin>>EmpNo;
        cout<<"\n Enter Name of Employee: ";
        cin>>name;
        cout<<"\n Enter designation: ";
        cin>>Dgn;
        cout<<"\n Enter Basic salary: ";
        cin>>BS;
        cout<<"\n Enter Human Resource Allowance: ";
        cin>>HRA;
        cout<<"\n Enter Dearness Allowance: ";
        cin>>DA;
        cout<<"\n Enter Profitability fund: ";
        cin>>PF;
    }
    void calculate()
    {
    Total=BS+HRA+DA-PF;
    }
    void Display()
    {
        cout<<"_________________________________________________________________________________________________________________________________________"<<endl;

        cout<<"\n Employee No : "<<EmpNo<<endl;
        cout<<"\n Name of Employee : "<<name <<endl;
        cout<<"\n Designation : "<<Dgn <<endl;
        cout<<"\n Basic Salary: "<<BS<<endl;
        cout<<"\n Human Resource Allowance : "<<HRA<<endl;
        cout<<"\n Dearness Allowance : "<<DA<<endl;
        cout<<"\n Profitability fund : "<<BS<<endl;
        cout<<"\n Total Pay to the Employee : "<<Total<<endl<<endl;
    }
};

int main ()
{
    Salary obj;
    obj.GetData();
    obj.calculate();
    obj.Display();
    return 0 ;
}