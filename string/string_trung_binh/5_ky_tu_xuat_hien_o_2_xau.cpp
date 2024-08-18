// Tim ky tu xuat hien o ca 2 xau
// Tim ky tu xuat hien o 1 trong 2 xau

#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string s,t;
    cin >> s >> t;
    int cnt1[256]={0};
    int cnt2[256]={0};
    for(char c:s)
    {
        cnt1[c] = 1;
    }
    for(char x:t)
    {
        if(cnt1[x]==1)
        {
            cnt2[x] = 1;
        }else{
            cnt1[x] = 1;
        }
    }
    for(int i=0; i<256; i++)
    {
        if(cnt1[i]==1)
        {
            cout<<(char)i;
        }


    }
    cout<<endl;
    for(int i=0; i<256; i++)
    {


        if(cnt2[i]==1) cout<<(char)i;
    }
}
