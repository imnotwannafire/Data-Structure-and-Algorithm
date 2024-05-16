// Cho N va k
// Cho 1 cau hinh -> Day la cau hinh thu may (theo thu tu nguoc)
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n, k, final=0;
int a[100];
void khoi_tao()
{
    for(int i = 1; i<=k; i++)
    {
        a[i] = i;
    }
}
void sinh()
{
    int i = k;
    while(i>=1&a[i]==n-k+i)
    {
        --i;
    }
    if(i==0)
    {
        final = 1;
    }
    else
    {
        a[i]++;
        for(int j = i+1; j<=k; j++)
        {
            a[j] = a[j-1]+1;

        }
    }
}
vector<vector<int>> res; // chua cac tap con k
int main()
{

    cin >> n >> k;
    int x[100];
    for(int i = 0; i<k; i++)
    {
        cin >> x[i];
    }
    khoi_tao(); // khoi tao cau hinh ban dau
    while(final == 0)
    {
        vector<int> tmp(a+1, a+k+1);
        res.push_back(tmp);
        for(int i = 1; i<=k; i++)
        {
            cout<<a[i]<<' ';
        }
        sinh();
        cout<<endl;
    }
    for(int i = res.size()-1; i>=0; --i)
    {
        bool check = true;
        for(int j = 0; j<k; j++)
        {
            if(x[j]!=res[i][j]){
                check = false;
                break;
            }
        }
        if(check)
        {
            cout<< res.size() - i << endl;
            return  0;
        }
    }

    return 0;
}
