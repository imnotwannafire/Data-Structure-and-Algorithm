#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int n, m;
char a[100][100];
string s; // luu target word
string tmp;
bool visited[100][100];
int ok = 0;
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};
void Try(int i, int j)
{
    cout<<tmp<<endl;
    if(ok == 1) return;
    if(tmp == s)
    {
        ok = 1;
        return;
    }
    for(int k = 0; k< 4; k++)
    {
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if(i1>=1&&i1<=n && j1>=1&& j1<=m && !visited[i1][j1])
        {
            tmp+=a[i1][j1];
            visited[i1][j1]=1;
            if(tmp == s){
                ok = 1;
            }
            else if(s.find(tmp)!= string::npos){//tim thay tmp la sau con cua s s thi moi di tiep
                Try(i1, j1);
            }
            tmp.pop_back();
            visited[i1][j1] = 0;
        }
    }

}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    for(int i = 1; i<=n; i++)
    {
        for(int j = 1; j<=m; j++)
        {
            cin >> a[i][j];
        }
    }
    cin >> s;
    for(int i =1; i<=n; i++)
    {
        for(int j =1; j<=n; j++)
        {
            if(a[i][j]==s[0])
            {
                memset(visited,0, sizeof(visited));
                tmp = "";
                tmp += a[i][j];
                visited[i][j] =1;
                Try(i,j);
                if(ok){
                    cout<<"YES\n";
                    return 0;
                }
            }
        }
    }
    cout<<"NO";





}
