#include <bits/stdc++.h>
using namespace std;
#define int long long

int N;//the number of test cases
int B;//number system
string S;
string D;

int charToInt(char c)
{
	if(isdigit(c))
	{
		return c-'0';
	}
	else
	{
		return c - 'A' + 10;
	}
}

char intToChar(int val)
{
	if(val<10)
	{
		return '0' + val;
	}
	else
	{
		return 'A' + val -10;
	}
}
string multiply(string S, string D, int B)
{
	int n = S.size();
	int m = D.size();

	reverse(S.begin(), S.end());
	reverse(D.begin(), D.end());

	// result string
	vector<int> result(n+m,0);
	// multiply each digits of S with digit of D
	for(int i = 0; i<n;i++)
	{
	    //cout<<i<<endl;
		for(int j = 0; j<m; j++)
		{
		    //cout<< j<<endl;
			int val = charToInt(S[i]) * charToInt(D[j]);

			//cout<<"val: "<<val<<endl;
			result[i+j] +=val;
			result[i+j+1] += result[i+j]/B;
			result[i+j] %=B;
			cout<<"result["<<i+j<<"]: "<<result[i+j]<<endl;
			//cout<<"result["<<i+j+1<<"]: "<<result[i+j+1]<<endl;
		}
	}
	//remove leading zero
	int idx = n+m-1;
	//cout<<"debug"<<endl;
	//	for(auto x:result){
     //   cout<<x;
	//}
	//cout<<endl;
	while(idx>0 && result[idx]==0)
	{
		idx--;
	}
	// convert the result vector back to string
	//for(auto x:result){
    //    cout<<x;
	//}
	//cout<<endl;
	string res = "";
	while(idx>=0)
	{
		res += intToChar(result[idx]);
		idx--;
	}

//	for(auto x:res)
//    {
//        cout<<x;
//    }
	return res;

}
void InputData(){
	cin >> B >> S >> D;
}
int32_t main(){
	int i;
	cin >> N;
	for(i = 0; i < N; i++){
		InputData();//input function
		//	write the code
		if(D == "0"|| S=="0")
        {
            cout<<"0"<<endl;
            return 0;
        }
		if((S[0] == '-' || D[0]=='-')&&
			(S[0]!='-'||D[0]!='-'))
		{
			cout<<"-";
		}
		if(S[0]=='-') S=S.substr(1);
		//cout<<S<<endl;

		if(D[0]=='-') D=D.substr(1);
		//cout<<D<<endl;
		string result = multiply(S,D,B);
		cout<<result<<endl;
	}
	return 0;
}
