#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solved(string s)
{

    stack<int> st;
    int cnt=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]==')')
        {
            if(!st.empty()) st.pop();
            else cnt++;
        }
        else{
            st.push(s[i]);
        }
    }
    cnt +=st.size();
    cout<<cnt;
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string s;
    cin >> s;
    solved(s);
    return 0;
}
