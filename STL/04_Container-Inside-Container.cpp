#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<vector<int>> Tree;
    int edge, n1, n2;
    cout << "Enter your edges : \n";
    cin >> edge;
    Tree.resize(edge);

    // For pushing values inside this tree using Vector
    for(int i=0; i<edge; i++)
    {
        cin >> n1 >> n2;
        Tree[n1].push_back(n2);
    }
    for(const auto &e1: Tree)
    {
        for(const auto &e2: e1)
        {
            cout << e2;
        }
        cout << endl;
    }
    return 0;
}