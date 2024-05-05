// Tim trong xau cac tu co tan suat xuat hien nhieu nhat va nho nhat, neu 2 tu co cung tan xuat thi chon tu co thu tu tu dien lon hon
// Vi du: aa bb cc aa vv aa aa cc => aa: 4 cc 2
#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
using ll = long long;

int main()
{
    string s = "aa bb cc vv aa dd ee ae gg aa";
    map<string, int> mp;
    stringstream ss(s);
    string word;
    while(ss>>word){
        mp[word]++;
    }
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
        if(it.second>=ts_max)
        {
            ts_max = it.second;
            res2 = it.first;
        }
    }
    cout<<ts_max<<' '<<res2<<endl;
    cout<<ts_min<<' '<<res1<<endl;
}
