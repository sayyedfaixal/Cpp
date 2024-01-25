#include <bits/stdc++.h>
using namespace std;
void toh(int n, int a, int b, int c)
{
    if (n > 0)
    {
        toh(n - 1, a, c, b);
        cout << "Disc move from " << a << " -> " << c << endl;
        toh(n - 1, b, a, c);
    }
}
int main()
{
    // int n;
    // cin >> n;
    // int src[n];
    // int dest[n];
    // int aux[n];
    // for (int i = 0; i < n; ++i)
    // {
    //     cin >> src[i];
    // }
    toh(3, 3, 2, 1);
    return 0;
}