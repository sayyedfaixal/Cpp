#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, extraCandies, maxCandy;
    cout << "Enter the number of students: " << endl;
    cin >> n;
    int candies[n], result[n];
    cout << "Enter the candies of each student: " << endl;
    for(int i=0;i<n;i++)
    {
        cin >> candies[i];
    }
    maxCandy = *max_element(candies, candies+n);
    cout << "Enter the extra candies: " << endl;
    cin >> extraCandies;

    for(int i=0;i<n;i++)
    {
        if(candies[i] + extraCandies >= maxCandy)
            result[i] = 1;
        else
            result[i] = 0;
    }
    for(int i=0;i<n;i++)
    {
        cout  << result[i] << " ";
    }
    return 0;
}