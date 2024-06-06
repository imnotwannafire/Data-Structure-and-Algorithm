// Danh sach ke sang danh sach canh co huong
#include<bits/stdc++.h>
using namespace std;

void solve(int i, string s)
{
    stringstream ss(s);
    string tmp;
    vector<int> v;
    while(ss>>tmp)
    {
        int j = stoi(tmp);
        v.push_back(j);
    }
    sort(v.begin(), v.end());
    for(int x:v)
    {
        cout<<i<<' '<<x<<endl;
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin>> n;
    scanf("\n");
    for(int i=1; i<=n; i++)
    {
        string s;
        getline(cin, s);
        solve(i,s);
    }
}
