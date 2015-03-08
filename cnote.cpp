
/*
2015-03-08 00:58
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

void solve(){

	int x,y,k,n,m,p;
	cin>>x>>y>>k>>n;
	x=x-y;
	bool flag=false;
	FOR(i,n){
		cin>>m>>p;
		if(p<=k && m>=x)
			flag=true;
	}
	if(flag)
		cout<<"LuckyChef\n";
	else
		cout<<"UnluckyChef\n";


}

int main(){ _

	SOLVE()

	return 0;
}
