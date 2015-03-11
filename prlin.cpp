
/*
2015-03-11 21:15
practice
MAR 15
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
#define MAX 1000001
bitset<MAX>b;

bitset<MAX> sieve(){
	bitset<MAX>b;
	b.set();
	b[0]=b[1]=0;
	int m=sqrt(MAX),i,j;
	for(i=2;i<=m;i++)
		if(b[i])
			for(j=i*i;j<=MAX;j+=i)
				b[j]=0;
	return b;
}
void solve(){

	//bitset<MAX>b=sieve();
	//cout<<b[2];
	int n;
	cin>>n;
	int max=(n*(n+1))/2;
	int min=max-n;
	min++;
	int c=0;
	for(int i=min;i<=max;i++)
		if(b[i])
			c+=i;
	cout<<c<<endl;



}

int main(){ _
	b=sieve();

	SOLVE()

	return 0;
}
