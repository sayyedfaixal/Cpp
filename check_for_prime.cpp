#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number to check whether it is prime : ";
    cin >> n;
    if (n == 1 || n == 0)
    {
        cout << n << " is not a Prime";
        return 0;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << n << " is not a Prime Number";
            break;
        }
        else
        {
            cout << n << " is a Prime Number";
            break;
        }
    }
    return 0;
}