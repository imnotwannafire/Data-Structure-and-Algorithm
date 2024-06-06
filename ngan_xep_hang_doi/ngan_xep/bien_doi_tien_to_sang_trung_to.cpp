// Bien doi tien to sang trung to
// Duyet tu cuoi, neu gap toan toan hang thi cho vao ngan xep.
// gap toan tu thi pop cac toan hang ra
// chuyen xong thi lai cho vao ngan xep
#include<bits/stdc++.h>
using namespace std;
string trungtoTiento(string s)
{
    stack<string> st;
    string ans = "";
    for(int i=s.size()-1; i>=0; i--)
    {
        if(s[i]!='+'&&s[i]!='*'&&s[i]!='/'&&s[i]!='-')
        {
            string tmp(1,s[i]);
            st.push(tmp);
        }
        else{
            string x="";
            x = st.top();
            st.pop();
            string y="";
            y = st.top();
            st.pop();
            ans = "("+x+s[i]+y+")";
            st.push(ans);

        }
    }
    return ans;
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string s;
    cin>>s;
    cout<<trungtoTiento(s);
    return 0;

}
