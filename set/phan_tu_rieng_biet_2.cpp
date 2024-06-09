// liet ke cac gia tri xuat hien trong mang theo thu tu xuat hien
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    set<int>se;
    for(int &x:a)
    {
        cin>>x;
    }
    for(int i = 0; i<n; i++)
    {
        if(se.count(a[i])==0)
        {
            cout<<a[i]<<' ';

        }
        se.insert(a[i]);
    }

}
