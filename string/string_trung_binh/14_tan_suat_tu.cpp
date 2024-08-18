// tim tu co tan suat xuat hien lon nhat
#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string s;
    map<string, int> mp;
    while(cin>>s)
    {
        mp[s]++;
    }
    // map se tu dong sap xep theo thu tu tu dien cac key
    int ts_min = 1e9;
    int ts_max = 0;
    string res1, res2;
    for(auto it:mp)
    {
        if(it.second<=ts_min)
        {
            ts_min = it.second;
            res1 = it.first;
        }
        if(it.second >= ts_max)
        {
            ts_max = it.second;
            res2 = it.first;
        }
    }
    cout<< res1 << ' '<< ts_min<<endl;
    cout<< res2 << ' ' << ts_max;
    return 0;
}
