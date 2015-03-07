
/*
2015-03-07 15:22
practice
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
#define MAX 1000001

int a[MAX];

void solve(){

	int n,x;
	cin>>n;
	FOR(i,n){
		cin>>x;
		a[x]++;
	}
	FOR(i,MAX){
		while(a[i]){
			cout<<i<<endl;
			a[i]--;
		}
	}
}

int main(){ _

	//SOLVE()
	solve();

	return 0;
}
