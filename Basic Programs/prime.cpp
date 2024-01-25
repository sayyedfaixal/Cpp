#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, flag = 1;
    cout << "Please enter a number to check whether it is a prime or not : ";
    cin >> n;
    if (n < 2)
    {
        cout << "Please Enter a number greater than 2" << endl;
        return 0;
    }

    for (int divisor = 2; divisor < n - 1; divisor++)
    {
        if (n % divisor == 0)
        {
            flag = 0;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "Entered Number is not a Prime " << endl;
    }
    else
    {

        cout << "Entered Number is a Prime Number" << endl;
    }
}