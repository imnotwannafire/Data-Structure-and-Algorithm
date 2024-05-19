#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int n;
int a[100][100];
int check = 0;
string s="";
// chuan bi luong di chuyen
int dx[2]={0,1}; //
int dy[2]={1,0}; //
string path = "DR";
void Try2(int i, int j) // Su dung vong for
{
    if(i==n&& j==n)
   {
       check = 1;
       cout<<s<<endl;
   }
   for(int k = 0; k<2; k++)
   {
       int i1 = i+dx[k];
       int j1 = j+dy[k];
       if(i1>=1 && i1<=n && j1>=1 &&j1<=n && a[i1][j1]==1)
       {
           a[i1][j1]=0;
           s+=path[k];
           Try2(i1, j1);
           a[i1][j1]=1;
           s.pop_back();
       }
   }
}
// thu di voi o i,j
void Try(int i, int j)
{
   if(i==n&& j==n)
   {
       check = 1;
       cout<<s<<endl;
   }
   //Thu i sang phai hoac xuong duoi
   // thu di xuong duoi (i,j)=> (i+1, j)
   if(i+1 <=n && a[i+1][j]==1)
   {
       a[i+1][j]=0;
       s+="D";
       Try(i+1, j);
       a[i+1][j]=1;
       s.pop_back();
   }
   // thu di sang phai
   if(j+1<=n && a[i][j+1]==1)
   {
       a[i][j+1] = 0;
       s+="R";
       Try(i, j+1);
       a[i][j+1]=1;
       s.pop_back();
   }
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n;
    for(int i = 1; i<=n; i++)
    {
        for(int j = 1; j<=n; j++)
        {
            cin>>a[i][j];
        }
    }
    Try2(1,1);
    if(check ==0)cout<<"-1";

}
