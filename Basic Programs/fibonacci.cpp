#include<bits/stdc++.h>
using namespace std;
void fibonacci(int n)
{
    if(n < 2)
        cout<< n;
    else
    {
        long long a = 0;
        long long b = 1;
        long long sum = 0;
        for(int i=0; i< n; i++)
        {
            sum = a + b;
            cout << sum << " ";
            a = b;
            b = sum;
        }
    }

}
int main()
{
    int n;
    cout << "Enter a positive number upto which you want to find the fibonacci : "<<endl;
    cin >> n;
    fibonacci(n);
    return 0;
}