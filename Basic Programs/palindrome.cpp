/* #include <bits/stdc++.h>
using namespace std;
int isPalindrome(int n)
{
    int copy_n = n;
    int reverse_number = 0;
    while (copy_n)
    {
        reverse_number = (reverse_number * 10) + (copy_n % 10);
        copy_n /= 10;
    }
    if (reverse_number == n)
        return 1;
    return 0;
}
int main()
{
    int n;
    cout << "Enter a number to check if it is a Palindrome or not : ";
    cin >> n;
    if (isPalindrome(n))
    {
        cout << "Entered Number is a Palindrome " << endl;
    }
    else
    {
        cout << "Entered Number is not a Palindrome " << endl;
    }
    return 0;
}
*/

#include <bits/stdc++.h>
bool isPalindrome(int x)
{
    int c, q;
    int r = 0;
    if (x < 0)
    {
        return false;
    }
    else if (x >= 0 && x < 10)
    {
        return true;
    }
    else if (x == 10)
    {
        return false;
    }
    else
    {
        c = x;
        while (c)
        {
            q = c % 10;
            r = r * 10 + q;
            c = c / 10;
        }
        if (x == r)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
using namespace std;
int main()
{
    cout << isPalindrome(121) << endl;
    cout << isPalindrome(-121) << endl;
    cout << isPalindrome(10) << endl;
    return 0;
}