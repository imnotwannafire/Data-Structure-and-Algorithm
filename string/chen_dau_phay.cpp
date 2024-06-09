// chen dau phay de phan chia hang don vi, tram nghin, trieu
#include<bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    cin>>s;
    int n = s.size();
    reverse(s.begin(), s.end());
    int idx=0;
    while(idx<n)
    {

        idx+=3;
        if(idx>=n) break;
        s.insert(idx,",");
        // cap nhat gia tri idx
        idx++;
        // Cap nhat do dai cho n
        n++;
    }
    reverse(s.begin(), s.end());
    cout<<s<<endl;


}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    solve();


    return  0;
}
