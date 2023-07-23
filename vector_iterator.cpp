#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the Vector : ";
    cin >> n;

    vector<int> v(n);
    cout << "Now enter the elements of the vector : \n";
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        v[i] = (x);
    }
    cout << "Printing values of the vector using iterators : \n";
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); ++it)
    {
        cout << (*it) << " ";
    }
    return 0;
}