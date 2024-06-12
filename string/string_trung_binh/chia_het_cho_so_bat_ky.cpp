#include<bits/stdc++.h>
using namespace std;
long long chiaDu(string s, long long k)
{
    long long mod=0;

    for(int i = 0; i< s.size(); i++)
    {
        mod = (mod*10+s[i]-'0')%k;
    }
    return mod;
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string s;
    cin>>s;
    long long k;
    cin>>k;
    cout<<chiaDu(s, k);
    return 0;
}
