#include<fstream>
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
using namespace std;
class student
{
   int rollno;
   char name[20];
   float marks;

  public:
      void getdata()
      {
         cout<<"Roll no: ";
         cin>>rollno;
         cout<<"Name: ";
         cin>>name;
        cout<<"Marks: ";
         cin>>marks;
}
      void putdata()
      {
         cout<<"Rollno: "<<rollno<<"\tName: "<<name<<"\n";
         cout<<"Marks: "<<marks;
      }

      int getrno()
      {
         return rollno;
      }

      void modify();
}stud1, stud;

void student::modify()
{
   cout<<"Rollno: "<<rollno<<"\n";
   cout<<"Name: "<<name<<"\tMarks: "<<marks<<"\n";

   cout<<"Enter new details.\n";
   char nam[20]=" ";
   float mks;
   cout<<"New name:(Enter '.' to retain old one): ";
   cin>>nam;

   cout<<"New marks:(Press -1 to retain old one): ";
   cin>>mks;

   if(strcmp(nam, ".")!=0)
   {
      strcpy(name, nam);
   }

   if(mks != -1)
   {
      marks = mks;

   }
}

int main()
{

   fstream fptr("FILE_01.txt", ios::in | ios::out|ios::app);
   char ans='y';
   while(ans=='y' || ans=='Y')
   {
      stud1.getdata();
      fptr.write((char *)&stud1, sizeof(stud1));
      cout<<"Record added to the file\n";
      cout<<"\nWant to enter more ? (y/n)..";
      cin>>ans;
   }
   int rno;
   long pos;
   char found='n';
   cout<<"Enter roll no of student whose record is to be modified: ";
   cin>>rno;
   fptr.seekg(0);
   while(!fptr.eof())
   {
      pos = fptr.tellg();
      fptr.read((char *)&stud1, sizeof(stud1));
      if(stud1.getrno() == rno)
      {
         stud1.modify();
         fptr.seekg(pos);
         fptr.write((char *)&stud1, sizeof(stud1));
         found = 'y';
         break;
      }
   }
   if(found=='n')
   {
     cout<<"\nRecord not found in the file..!!\n";
      cout<<"Press any key to exit...\n";
      getch();
      exit(0);
   }
	 cout<<"Data changed successfully!\n";
      return 0;
}
