
/*
2015-01-17 00:39
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

	int n;
	cin>>n;
	vector<int>a(n);
	FOR(i,n)
		cin>>a[i];
	int c = 0, ans = 0;
	FOR(i,n){

		if(a[i]!=0)
			c++;
		else
		{
			ans=max(ans,c);
			c=0;
		}

	}
	ans=max(ans,c);
	cout<<ans<<endl;

}

int main(){ _

	solve();
	//SOLVE()

	return 0;
}
