
/*
2015-01-20 10:59
template
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
}

pair<int, pair<int,int> >extendedEuclid(int a,int b)
{
	int x=1,y=0,xLast=0,yLast=1,q,r,m,n;
	while(a!=0){
		q=b/a;
		r=b%a;
		m=xLast-x*q;
		n=yLast-y*q;
		xLast=x;
		yLast=y;
		x=m;
		y=n;
		b=a;
		a=r;
	}
	return make_pair(b,make_pair(xLast,yLast));
}
int main(){ _

	//SOLVE()
	/* 
	For testing a = 240, b = 46, gcd = 2, xlast = -9,ylast = 47
	*/
	int a,b;
	cin>>a>>b;
	pair<int, pair<int,int> > p1= extendedEuclid(a,b);
	pair<int,int> p2 = p1.second;
	cout<<p1.first<<" "<<p2.first<<" "<<p2.second<<endl;

	return 0;
}
