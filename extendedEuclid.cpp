
/*
2015-01-17 21:52
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

int main(){ _

	//SOLVE()

	int a = 240, b = 46;
	int q,r,s1=1,s2=0,t1=0,t2=1;	
	while(b!=0){
		q=a/b;
		r=a-q*b;
		a=b;b=r;
		r=s1-q*s2;s1=s2;s2=r;
		r=t1-q*t2;t1=t2;t2=r;
	}
	cout<<a<<" "<<s2<<" "<<t2<<endl;
	return 0;
}
