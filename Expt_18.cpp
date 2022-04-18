#include<iostream>
using namespace std;

class shape
{
    public:
    double a, b;
    void getdata()
    {
        cin>>a>>b;
    }

    virtual void display()=0;
};

class tringle : public shape
{
    public: void display()
    {
        cout<<"\n Area of triangle : "<<a*b*0.5<<endl;
    }
};

class rectangle : public shape
{
    public:void display()
    {
        cout<<"\n Area of rectangle : "<<a*b<<endl;
    }
};

int main()
{
    tringle t;
    shape *at =&t;

    rectangle r;
    shape *ar = &r;

    cout<<"\n_____________________________________________________________________________________________________________________________________________\n\n";
    cout<<"\n\n\t\t\t\t\t\t\t~~  Main Menu ~~\n\n";

    int choice; 
    
    cout<<"\n\n\t\t\t\t1.Triangle ";
    cout<<"\t\t\t\t\t 2.Rectangle ";

    cout<<"\n\n ENTER : ";
    cin>>choice;


    if(choice==1)
    {
        int choice;
        cout<<"\n Enter base and height respectively : ";
        at->getdata();
        at->display();
        cout<<"\n\n\t\t\t\t1.Return to Menu ";
        cout<<"\t\t\t\t\t 2.Exit";

        cout<<"\n\n ENTER : ";
        cin>>choice;
        if(choice==1)
        {
            main();
        }
        else if(choice==2)
        {
            exit(0);
        }

    }
    else if(choice==2)
    {
        int choice;

        cout<<"\n Enter width and height respectively : ";
        ar->getdata();
        ar->display();
        cout<<"\n\n\t\t\t\t1.Return to Menu ";
        cout<<"\t\t\t\t\t 2.Exit";

        cout<<"\n\n ENTER : ";
        cin>>choice;
        if(choice==1)
        {
            main();
        }
        else if(choice==2)
        {
            exit(0);
        }
    }
    
    return 0;
    
}