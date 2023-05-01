#include<bits/stdc++.h>
bool isPalindrome(int x)
{
    int c,q;
    int r = 0;
    if(x < 0)
        {return false;}
    else if( x >= 0 && x < 10)
        {return true;}
    else if(x == 10)
        {return false;}
    else{
        c = x;
        while(c){
            q = c%10;
            r = r * 10 + q;
            c = c/10;
        }
        if(x == r)
            {return true;}
        else
            {return false;}
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