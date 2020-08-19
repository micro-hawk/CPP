// NOTES:
// 1. std::set is an Associative Container that contains a sorted set of unique objects of type Key.
// 2. It is usually implemented using Red-Black Tree.
// 3. Insertion, Removal, Search have logarithmic complexity.
// 4. If we want to store user defined data type in set then we will have to provide 
//    compare function so that set can store them in sorted order.
// 5. We can pass the order of sorting while constructing set object.

// BOTTOM LINE:
// It store unique elements and they are stored in sorted order (A/D)

#include<iostream>
#include<set>
#include<functional>
using namespace std;

class Person
{
    public:
        int age; 
        string name;
        bool operator < (const Person& rhs) const { return age < rhs.age ;};
        bool operator > (const Person& rhs) const {return age > rhs.age ;};
};
int main()
{
    set<int, greater<>> Set = {1,3,4,5,23,3,41,2,4345,56};
    for(const auto& e: Set)
    {
        cout << e << " ";
    }

    cout << "\n" << endl;

    set <Person, greater<Person>> Set1 = {{30,"bhavik"}, {22, "Vikas"}, {21,"Hitesh"}, {42, "Sanat"} };
    for(const auto& element: Set1)
    {
        cout << element.age << " " << element.name << endl;
    }
    int n;
    cin >> n;
    set<int> Test;
    Test.upper_bound(n);
    for (int i = 0; i < n; i++)
    {
        int input; cin >> input;
        Test.insert(input);
    }

    for(const auto& e:Test){
        cout << e << " ";
    }
    
    return 0;
}