
/*
2015-03-25 23:00
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

int fib(int a,int b, int n){
	int dp[n+1];
	dp[0]=a;
	dp[1]=b;
	for(int i=2;i<=n;i++)
		dp[i]=dp[i-1]+dp[i-2];
	return dp[n-1];
}
void solve(){
	int a,b,x;
	cin>>a>>b>>x;
	cout<<fib(a,b,x)<<endl;
}

int main(){ _

	//SOLVE()
	solve();

	return 0;
}
