
/*
2015-01-15 18:43
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

	string patt="abcdefghijklmnopqrstuvwxyz";
	int n,complete,partial;
	cin>>n;
	complete=n/25;
	partial=n%25;
	if(partial==0)
		partial=-1;
	for(int i=partial;i>=0;i--)
		cout<<patt[i];
	FOR(i,complete)
		{
			for(int j=patt.length()-1;j>=0;j--)
				cout<<patt[j];
		}
		cout<<endl;
}

int main(){ _

	SOLVE()

	return 0;
}
