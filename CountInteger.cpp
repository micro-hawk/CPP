#include<iostream>
#include<string>
using namespace std;
int main()
{
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif

	long long int n; cin >> n;
	long long int temp = n;
	// string stro = to_string(temp);
	// cout << stro.length();
	int cnt=0;
	while(temp!=0)
	{
		cnt++;
		temp = temp/10;
		
	} cout << cnt;
	return 0;

}