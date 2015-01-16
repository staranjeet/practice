
/*
2015-01-16 12:14
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

	double l,d,s,c;
	cin>>l>>d>>s>>c;
	//if(s*(pow(c+1,d-1))>=l)
	if((d-1)*(log(1.0+c))>=(log(l)-log(s)))
		cout<<"ALIVE AND KICKING\n";
	else
		cout<<"DEAD AND ROTTING\n";
}

int main(){ _

	SOLVE()

	return 0;
}
