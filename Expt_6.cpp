#include <iostream>
using namespace std;

class staff
{
  public:
  int staff_ID;
  char qf[20];
  char dept[20];
};
class teacher:public staff
{
  char sub[20];
  public:
    void getinfo()
    {
      cout<<"\n\nEnter the staff ID : ";
      cin>>staff_ID;
      cout<<"\n\nEnter Qualification : ";
      cin>>qf;
      cout<<"\n\nEnter Department : ";
      cin>>dept;
      cout<<"\n\nEnter Subject : ";
      cin>>sub;
    }
   void display_T();
};
class officer:public staff
{
  char Rank[20];
  public:
  void getinfo()
    {
      cout<<"\n\nEnter staff ID : ";
      cin>>staff_ID;
      cout<<"\n\nEnter Qualification : ";
      cin>>qf;
      cout<<"\n\nEnter department : ";
      cin>>dept;
      cout<<"\n\nEnter Rank :";
      cin>>Rank;
    }
   void display_O();
};
int main()
{
  teacher a;
  officer b;
  a.getinfo();
  cout<<"________________________________________________________________________________________________________________________";
  b.getinfo();
  cout<<"\n\nInformation is : \n";
  cout<<"\nMember a : \n";
  a.display_T();
  cout<<"\nMember b :\n";
  b.display_O();
}
void teacher::display_T()
{
  cout<<"\n\nstaff_code is:"<<staff_ID<<"\n";
  cout<<"\n\nQualification is:"<<qf<<"\n";
  cout<<"\n\nDepartment is:"<<dept<<"\n";
  cout<<"\n\nSubject is:"<<sub<<"\n";
}
void officer::display_O()
{
  cout<<"\n\nstaff_code is:"<<staff_ID<<"\n";
  cout<<"\n\nQualification is:"<<qf<<"\n";
  cout<<"\n\nDepartment is:"<<dept<<"\n";
  cout<<"\n\nRank of officer is:"<<Rank<<"\n";
}