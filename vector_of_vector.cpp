#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> v;
    int row, col;
    cout << "Enter the number of rows and columns : ";
    cin >> row >> col;
    cout << "Now enter the elements of the vector : \n";
    for (int i = 0; i < row; ++i)
    {
        vector<int> temp;
        for (int j = 0; j < col; ++j)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}