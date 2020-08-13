#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter your number: \n";
    cin >> n;
    int isPrime = 1;
    for (int i = 0; i*i < n; i++)
    {
        if (n%i==0)
        {   
            isPrime = 0;
        }
    }
    if (isPrime)
    {
        cout << n << " is a Prime number.\n";
    }else
    {
        cout << n<< " is not a Prime Number.\n";
    }
  
    return 0;
}