// 1 xau gom ca chu so va chu cai
// tach ra thanh 2 xau, 1 xau chua chu cai, 1 xau chua chu so

// chen dau phay de phan chia hang don vi, tram nghin, trieu
#include<bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    cin>>s;
    int n = s.size();
    string res1="";
    string res2="";

    for(char x:s)
    {
        if(isdigit(x)) res1+=x;
        else res2 +=x;
    }

    cout<<res1<<endl;
    cout<<res2<<endl;



}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    solve();


    return  0;
}
