#include<bits/stdc++.h>
using namespace std;
using ll = long long;


int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    vector<int> a(n);           // luu diem cua tung hoc sinh
    for(auto &x:a) cin >> x;
    vector<int> res(n);         // luu so keo cua tung hoc sinh
    res[0]=1;
    for(int i = 1; i< n; i++)
    {
        if(a[i]>a[i-1])
        {
            res[i] = res[i-1]+1;
        }
        else{
            res[i] = 1;
        }
    }
    // duyet theo chieu nghich
    for(int i = n-2; i>=0; i--)
    {
        int temp = res[i];
        if(a[i]>a[i+1])
        {
            temp = res[i+1]+1;
        }
        res[i] = max(res[i], temp);
    }
    int ans = 0;
    for(auto x: res)
    {
        cout << x << ' ';
    }

}
