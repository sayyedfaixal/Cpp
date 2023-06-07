#include <iostream>
using namespace std;
int squareRoot(int n)
{
    int s = 0, e = n, ans;
    int m = s + (e - s) / 2;
    while (s <= e)
    {
        if (m * m == n)
            return m;
        else if (m * m < n)
        {
            ans = m;
            s = m + 1;
        }
        else
        {
            e = m - 1;
        }
        m = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int num = 49;
    cout << "Square root of " << num << " is " << squareRoot(num);
    return 0;
}
