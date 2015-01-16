
/*
2015-01-16 11:50
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

	ll n,d,chops=0;
	cin>>n>>d;
	vector<int>chop(n);
	FOR(i,n)
		cin>>chop[i];
	sort(chop.begin(),chop.end());
	for(int i=0;i<n-1;){
		if(chop[i+1]-chop[i]<=d){
			chops++;
			i+=2;
		}
		else 
			i++;
	}
	cout<<chops<<endl;
}

int main(){ _

	solve();
	//SOLVE()

	return 0;
}
