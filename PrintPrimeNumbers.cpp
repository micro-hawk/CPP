//MicroHawk 2020
#include <iostream>
using namespace std;

int isPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

void printPrime(int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
}
int main()
{
    int start, end;
    cout << "Enter your rnage: \n";
    cin >> start >> end;
    printPrime(start, end);
    // int result = isPrime(n1);
    // cout << result << endl;

    return 0;
}