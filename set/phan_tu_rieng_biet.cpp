#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    set<int>se;
    for(int &x:a)
    {
        cin>>x;
        se.insert(x);
    }
    for(int x:se)
        cout<<x<<' ';
}
