// Cho n thanh pho, chi phi di lai giua cac thanh pho i va thanh pho j la C[i][j]
// Nguoi du lich bat dau tu thanh pho 1, di het tat ca thanh pho va quay lai thanh pho dau tien voi chi phi it nhat la bao nhieu
// su dung ky thuat nhanh canh

#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int n;
int c[100][100];
int X[100]; // X[i] = j ~ thanh pho thu i toi di qua la thanh pho J
int ans = INT_MAX;
int visited[100];
int dis = 0;
int cmin = INT_MAX;
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

            }
            // danh gia nhanh can
            else if(dis+(n-i+1)*cmin<ans) //so quang duong con phai di (n-i+1) voi chi phi di nho nhat
                //phai nho hon ans hien tai thi moi quay lui tiep
            {
                Try(i+1);
            }

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
            if(c[i][j]) cmin = min(cmin, c[i][j]); // chi phi nho nhat de di giua hai thanh pho
        }
    }
    X[1]=1;// xuat phat tu thanh pho so 1
    visited[1] =1; // thanh pho so 1 da di qua
    Try(2);
    cout<<ans<<endl;

}
