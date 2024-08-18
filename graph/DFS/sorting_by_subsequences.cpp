#include<bits/stdc++.h>
using namespace std;

#define maxn 100005
vector<int> used(maxn, 0);
vector<int> adj[maxn];
vector<vector<int>> ss; //subsequences
int n;
void dfs(int u, vector<int>&tmp)
{
    used[u]=1;
    tmp.push_back(u);
    for(int v:adj[u])
    {
        if(used[v]==1)
        {
            ss.push_back(tmp);
            return;
        }
        else{
            dfs(v, tmp);
        }
    }
}
int main()
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    cin>>n;
    vector<int> a(n+1,0);
    vector<int> b(n+1,0);
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b.begin()+1, b.end());
    for(int i=1; i<=n; i++)
    {
        int u = a[i];
       int pos = lower_bound(b.begin()+1, b.end(), u)-b.begin();
       adj[i].push_back(pos);
    }

    for(int i=1; i<=n; i++)
    {
        vector<int> tmp;
        if(used[i]==0)
        {
            dfs(i, tmp);
        }
    }
    cout<<ss.size()<<endl;
    for(auto tmp:ss)
    {
        cout<<tmp.size()<<' ';
        for(int x:tmp)cout<<x<<' ';
        cout<<endl;
    }
    return 0;

}
