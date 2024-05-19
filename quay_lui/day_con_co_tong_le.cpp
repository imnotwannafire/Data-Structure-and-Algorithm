#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int n;
int a[100];
int X[100];
vector<vector<int>> res;
vector<int> tmp;
void Try(int idx, int sum)
{
    for(int j = idx; j<n; j++)
    {
        sum += a[j];
        tmp.push_back(a[j]);
        if(sum %2 == 1 )
        {
            res.push_back(tmp);
        }
        Try(j+1, sum);
        tmp.pop_back();
        sum -= a[j];
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin>>n;
    for(int i = 0; i< n; i++) cin>>a[i];
    Try(0, 0);
    if(res.size()==0)
    {
        cout<<"NOT FOUND"<<endl;
        return 0;
    }
    sort(res.begin(),res.end());
    for(vector<int> tmp : res)
    {
        for(int x:tmp) cout<<x<<" ";
        cout<<endl;
    }
    return 0;

}
