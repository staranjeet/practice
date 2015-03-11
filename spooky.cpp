
/*
2015-03-11 22:49
CDPH2015
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

bool isSubSetSum(vector<int>a,int n,int sum){

	bool dp[sum+1][n+1];

	FOR(i,n+1)
		dp[0][i]=true;
	FORS(j,1,sum+1)
		dp[j][0]=false;

	FORS(i,1,sum+1){
		FORS(j,1,n+1){
			dp[i][j]=dp[i][j-1];
			if(i>=a[j-1])
				dp[i][j]=dp[i][j]||dp[i-a[j-1]][j-1];
		}
	}

	if(dp[sum][n])return true;
	return false;
}


void solve(){
	int a[]={1,2,4,5,10};
	ll n,sum=1;
	cin>>n;
	vector<int>factors;
	factors.PB(1);
	int m=sqrt(n);
	
	FORS(i,2,m+1)
		{
			if(n%i==0){
				factors.PB(i);
				sum+=i;
				if(i!=(n/i)){
				factors.PB(n/i);
					sum+=(n/i);
				}
			}
		}
	if(sum>n && !isSubSetSum(factors,factors.size(),n))
	cout<<"SPOOKY\n";
	else
		cout<<"OK\n";
	
}

int main(){ _

	SOLVE()

	return 0;
}
