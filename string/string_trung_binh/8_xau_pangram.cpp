// Xau pangram la xau chua tat ca cac ky tu tu a-z khong phan biet in hoa va in thuong
// Kiem tra xau dau vao co phai pangram hay khong

#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string s;
    cin >> s;
    int cnt1[256]={0};

    for(char c:s)
    {
        cnt1[tolower(c)] = 1;
    }
    for(int i = (int)'a'; i<=(int)'z'; i++)
    {
        if(cnt1[i]==0)
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;

}
