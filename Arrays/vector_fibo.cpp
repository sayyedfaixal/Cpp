#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<long long> fibo;
    long long a = 1, b = 1, sum;
    int i = 3, n;
    cin >> n;
    fibo.push_back(a);
    fibo.push_back(b);
    while (i <= n)
    {
        sum = a + b;
        a = b;
        b = sum;
        fibo.push_back(sum);
    }
    for (long long x : fibo)
    {
        cout << x << " ";
    }
    return 0;
}