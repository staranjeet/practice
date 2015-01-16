
/*
2015-01-16 23:13
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
#define WRARR(a,n) FOR(i,n) cout<<a[i]<<" ";
#define SOLVE() int t;cin>>t;FOR(tc,t) solve();
#define PB push_back

void solve(){

	ll n,k,max=0;
	cin>>n>>k;
	vector<ll>a(n);
	FOR(i,n)
		{
			cin>>a[i];
			if(a[i]>max)
				max=a[i];
		}
	if(k==0)
		WRARR(a,n)
	else{
		k=(k&1)?1:2;
		FOR(j,k){
			max=a[0];
			FORS(i,1,n)
				if(a[i]>max)
					max=a[i];
			FOR(i,n)
				a[i]=max-a[i];


		}
		WRARR(a,n)
	}
	cout<<endl;
}

int main(){ _

	solve();
	//SOLVE()

	return 0;
}
