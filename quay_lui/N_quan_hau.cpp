#include<bits/stdc++.h>
using namespace std;

using ll = long long;
// quy uoc: X1, X2, ...Xn tuong ung dat con hau o hang 1,2..n
// Chon Cot va duong cheo la xong
// Duong cheo xuoi 2n-1 duong cheo
// Moi lien he giua so thu cua duong cheo voi hang i cot j: hang tang thi so cua duong cheo tang, cot tang thi so thu tu duong cheo giam
// So thu tu Duong cheo xuoi = N+ (i - j)
// So thu tu duong cheo nguoc = i+j-1

int n, X[100];
int cot[100];
int cheo1[100]; // duong cheo xuoi
int cheo2[100]; // duong cheo nguoc
int cnt = 0;
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
                cnt++;
                for(int i = 0; i<=n; i++)
                {
                    cout<< "con hau hang "<< i<< " nam o cot "<< X[i]<< endl;

                }
                cout<<endl;
            }
            else{
                Try(i+1);
            }
            X[i] = 0;
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
    cin >> n;
    Try(1);
    cout<<cnt<<endl;

}
