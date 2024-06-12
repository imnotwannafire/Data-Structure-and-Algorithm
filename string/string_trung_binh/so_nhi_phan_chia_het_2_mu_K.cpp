// So nhi phan chia het cho 2 mu k neu k so cuoi cung la khong

#include<bits/stdc++.h>
#define int long long
using namespace std;


bool check(string s, int k)
{
    int n = s.size()-1;
    for(int i=n; i>n-k; i--)
    {
        cout<< s[i];
        if(s[i]!='0') return false;
    }
    return true;
}
int32_t main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string a;
    cin>>a;
    int k;
    cin>>k;
    if(check(a, k)) cout<< "YES";
    else cout<<"NO";



    return 0;
}
