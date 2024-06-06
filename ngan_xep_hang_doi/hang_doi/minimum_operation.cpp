#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int bfs(int s, int t)
{
    queue<pair<int,int>> q;
    q.push({s,0});
    set<int> se;
    se.insert(s);
    while(!q.empty())
    {
        pair<int, int> x = q.front();
        q.pop();
        if(x.first == t)
        {
            return x.second;
        }
        // thao tac tru di 1
        if(x.first>1 && se.count(x.first-1)==0)
        {
            q.push({x.first-1, x.second+1});
            se.insert(x.first-1);
        }
        // thao tac nhan 2
        if(se.count(x.first*2)==0&&x.first<t)
        {
            q.push({x.first*2, x.second+1});
            se.insert(x.first*2);
        }

    }
    return -1;

}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int a;
    cin>>a;
    while(a--)
    {
        int s, t;
        cin >> s >> t;
        cout<< bfs(s,t)<<endl;
    }
    return 0;
}
