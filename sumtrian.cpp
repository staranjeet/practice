
/*
2015-01-14 20:31
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
#define SIZE 1001

int a[SIZE][SIZE];

void solve(){

	int n;
	cin>>n;
	FOR(i,n)
		FOR(j,i+1)
			cin>>a[i][j];

	for(int i=n-2;i>=0;i--){
		for(int j=n-2;j>=0;j--){
			a[i][j]=a[i][j]+max(a[i+1][j],a[i+1][j+1]);
		}
	}

	
	cout<<a[0][0]<<endl;
}

int main(){ _

	SOLVE()

	return 0;
}
