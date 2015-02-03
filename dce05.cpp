
/*
2015-02-03 12:21
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

	int y;
	cin>>y;
	y=y|y>>1;
	y=y|y>>2;
	y=y|y>>4;
	y=y|y>>8;
	y=y|y>>16;
	//y=y|y>>32;
	y=(y+1)>>1;
	cout<<y<<endl;

}

int main(){ _

	SOLVE()

	return 0;
}
