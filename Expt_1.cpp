// This program finds the smallest and the largest element in the array 

#include<iostream>
using namespace std;

int main()
{
    int arr[20],n,min, max ;
    cout<<"\n\nEnter the size of array : ";
    cin>>n;
    cout<<"\nEnter elements of array : ";
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    max=arr[0];
    for (int i=0;i<n;i++)
    {
        if (max<arr[i])
        {
            max=arr[i];
        }
    }
    min=arr[0];
    for (int i=0;i<n;i++)
    {
        if (min>arr[i])
        {
            min=arr[i];
        }
    }
    cout<<"\n________________________________________________________________________________________________________________"<<endl;

    cout<<"\n\nThe largest number in the array is : "<<max<<endl;
    cout<<"\nThe smallest number in the array is : "<<min<<endl<<endl;
    return (0);
}