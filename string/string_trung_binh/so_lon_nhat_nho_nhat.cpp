// Cho so tu nhien m va so nguyen khong am s.
// Tim so be nhat va lon nhat co m chu so va tong chu so bang s
#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int m, s;
    cin>>m>>s;
    string max_num(m,'0');
    string min_num(m,'0');
    // So chu so 9
    int n = s/9;
    // Phan du
    int k = s%9;
    if(9*m<s||s==0&&m>1)
    {
        cout<<"NOT FOUND";
        return;
    }
    for(int i=0; i<n; i++)
    {
        max_num[i]='9';
        min_num[m-1-i]='9';
    }
    max_num[n]='0'+k;
    if(m==n+1)
    {
        min_num[0]='0'+k;
    }
    else if(m>n+1)
    {
        min_num[0]='1';
        min_num[m-n-1]='0'+k-1;
    }
    cout<<max_num<<endl;
    cout<<min_num<<endl;


}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    solve();


    return  0;
}
