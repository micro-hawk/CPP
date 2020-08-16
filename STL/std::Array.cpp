// Syntax : std::array <type, num> array_name;

// NOTICE:
// 1. std::array is a container that encapsulates fixed size arrays.
// 2. array size is needed at compile time.
// 3. Assign by value is actually by value.
// 4. Access Elements:
//    a. at()
//    b. []
//    c. front()
//    d. back()
//    e. data() // gives access to the underlying array

#include<iostream>
#include<array>
using namespace std;

int main()
{
    array <int, 5> arr;
    arr = {1,2,3,4,5};

    //Initialization
    array<int,5> arr_01 = {1,2,3,4,5};  // Initializer List Array
    array<int,5> arr_02 {1,2,3,4,5};    // Uniform initialization

    // int n; cin >> n;
    // array <int,n> new;               // Can't express in this way.

    return 0;
}