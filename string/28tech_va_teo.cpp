// Xoa het cac ky tu xuat hien trong tu 28tech ra khoi sau s

#include<bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    cin>>s;
    string res="";

    for(int i=0; i< s.size(); i++)
    {
        if(s[i]=='2'||s[i]=='8'||s[i]=='t'||s[i]=='e'||s[i]=='c'||s[i]=='h')
        {
            continue;
        }
        else res+=s[i];
    }

    if(res.size()==0) cout<<"EMPTY"<<endl;
    else cout<<res;



}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    solve();


    return  0;
}
