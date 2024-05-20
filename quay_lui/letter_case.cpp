// Cho xau ky tu S chi bao gom chu cai va chu so, co the thay doi chu cai trong xau thanh in hoa hoac in thuong
// nhung khong duoc thay doi vi tri band au.
// Hay liet ke cac xau khac nhau theo thu tu tang dan
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

string s;
set<string> res;
string tmp = "";
void Try(int idx)
{
    for(char x: {tolower(s[idx]), toupper(s[idx])})
        {
            tmp +=x;
            if(tmp.size()==s.size())
            {
                res.insert(tmp);
            }
            else{
                Try(idx+1);
            }
            tmp.pop_back();
        }
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> s;
    Try(0);
    for(string x:res)
    {
        cout<< x<< endl;
    }
}
