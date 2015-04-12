
/*
2015-04-12 10:45
APR 15
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
#define MAX 100005

int a[MAX];

void solve(){

	int n;
	cin>>n;
	RDARR(a,n)
	int c=0;

	FORS(i,1,n-1){

		if(i==1 && a[i]!=a[i-1])
			c++;
		if(i==n-2 && a[i]!=a[i+1])
			c++;
		if(a[i-1]==a[i] && a[i]==a[i+1] )
			continue;
		else
			c++;
	}
	cout<<c<<"\n";

}

int main(){ _

	SOLVE()

	return 0;
}
