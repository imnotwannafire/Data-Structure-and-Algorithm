// Cho xau S bao gom chu cai va so
// Tim so lon nhat xuat hien trong xau

#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string s;
    cin>>s;

    for(int i=0; i<s.length(); i++)
    {
        if(isalpha(s[i])) s[i] = ' '; // thay ky tu bang dau canh
    }
    stringstream ss(s);
    // cout<<s<<endl;
    string word;
    int max_val = 0;

    while(ss>>word)
    {

        int cur_val = stoi(word);
        max_val = max(max_val, cur_val);

    }
    cout<<max_val;
}
