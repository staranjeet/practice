
/*
2015-01-20 11:14
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
}
pair<int, pair<int,int> > extendedEuclid(int a,int b){
	int x=1,y=0,xLast=0,yLast=1,m,n,q,r;
	while(a!=0){
		q=b/a;
		r=b%a;
		m=xLast-x*q;
		n=yLast-x*q;
		xLast=x;
		yLast=y;
		x=m;
		y=n;
		b=a;
		a=r;
	}
	return make_pair(b,make_pair(xLast,yLast));
}

int modularEuclidInverse(int a, int mod){
	return extendedEuclid(a,mod).second.first;
}

//using Fermat Little Theorem

int power(int base, int exp, int mod){
	int ans =1;
	while(exp){
		if(exp&1)
			ans=(ans*base)%mod;
		base=(base*base)%mod;
		exp>>=1;
	}
	return ans;
}

int modularFermatInverse(int a, int mod){
	return power(a,mod-2,mod);
}

int main(){ _

/*
For testing use a = 3, m= 11
ans = 4
*/
int a,m;
cin>>a>>m;
//cout<<modularEuclidInverse(a,m)<<endl;
cout<<modularFermatInverse(a,m)<<endl;

	//SOLVE()

	return 0;
}
