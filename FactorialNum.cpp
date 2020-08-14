// MicroHawk (C) 2020;
#include<iostream>
using namespace std;

long long int fact(long long int num)
{
    if (num<2)
    {
        return 1;
    } else
    {
        return num * fact(num -1);
    }
}
int main()
{
    long long int n;
    cin >> n;
    long long int factorialNum = fact(n);
    cout << "your factorial is: " << factorialNum << endl;
    return 0;
}