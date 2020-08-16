// Syntax = vector<type> vector_name;

// NOTES:
// 1. std::vector is a sequence container and also known as Dynamic Array or Array List.
// 2. Its size can grow and shrink dynamically, and no need to provide size at compile time.

// ELEMENT ACCESS
// at(), [], front(), back(), data()

// MODIFIERS:
// insert(), emplace(), push_back(), emplace_back(), pop_back(), resize(), swap(), erase(), clear()

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    // vector<int> v(size, number_to_fill_all_elements);

    int n; cout<< "Enter your vector size: \n"; cin >> n;
    v.reserve(n);
    for (int i = 0; i < n; i++)
    {
        int input; cin >> input;
        v.push_back(input);
    } cout << endl;

    // Capacity
    cout << v.capacity() << " " << v.size() << endl;
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << v.at(i) << " " ;
    }
    
    
    return 0;
}