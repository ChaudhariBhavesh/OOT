#include <iostream>
using namespace std;

class Animal{
    public:
        virtual void sound();
};

class Dog : public Animal
{
    void sound()
    {
        cout<<"\n Dog sounds Bho bho...";
    }
};

class Cat : public Animal
{
    void sound()
    {
        cout<<"\n Cat sounds Meow meow....";
    }
};

int main(){

    int ch;
    Animal *a;

    while(1){
    cout<<"\n\nEnter : \n1.Dog \n2.Cat \n3.exit \nEnter your choice : ";
    cin>>ch;
    switch(ch){
        case 1:
        {
            Dog d;
            a = &d;
            a->sound();
            break;
        }
        case 2:
        {
            Cat c;
            a = &c;
            a->sound();
            break;
        }
        case 3:
        exit(0);

        default:
        cout<<"Wrong choice..";

        }
    }
    
    return 0;
}