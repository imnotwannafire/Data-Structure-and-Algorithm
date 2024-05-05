// Tao email va mat khau tu ho ten va ngay thang nam sinh: le duc loc 01/01/1995 -> locd@xyz.edu.vn, 111995
#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
using ll = long long;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    for(int i = 0; i<n;i++)
    {
        string s;
        getline(cin,s);
        for(char &x:s)x = tolower(x);
        vector<string> v;
        stringstream ss(s);
        string word;
        while(ss>>word)
        {
            v.push_back(word);
        }
        int m = v.size();
        string email = v[m-2];
        for(int i = 0; i<m-2; i++)
        {
            email +=v[i][0];
        }
        email += "@xyz.edu.vn";
        cout<<email<<endl;
        string ns = v[m-1];
        cout<<ns<<endl;
        stringstream ss2(ns);
        while(getline(ss2,word,'/'))
        {
            cout<<stoi(word);
        }
        cout<<endl;

    }
    return 0;
}
