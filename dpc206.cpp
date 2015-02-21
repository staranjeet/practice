
/*
2015-02-21 16:30
practice
FEB 15
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

ll reverse(ll n){
	ll s=0;
	while(n){
		s=s*10+(n%10);
		n/=10;
	}
	return s;
}

bool isPalin(ll n){
	if(n==reverse(n))return true;
	return false;
}

void solve(){

	ll n;
	cin>>n;
	int iter=0;
	while(!isPalin(n)){
		iter++;
		n=n+reverse(n);
	}
	cout<<iter<<" "<<n<<endl;

}

int main(){ _

	SOLVE()

	return 0;
}
