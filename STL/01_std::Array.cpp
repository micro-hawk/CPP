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
//    f. fill() // fill all blocks with given argument

#include<iostream>
#include<array>
using namespace std;

int main()
{
    array <int, 5> arr;
    arr = {34,45,23,11,23};

    //Initialization
    array<int,5> arr_01 = {1,2,3,4,5};  // Initializer List Array
    array<int,5> arr_02 {1,2,3,4,5};    // Uniform initialization

    // int n; cin >> n;
    // array <int,n> new;               // Can't express in this way.

    cout << arr.at(4) << endl;
    cout << arr.front() << " " << arr.back() << endl;  // for first and last element in array.
    // For Printing this array using for loop
    for(int i=0; i<5; i++){
        cout << arr.at(i) << " ";
    }
    cout << endl;

    // Using fill() STL Array
    arr.fill(100);

    // For Printing this array using for loop
    for(int i=0; i<5; i++){
        cout << arr.at(i) << " ";
    }

    return 0;
}