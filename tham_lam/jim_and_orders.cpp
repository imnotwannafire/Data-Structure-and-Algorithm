#include<bits/stdc++.h>
using namespace std;
using ll = long long;
bool compare(pair<int, pair<int,int>> a, pair<int, pair<int,int>> b)
{
    if(a.second.first+a.second.second != b.second.first+b.second.second)
    return a.second.first+a.second.second < b.second.first+b.second.second;
    else return a.first < b.first;
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin>> n;
    vector<pair<int, pair<int, int>>> a(n);
    for(int i = 0; i< n; i++)
    {
        a[i].first = i+1;
        cin>>a[i].second.first>>a[i].second.second;

    }
    sort(a.begin(), a.end(), compare);
    for(int i = 0; i< n; i++)
    {
       cout<< a[i].first<<' '<<endl;

    }
}
