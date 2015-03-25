
/*
2015-03-25 23:34
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

void solve(){
	int n,temp,star;
	cin>>n;
	FOR(i,n){
		temp=(2*n)-i-i;
		FOR(j,i)
		cout<<"-";
		FOR(j,temp)
		cout<<"*";
		FOR(j,i)
		cout<<"-";
		cout<<"\n";

	}
	for(int i=n-1;i>0;i--){
		temp=2*n-i-i;
		FOR(j,i)
		cout<<"-";
		cout<<"*";
		star=temp-2;
		FOR(j,star)
		cout<<"-";	
		cout<<"*";
		FOR(j,i)
		cout<<"-";
		cout<<"\n";
	}
	FOR(j,2*n)
	cout<<"*";
	cout<<"\n";
}

int main(){ _

	//SOLVE()
	solve();

	return 0;
}
