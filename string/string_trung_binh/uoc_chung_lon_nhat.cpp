// tim UCLN cua 2 so 1000 chu so
// Su dung thuat toan euclide

#include<bits/stdc++.h>
#define int long long
using namespace std;


int gcd(int a, int b)
{
    while(b)
    {
        int t = a%b;
        a = b;
        b = t;
    }
    return a;
}
int chiaDu(string s, int k)
{
    int mod = 0;
    for(int i = 0; i<s.size(); i++)
    {
        mod = (mod*10 + s[i]-'0')%k;
    }
    return mod;
}
int32_t main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string a;
    cin>>a;
    int k;
    cin>>k;
    int ans=0;
    int tmp = chiaDu(a,k);
    ans = gcd(k,tmp);
    cout<<ans;


    return 0;
}
