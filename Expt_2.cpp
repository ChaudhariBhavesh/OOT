
#include <iostream>
using namespace std;

class num
{
public:
    int n; // Get the value of n

    num(int n)
    {
        int sum;

        for (int i; i <= n; ++i)
        {
            sum += i;
        }
        
        cout << "\n\nThe sum of n numbers is : ";
        cout << sum << endl<< endl;
        
    }
};

int main()
{
    int n;
    cout << "\n\nEnter the positive integer value of n : ";
    cin >> n;
    num obj(n);
}