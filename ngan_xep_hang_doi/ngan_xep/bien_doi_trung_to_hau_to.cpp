// bien doi bieu thuc trung to ((A+B)*(C-D)) sang tien to *+AB-CD
// Gap dau ( thi  cho vao ngan xep
// gap dau ) thi pop cac toan tu giua 2 dau ( ra
// Gap toan tu thi xet do uu tien cua toan tu trong ngan xep
// pop cac toan tu trong ngan xep ra. push toan tu moi vao
// Gap toan hang thi them vao string
#include<bits/stdc++.h>
using namespace std;
using ll = long long;


// Tra ve muc do uu tien cua toan tu
int pre(char c)
{
    if(c=='*'||c=='/') return 2;
    else if(c=='+'||c=='-') return 1;
    return 0;
}

void solve(string s)
{

    stack<char> st;
    string res = "";
    for(char x:s)
    {
        if(x=='(') st.push(x); // Gap dau (
        else if(isalpha(x)) // Gap toan hang
        {
            res+=x;
        }
        else if(x==')') // Gap dau )
        {
            while(st.top()!='(')
            {
                res += st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            while(!st.empty()&& pre(st.top())>=pre(x))
            {
                res+=st.top();
                st.pop();
            }
            st.push(x);
        }
    }
    while(!st.empty()){
        res+=st.top();
        st.pop();
    }
    cout<<res;
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string s; cin>> s;
    solve(s);
}
