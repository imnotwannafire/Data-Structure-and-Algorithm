#include<bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string s;
    getline(cin, s);
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='.'||s[i]==','||s[i]=='?'||s[i]=='!')
        {
            s[i]=' ';
        }
    }
    stringstream ss(s);
    string word;
    //getline(cin,s);
    while(ss>>word)
    {
        cout<<word<<" ";

    }

    return  0;
}
