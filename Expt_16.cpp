#include<iostream>
#include<fstream>
using namespace std;
main()
{

ifstream f1 ("Myfile.txt");
      ofstream f2 ("copy.txt");

 if(f1 && f2)
   {
      int ch;
      while(1)
        {
           ch = f1.get();
           if(ch==EOF)
           break;

            f2.put(ch);
        }
        f1.close();
        f2.close();
        cout<<"file copied successfully........\n\n";
    }
    else
    cout<<"File copied successfully."<<endl;
}

