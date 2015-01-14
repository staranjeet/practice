
/*
2015-01-14 21:24
practice
JAN 15
*/
#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

typedef long long int ll;

#define FOR(i,n) for(int i = 0; i < n; i++)
#define FORS(i,a,n) for(int i = a; i < n; i++)
#define RDARR(a,n) FOR(i,n) cin>>a[i];
#define SOLVE() int t;cin>>t;FOR(tc,t) solve();
#define PB push_back

void solve(){

	string s;
	stack<char> sym;
	cin>>s;
	FOR(i,s.length()){
		if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/' || s[i]=='^' || s[i]=='%' || s[i]=='(')
			{
				sym.push(s[i]);
				//cout<<"sym = "<<s[i]<<endl;
			}
		else if(s[i]==')'){
			//cout<<i;
			/*char temp;
			while(1){
				//if(temp)
				temp=sym.top();
				if(temp=='(' || sym.empty())
					break;
				cout<<temp;
				sym.pop();
			}*/
			while(sym.top()!='('){
				cout<<sym.top();
				sym.pop();
			}
			if(sym.top()=='(')
				sym.pop();
		}
		else{
			cout<<s[i];
		}
	}
	
	cout<<endl;
}

int main(){ _

	SOLVE()

	return 0;
}
