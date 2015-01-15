
/*
2015-01-15 19:09
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

int subsetCount(int a[],int n, int sum)
{
	int subset[sum+1][n+1];
	FOR(i,sum+1)
		FOR(j,n+1)
			subset[i][j]=0;
	FOR(i,n+1)
		subset[0][i]=1;
	FORS(i,1,sum+1)
		subset[i][0]=0;
	FORS(i,1,sum+1){
		FORS(j,1,n+1){
			subset[i][j]=subset[i][j-1];
				if(i>=a[j-1])
					subset[i][j]+=subset[i-a[j-1]][j-1];
		}
	}
	FOR(i,sum+1){
		FOR(j,n+1)
			cout<<subset[i][j]<<" ";
		cout<<"\n";
	}
}
int main(){ _

	//SOLVE()
	int a[]={3,34,4,12,5,2};
	subsetCount(a,6,9);

	return 0;
}
