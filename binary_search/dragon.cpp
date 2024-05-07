// kirito la dung si diet rong, co chi so suc manh la s
// moi con rong co chi so suc manh la xi
// Neu danh bai 1 con rong thi suc manh tang them yi
// thang neu s>xi, thua neu s<=xi
// Lieu kirito co danh thang het dc rong khong
// Thu tu danh rong khong phai lan luot
// solution: sort theo suc manh cac con rong
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    long long n, s; // so luong con rong va suc manh cua kirito
    cin >> n>>s;
    vector<pair<ll, ll>> v;
    for (int i = 0; i<n; i++)
    {
        ll x,y;
        cin >> x>>y;
        v.push_back({x,y});

    }
    sort(v.begin(),v.end()); // sort vector theo chi so first trong pair
    for(int i=0;i<n;i++)
    {
        if(s<=v[i].first)
        {
            cout<<"NO";
            return 0;
        }
        s += v[i].second;
    }
    cout<<"YES";
    return 0;
}
