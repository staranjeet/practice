
/*
2015-05-23 02:47
MAY 15
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
	int x=0;
	string s;
	while(n--){
		cin>>s;
		if(s.find('+')!=string::npos)
			x++;
		else
			x--;
	}
	cout<<x<<"\n";

}

int main(){ _

	//SOLVE()
	solve();
	return 0;
}
