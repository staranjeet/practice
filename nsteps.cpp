
/*
2015-03-16 22:29
spoj
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

	int x,y;
	cin>>x>>y;
	if((x+y)&1)
		cout<<"No Number\n";

	else if (x-y==2 || x-y==0){
		if(x&1 && y&1)
			cout<<x+y-1<<"\n";
		else
			cout<<x+y<<"\n";
	}
	else
		cout<<"No Number\n";



}

int main(){ 

	SOLVE()

	return 0;
}
