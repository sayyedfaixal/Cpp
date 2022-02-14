#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter the number upto which you want the sum of all even numbers : ";
    cin >> n;
    // Basic logic
    /*for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }*/
    // Better approach
    for (int i = 0; i < n; i += 2)
    {
        sum += i;
    }
    cout << "Sum of all even numbers till " << n << " is :" << sum;
    return 0;
}