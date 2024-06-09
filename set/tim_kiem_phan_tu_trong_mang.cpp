#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;
    vector<int>a(n);
    set<int>se;
    for(int &x:a)
    {
        cin>>x;
        se.insert(x);
    }
    if(se.count(k)!=0)
    {
        cout<<"YES";
    }
    else cout<<"NO";
}
