
/*
2015-01-16 23:36
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

bool isSubsetSum(vector<int>a, int n, int sum){
	int i,j;
	bool subset[sum+1][n+1];
	FOR(i,n+1)
		subset[0][i]=true;
	FORS(i,1,sum+1)
		subset[i][0]=false;
	FORS(i,1,sum+1){
		FORS(j,1,n+1){
			subset[i][j]=subset[i][j-1];
			if(i>=a[j-1])
				subset[i][j]=subset[i][j]||subset[i-a[j-1]][j-1];
		}
	}
	return subset[sum][n];
}

void solve(){

	int n,k;
	cin>>n>>k;
	vector<int>a(n);
	FOR(i,n)
		cin>>a[i];
	if(isSubsetSum(a,n,k))
		cout<<"Yes\n";
	else
		cout<<"No\n";
}

int main(){ _

	SOLVE()

	return 0;
}
