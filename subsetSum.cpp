
/*
2015-01-15 10:29
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
}

void subsetSum(int a[], int n,int sum){
	int i,j;
	bool subset[sum+1][n+1];
	for(i=0;i<=n;i++)
		subset[0][i]=true;
	for(i=1;i<=sum;i++)
		subset[i][0]=false;
	for(i=1;i<=sum;i++){
		for(j=1;j<=n;j++){
			subset[i][j]=subset[i][j-1];
			if(i>=a[j-1])
				subset[i][j]=subset[i][j]||subset[i-a[j-1]][j-1]; 	
		}
	}
	for(i=0;i<=sum;i++){
		for(j=0;j<=n;j++)
			cout<<subset[i][j]<<" ";
		cout<<"\n";
	}
}
int main(){ _

	//	SOLVE()
	int a[]={3,34,4,12,5,2};
	subsetSum(a,6,9);
	return 0;
}
