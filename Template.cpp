//Template

#include<iostream>
using namespace std;

//what if i want to find largest of two numbers without function overloading
//C++ have a template keyword for that.

template <class X> X largest(X a, X b)
// X largest(X a, X b)      // Can put code here also :) 
{
    if (a>b)
    {
        return a;}
    
    else{
        return b;}

}
int main()
{
    int n2, n1;
    cout << "Enter your number: " << endl;
    cin >> n1,n2;
    cout << largest(n1,n2) << " is your largest number: " << endl;
    return 0;
}