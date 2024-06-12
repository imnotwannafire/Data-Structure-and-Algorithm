// Cho xau S.
// Tim xau con lien tiep chua cac ky tu giong nhau dai nhat
// Neu co nhieu xau con cung do dai thi chon xau co thu tu tu dien lon nhat

#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string s;
    cin>>s;
    int max_len = 1;
    string cur_str=string(1,s[0]);
    string max_val =string(1,s[0]);
    for(int i=1; i<s.length(); i++)
    {
        // bang nhau thi them vao cuoi
        if(s[i]==s[i-1])
        {
            cur_str+=s[i];
        }
        else // khac nhau thi reset current string
        {
            cur_str = string(1,s[i]);;
        }
        if(cur_str.length()>max_len||cur_str.length()==max_len && cur_str > max_val)
        {
            max_len = cur_str.length();
            max_val = cur_str;
        }
    }
    cout<<max_val;
}
