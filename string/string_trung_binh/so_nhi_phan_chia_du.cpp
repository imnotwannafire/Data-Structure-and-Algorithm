
#include<bits/stdc++.h>
#define int long long
using namespace std;


int chiaDu(string s, int k)
{
    int h = 1; // 2^0
    int sum = 0;
    for(int i=s.size()-1; i>=0; i--)
    {
        sum = sum + (s[i]-'0')*h;
        sum%=k;
        h*=2;
        h%=k;
    }
    return sum;
}
int32_t main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string a;
    cin>>a;
    int k;
    cin>>k;
    int ans = chiaDu(a,k);

    cout<<ans;


    return 0;
}
