
/*
2015-01-15 01:38
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

	ll range,a,b,c,x1,x2,x3,y1,y2,y3;
	cin>>range;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	a=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
	b=(x1-x3)*(x1-x3)+(y1-y3)*(y1-y3);
	c=(x2-x3)*(x2-x3)+(y2-y3)*(y2-y3);
	//cout<<a<<" "<<b<<" "<<c;
	range*=range;
	if((a<=range && b<=range) || (c<=range && b<=range) || (a<=range && c<=range))
		cout<<"yes\n";
	else
		cout<<"no\n";
}

int main(){ _

	SOLVE()

	return 0;
}
