
/*
2015-02-04 01:30
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

void solve(){

	int n,x;
	int ans=0;
	cin>>n;
	FOR(i,n){
		cin>>x;
		if(x&1)
			ans++;
		else
			ans--;
	}
	cout<<abs(ans)<<endl;

}

int main(){ _

	//SOLVE()
	solve();

	return 0;
}
