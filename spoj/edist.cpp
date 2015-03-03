
/*
2015-03-03 10:00
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

int edit_distance(string s, string t,int m, int n){

	// <s,m,j,> and <t,n,i>
	int dp[n+1][m+1];

	FOR(i,m+1)
	dp[0][i]=i;
	FOR(j,n+1)
	dp[j][0]=j;

	FORS(i,1,n+1){
		FORS(j,1,m+1){

			dp[i][j]=min(1+dp[i-1][j],min(1+dp[i][j-1],dp[i-1][j-1]+(int)(t[i-1]!=s[j-1])));

		}
	}

	FOR(i,n+1){
		FOR(j,m+1)
		cout<<dp[i][j]<<" ";
		cout<<endl;
	}
	return dp[n][m];


}

int d_edit_distance(string s,string t,int m,int n){
	int X[m+1],Y[m+1];

	FOR(i,m+1)
	Y[i]=i;
	//X[0]=1;
	FORS(i,1,n+1){
		X[0]=i;
		FORS(j,1,m+1){

			X[j]=min(X[j-1]+1,min(1+Y[j],(int)(t[i-1]!=s[j-1])+Y[j-1]));

		}

		FOR(I,m+1)
			Y[I]=X[I];
	}
	return Y[m];
}


void solve(){

	string s,t;
	cin>>s>>t;
	cout<<d_edit_distance(s,t,s.size(),t.size())<<endl;

}

int main(){ _

	SOLVE()

	return 0;
}
