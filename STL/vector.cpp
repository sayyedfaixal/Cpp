#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> myV;
    int n;
    cin>>n;
    for(int i=0; i< n; i++)
    {
        int x;
        cin >>x;
        myV.push_back(x);
    }
    for(auto it :myV)
    {
        cout<<it << " ";
    }
    return 0;
}