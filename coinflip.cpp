
/*
2015-01-15 01:54
practice
JAN 15
wrongans

*/
#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

typedef long long int ll;

#define FOR(i,n) for(int i = 0; i < n; i++)
#define FORS(i,a,n) for(int i = a; i < n; i++)
#define RDARR(a,n) FOR(i,n) cin>>a[i];
#define SOLVE() int t;cin>>t;FOR(tc,t) solve();
#define PB push_back+

void solve(){

	int g;
	ll i,n,q,tails,heads;
	cin>>g;
	while(g--){
		cin>>i>>n>>q;
		if(n%2==0){
			heads=n/2;tails=n/2;
		}
		else{		// n is odd

			if(i==1){
				heads=n/2;tails=n-heads;
			}
			else{
				tails=n/2;heads=n-tails;
			}

		}
		if(q==1)
			cout<<heads<<"\n";
		else
			cout<<tails<<"\n";
	}
}

int main(){ _

	SOLVE()

	return 0;
}
