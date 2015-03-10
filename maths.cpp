
/*
2015-03-10 09:31
practice
MAR 15
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
	cin>>s;
	int end=s.size()-1;
	int operand1=s[end--]-'0',operand2,ans=0;
	char oper;
	while(end>=0){
		oper=s[end--];
		operand2=s[end--]-'0';
		int temp;
		switch(oper){
			case '+' : temp=operand2+operand1;break;
			case '-' : temp=operand2-operand1;break;
			case '*' : temp=operand2*operand1;break;
			default : break;
		}
		operand1=temp;
		ans=temp;
	}
	cout<<ans<<endl;

}

int main(){ _

	SOLVE()

	return 0;
}
