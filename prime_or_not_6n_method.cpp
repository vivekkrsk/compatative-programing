#include <bits/stdc++.h>
using namespace std;

int is_Prime(int n)  // Time = O(sqrt(n))
{
    if (n<=1)
    {
        return 0;
    }
    if (n<=3)
    {
        return 1;
    }

    if (n%2==0 || n%3==0)
    {
        return 0;
    }

    for (int i = 5; i*i<= n; i+6)
    {
        if (n%i==0 || n%(i+2)==0)
        {
            return 0;
        }
        
    }

    return 1;
    
    
    
}

int main()
{
    int n;
    cout << "Enter number to check number is prime or not\n";
    cin >> n;

    if (is_Prime(n))
    {
        cout << "True";
    }
    else
    {
        cout << "false";
    }

    return 0;
}