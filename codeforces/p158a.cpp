
/*
2015-05-22 14:43
MAY 15
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
#define LIM 51

int a[LIM];

void solve(){

	int n,k;
	cin>>n>>k;
	FOR(i,n)
		cin>>a[i];

	int c=0;

	FOR(i,n){
		if(a[i]>0 && a[i]>=a[k-1])
			c++;
	}
	cout<<c<<"\n";


}

int main(){ _

	//SOLVE()
	solve();
	return 0;
}
