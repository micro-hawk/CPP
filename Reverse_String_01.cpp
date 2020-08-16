#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cin >> str;
    string str_new = "";
    for (int i = str.size() - 1; i >= 0; i--)
    {
        str_new = str_new + str[i];
    }
    cout << str_new;
    
    return 0;
}