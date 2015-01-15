
/*
2015-01-15 14:21
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

	string b;
	int a;
	cin>>a;
	cin>>b;
	if(a==0)
		cout<<b<<endl;	
	else
	{
	int gcd=a;
	int no=0;
	FOR(i,b.length()){
		no=(no*10+(b[i]-48))%a;
	}
	cout<<__gcd(no,a)<<endl;
	}
}

int main(){ _

	SOLVE()

	return 0;
}
