#include <bits/stdc++.h>
using namespace std;

void printDiamond(int n)
{
    for (int i = 0; i < n; i++)
    {
        // Upper triangle space
        for (int j = 0; n - i - 1; j++)
        {
            cout << " ";
        }
        // Upper triangle start
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        // Upper triangle space
        for (int j = 0; n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    printDiamond(n);
    return 0;
}