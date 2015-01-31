
/*
2015-01-17 01:01
practice
JAN 15
wrongans
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
	ll max=0,min=1000000000,maxdex=0,mindex=0;
	ll x1,x2,x3,y1,y2,y3;
	FOR(i,n){
		cin>>x1>>y1>>x2>>y2>>x3>>y3;
		ll area = (x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))/2;
		area=abs(area);
		if(area >= max)
		{
			max=area;
			maxdex=i;
		}
		if(area <= min){
			min=area;
			mindex=i;
		}
	}
	cout<<mindex+1<<" "<<maxdex+1<<endl;
}

int main(){ _

	solve();
	//SOLVE()

	return 0;
}
