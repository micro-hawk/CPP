#include <iostream>
using namespace std;

void revNumber(int num)
{
    int reverse = 0, lastDigit;
    // for (int i = 0; i < num; i++)
    // {
    //     lastDigit = num%10;
    //     reverse = (reverse*10) + lastDigit;
    //     num = num/10;
    // }
    while (num > 0)
    {
        lastDigit = num % 10;
        reverse = (reverse * 10) + lastDigit;
        num = num / 10;
    }

    cout << reverse << endl;
}
int main()
{
    int n;
    cin >> n;
    revNumber(n);
    return 0;
}