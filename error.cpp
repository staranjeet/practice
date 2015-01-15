
/*
2015-01-15 20:34
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
#define SIZE 100001

void solve(){

	char s[SIZE];
	cin>>s;
	if(strstr(s,"101"))
		cout<<"Good\n";
	else if(strstr(s,"010"))
		cout<<"Good\n";
	else
		cout<<"Bad\n";
}

int main(){ _

	SOLVE()

	return 0;
}
