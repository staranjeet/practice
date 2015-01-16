
/*
2015-01-16 11:39
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

int main(){ _

	//SOLVE()
	ll n;
	cin>>n;
	if((n%6==0) ||(n%6==1)|| (n%6==3))
		cout<<"yes\n";
	else
		cout<<"no\n";

	return 0;
}
