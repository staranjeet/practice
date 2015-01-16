
/*
2015-01-16 10:43
practice
JAN 15
long long caused two WA
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

	
	ll sum=0,sumn,x,n;
	cin>>n;
	FOR(i,n){
		cin>>x;
		sum+=x;
	}
	sumn=(n*(n+1))/2;
	string ans= (sum==sumn)?"YES":"NO";
	cout<<ans<<endl;
}

int main(){ _

	solve();
	//SOLVE()

	return 0;
}
