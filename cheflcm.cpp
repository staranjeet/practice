
/*
2015-04-12 11:06
APR 15
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
	ll sum=1;
	int m=sqrt(n);
	for(int i=2;i<=m;i++){
		if(n%i==0){
			sum+=(i)+(n/i);
		}
	}
	if(m*m==n)
		sum-=m;
	sum+=n;
	cout<<sum<<"\n";


}

int main(){ _

	SOLVE()

	return 0;
}
