#include<bits/stdc++.h>
using namespace std;
int main()
{
    // pair<int, int> p = {1, 4};
    // int n;
    // cout<<p.first<< " "<<p.second<<endl;

    // pair<int, char> pc = {1, 'c'};
    // cout << "num : "<< pc.first << " Char : "<< pc.second;

    pair<int, char> obj [] ={
        {1, 'a'},
        {2, 'b'},
        {3, 'c'},
        {4, 'd'},
        {5, 'e'},
        {6, 'f'},
    };
  for(auto &p : obj){
    cout<< p.first << " " << p.second << endl;
  }
    return 0;
}