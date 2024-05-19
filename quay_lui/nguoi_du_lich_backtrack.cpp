// Cho n thanh pho, chi phi di lai giua cac thanh pho i va thanh pho j la C[i][j]
// Nguoi du lich bat dau tu thanh pho 1, di het tat ca thanh pho va quay lai thanh pho dau tien voi chi phi it nhat la bao nhieu
// Quay lui binh thuong thi thoi gian se rat lau vi phai goi de quy nhieu lan
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int n;
int c[100][100];
int X[100]; // X[i] = j ~ thanh pho thu i toi di qua la thanh pho J
int ans = INT_MAX;
int visited[100];
int dis = 0;
void Try(int i)
{
    for(int j =1; j<=n; j++)
    {
        if(!visited[j])
        {
            X[i] = j;
            visited[j] = 1;
            dis += c[X[i-1]][X[i]]; // chi phi di giua 2 thanh pho X[i-1] va thanh pho hien tai X[i]
            if(i == n){
                // cap nhat ket qua
                // quay lai thanh pho 1

                ans = min(dis+c[X[n]][1], ans);

            }else Try(i+1);
            visited[j] = 0;
            dis -= c[X[i-1]][X[i]];
        }
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
            cin>>c[i][j];
        }
    }
    X[1]=1;// xuat phat tu thanh pho so 1
    visited[1] =1; // thanh pho so 1 da di qua
    Try(2);
    cout<<ans<<endl;

}
