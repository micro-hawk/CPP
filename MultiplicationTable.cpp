#include<iostream>
using namespace std;

void table(int a){
    for(int i=1; i<=10; i++)
    {
        cout << a << "x" << i << "=" << a*i << endl;
    }
}
int main()
{
    int n;
    cout << "Enter your number: " << endl;
    cin >> n;
    cout << endl;
    table(n);
    return 0;
}