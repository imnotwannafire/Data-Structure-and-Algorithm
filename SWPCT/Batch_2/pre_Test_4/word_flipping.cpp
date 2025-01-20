#include<bits/stdc++.h>
using namespace std;

int main()
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    string s;
    getline(cin, s);
    int n = s.size();
    string ans="";
    string word="";
    bool tag=false;
    for(int i=0; i<n; i++)
    {
        if(!tag)
        {
            if(s[i]=='<')
            {
                tag = true;

                if(word!="")
                {
                    string tmp;
                    for(char c:word)
                    {
                        if(c == ' ')
                        {
                            reverse(tmp.begin(), tmp.end());
                            ans+=tmp;
                            ans+=c;
                            tmp="";
                        }
                        else{
                            tmp+=c;
                        }
                    }
                    word="";
                    reverse(tmp.begin(), tmp.end());
                    ans+=tmp;
                }

                ans+=s[i];
                continue;
            }
            else
            {
                word+=s[i];
            }
        }
        else
        {
            ans+=s[i];
            if(s[i]=='>')
            {
                tag = false;
                continue;
            }
        }
    }
    if(word!="")
    {

        string tmp;
        for(char c:word)
        {
            if(c == ' ')
            {
                reverse(tmp.begin(), tmp.end());
                ans+=tmp;
                ans+=c;
                tmp="";
            }
            else{
                tmp+=c;
            }
        }
        word="";
        reverse(tmp.begin(), tmp.end());
        ans+=tmp;
    }
    cout<<ans;
    return 0;
}
