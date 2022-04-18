#include <iostream>
using namespace std;
class SI
{
    public :
      int P, Years;
      float S1, S2, R1=1.5, R2=11.5;
     
  SI()
        {
            cout<<"\nEnter values of Principal : ";
            cin>>P;
            cout<<"\nEnter Number of years : ";
            cin>>Years;
            S1 = (P*R1*Years)/100 ;
            S2 = (P*R2*Years)/100 ;
            cout<<"Simple interest is for 1.5% is "<<S1<<endl;
            cout<<"Simple interest is for 11.5% is "<<S2<<endl;
          
        }
};

int main()
{
  int choice;
  SI obj1;
  SI obj2;
  cout<<"Do you wanna run again ? Yes = 1 / No = 0";
  cin>>choice;

  if(choice==1)
    {
      main();
    }
  else if (choice==0)
    {
      exit(0);
    }
};