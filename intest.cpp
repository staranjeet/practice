
/*
2015-01-13 23:28
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

void solve(){
}

int main(){ _

	//SOLVE()
	int n,k,c=0,x;
	cin>>n>>k;
	FOR(i,n){
		cin>>x;
		if(x%k==0)
			c++;
	}
	cout<<c<<endl;

	return 0;
}
