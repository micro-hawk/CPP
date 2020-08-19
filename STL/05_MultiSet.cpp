// NOTES:
// 1. std::multiset is an Associative Container that contains a sorted set of duplicate objects of type Key.
// 2. It is usually implemented using Red-Black Tree.
// 3. Insertion, Removal, Search have logarithmic complexity.
// 4. If we want to store user defined data type in multiset then we will have to provide 
//    compare function so that multiset can store them in sorted order.
// 5. We can pass the order of sorting while constructing set object.

// BOTTOM LINE:
// multiset is similar to set except it can have multiple elements with same value.

#include<iostream>
#include<set>
#include<functional>
#include<string>
using namespace std;

class Person
{
    public:
        int age;
        string name;
    bool operator < (const Person& rhs) const{return age < rhs.age; }
    bool operator > (const Person& rhs) const {return age > rhs.age; }
};
int main()
{
    multiset<Person, less<Person>> multiSet;
    multiSet = { {21,"Vikas"}, {30, "Bhavik"}, {50, "Sanat"} };
    for(const auto& e: multiSet){
        cout << e.age << " " << e.name << endl;
    }

    int n; cout << "Size for multiset: \n" ; cin >> n;
    multiset<int> s01;
    cout << "Enter elements now: \n";
    for (int i = 0; i < n; i++)
    {
        int input; cin >> input;
        s01.insert(input);
    }
    for (const auto& e : s01){
        cout << e << " ";
    }
    cout << endl;
    return 0;
}