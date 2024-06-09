// Phuong phap tach tu

#include<bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string s;
    map<string, int> mp;
    //getline(cin,s);
    while(cin>>s)
    {
        cout<<s<<endl;
        mp[s]++;
    }
    for(auto it:mp)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
    return  0;
}
