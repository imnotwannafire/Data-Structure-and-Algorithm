#include<bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    cin>>s;

    for(int i=0; i<s.size()-1; i++)
    {
        if(abs(s[i+1] -s[i])!=1)
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES";
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    solve();


    return  0;
}
