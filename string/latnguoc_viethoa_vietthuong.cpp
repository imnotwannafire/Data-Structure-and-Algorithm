// Cho xau ky tu S khong qua 10000 ky tu
// Viet 3 ham lat nguoc, in hoa, in thuong xau ky tu
#include<bits/stdc++.h>

using namespace std;

void latNguoc(string s)
{
    reverse(s.begin(), s.end());
    cout<<s<<endl;
}

void vietThuong(string s)
{
    for(int i=0; i< s.size();i++)
    {
        if(isalpha(s[i])) s[i]=tolower(s[i]);

    }
    cout<<s<<endl;
}

void vietHoa(string s)
{
    for(int i=0; i< s.size();i++)
    {
        if(isalpha(s[i])) s[i]=toupper(s[i]);

    }
    cout<<s<<endl;
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string s;
    getline(cin, s);
    latNguoc(s);
    vietHoa(s);
    vietThuong(s);

}
