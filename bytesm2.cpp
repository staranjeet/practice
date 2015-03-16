
/*
2015-03-17 01:43
spoj
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

	int m,n;
	cin>>m>>n;
	int dp[m][n],X[n],Y[n];
	FOR(i,m)
	FOR(j,n)
	cin>>dp[i][j];

	FOR(i,n)
	Y[i]=dp[0][i];

	FORS(i,1,m){
		X[0]=dp[i][0];
		FOR(j,n){
			if(j==0)
				X[j]=dp[i][j]+max(Y[j],Y[j+1]);
			else if(j<n-1)
				X[j]=dp[i][j]+max(Y[j-1],max(Y[j],Y[j+1]));
			
			else
				X[j]=dp[i][j]+max(Y[j-1],Y[j]);
		}
		FOR(j,n)
		Y[j]=X[j];
	}

	int ans=X[0];
	FORS(k,1,n)
		ans=max(ans,X[k]);
	cout<<ans<<"\n";



}

int main(){ _

	SOLVE()

	return 0;
}
