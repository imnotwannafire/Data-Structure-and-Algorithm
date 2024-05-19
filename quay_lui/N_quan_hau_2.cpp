// quy uoc: X1, X2, ...Xn tuong ung dat con hau o hang 1,2..n
// Chon Cot va duong cheo la xong
// Duong cheo xuoi 2n-1 duong cheo
// Moi lien he giua so thu cua duong cheo voi hang i cot j: hang tang thi so cua duong cheo tang, cot tang thi so thu tu duong cheo giam
// So thu tu Duong cheo xuoi = N+ (i - j)
// So thu tu duong cheo nguoc = i+j-1
// Cho ban co 8x8, moi o a[i][j] co 1 gia tri Ai. Tim cau hinh dat cac quan hau sao cho tong cac o a[i][j] la lon nhat
#include<bits/stdc++.h>
using namespace std;

using ll = long long;


int n=8, X[100];
int cot[100];
int cheo1[100]; // duong cheo xuoi
int cheo2[100]; // duong cheo nguoc
int a[100][100];
int ans = 0;
void Try(int i)
{
    for(int j = 1; j<=n; j++)
    {
        // lua chon cot j de dat con hau hang i
        // X[i] = j
        // kiem tra
        if(cot[j]==0 && cheo1[n+i-j]==0 && cheo2[i+j-1]==0)
        {
            X[i] = j;
            cot[j] = 1;
            cheo1[i-j+n] = 1;
            cheo2[i+j-1] = 1;
            if(i==n)
            {
                int sum = 0;
                for(int hang = 1; hang<=n; hang++)
                {
                    sum += a[hang][X[hang]];

                }
                ans = max(ans, sum);
            }
            else{
                Try(i+1);
            }
            cot[j] = 0;
            cheo1[i-j+n]= 0;
            cheo2[i+j-1]= 0;
        }
    }
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    for(int i =1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cin >> a[i][j];
        }
    }
    Try(1);
    cout<<ans<<endl;

}
