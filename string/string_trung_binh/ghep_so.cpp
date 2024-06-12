// Ghep cac so xuat hien trong xau ra 1 so lon nhat co the

#include<bits/stdc++.h>
using namespace std;

bool cmp(string a, string b)
{
    string t1 = a+b;
    string t2 = b+a;
    return t1>t2;
}
// Bo cac so 0 dang truoc
string xulySo(string num)
{
    int k = 0;
    while(k<num.size()-1&&num[k]=='0') k++;
    return num.substr(k);
}
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
    string word;
    int max_val = 0;
    string res="";
    // Tach so tu xau
    vector<string> nums;
    while(ss>>word)
    {
        nums.push_back(xulySo(word));
    }
    sort(nums.begin(), nums.end(), cmp);
    for(string x:nums)
    {
        res+=x;
    }
    cout<<res;
}
