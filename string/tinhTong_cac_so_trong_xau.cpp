#include<bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    getline(cin,s);
    int sum=0;
    for(int i=0; i<s.size(); i++)
    {
        if(isdigit(s[i]))
        {
            int x = s[i]-'0';
            sum += x;
        }
    }
    cout<< sum;
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    solve();


    return  0;
}
