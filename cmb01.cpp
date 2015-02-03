
/*
2015-02-04 01:20
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

int reverse(int n){
	int s=0;
	while(n){
		s=s*10+(n%10);
		n/=10;
	}
	return s;
}


void solve(){

	int a,b;
	cin>>a>>b;
	int sum =reverse(a)+reverse(b);
	cout<<reverse(sum)<<endl;


}

int main(){ _

	SOLVE()

	return 0;
}
