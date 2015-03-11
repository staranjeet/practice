
/*
2015-03-11 19:38
longest common sequence
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

int lcs(string s,string t, int m,int n){
	int dp[m+1][n+1];

	FOR(i,m+1)
	dp[i][0]=0;
	FOR(i,n+1)
	dp[0][i]=0;

	FORS(i,1,m+1){
		FORS(j,1,n+1){
			if(s[i-1]==t[j-1])
				dp[i][j]=dp[i-1][j-1]+1;
			else
				dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		}
	}
	
	return dp[m][n];
}


void solve(){

	string s,t;
	cin>>s>>t;
	cout<<lcs(s,t,s.size(),t.size())<<endl;


}

int main(){ _

	//SOLVE()
	solve();

	return 0;
}
