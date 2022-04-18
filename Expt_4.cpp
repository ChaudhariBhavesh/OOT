#include<iostream>

using namespace std;


class person  //parent Class 
    {
        public:
        int age ;
        string name,gender;
        void get_person()
        {
            cout<<"\n Enter the name of Employee : ";
            cin>>name;
            cout<<"\n Enter the gender of "<<name <<" : " ;
            cin>>gender;
            cout<<"\n Enter the age of "<<name <<" : " ;
            cin>>age;
        }
        void display_person()
        {
            cout<<"\n_________________________________________________________________________________________________________________________________________"<<endl;
            cout<<"\n\nName of the employee : "<<name;
            cout<<"\n\nGender of the "<<name <<" : " <<gender ;
            cout<<"\n\nage of "<<name <<" : " <<age;
        }
    };  

class emp: public person //Child Class 
    {
        public:
        float salary ;
        string Company;
        void get_emp()
        {
            person::get_person();
            cout<<"\n Enter the Salary of "<<name <<" : " ;
            cin>>salary;
            cout<<"\n Enter the name of company : ";
            cin>>Company;
            
        }
        void display_emp()
        {
            person::display_person();
            cout<<"\n\nSalary of "<<name <<" : " <<salary;
            cout<<"\n\nCompany of employee : "<<Company;
            
        }
    };  

class Programmer : public emp  //Grand child Class 
    {
        public:
        string Mob_NO;
        void get_programmer()
        {
            emp::get_emp();
            cout<<"\n Enter the Mobile No. of "<<name <<":" ;
            cin>>Mob_NO;            
        }
        void display_programmer()
        {
            emp::display_emp();
            cout<<"\n\nMob no of "<<name <<":" <<Mob_NO<<endl<<endl;
        }
    };  

int main()
{
    int n;
        
    cout<<"\n\n Enter the No of Employees : ";
    cin>>n;
    Programmer obj[n];
    
    for(int i=0;i<n;i++)
    {
        obj[i].get_programmer(); 
    }
        
        for(int i=0;i<n;i++)
    {
        obj[i].display_programmer();    
    }
        
}