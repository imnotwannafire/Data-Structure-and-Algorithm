#include<bits/stdc++.h>
using namespace std;

int n, m;
vector<int> adj[100005];
vector<int> used(100005, false);
set<int> st;
void dfs(int u)
{
    used[u]=true;
    cout<<u<<' ';
    for(int v:adj[u])
    {
        if(!used[v])
        {
           st.insert(v);
        }

    }
//    set<int>::iterator itr;
//    cout<<"set value: ";
//    for (itr = st.begin(); itr != st.end(); itr++) {
//        cout << *itr << " ";
//    }
//    cout << endl;
    if(st.size()!=0)
    {
        int v1 = *st.begin();
//        cout<<"v1: "<<v1<<endl;
        st.erase(st.begin());
        dfs(v1);
    }


}
int main()
{
    cin>>n>>m;
    for(int i=0; i<m; i++)
    {
        int u, v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1);
    return 0;
}
