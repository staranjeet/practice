
/*
2015-01-16 21:05
practice
JAN 15

*/

/*
this piece of code will find the smallest prime for a number using Sieve method.
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
#define LIM 100001

int smallPrime[LIM];

void sieve(){

	int i,j;
	for(i=0;i<LIM;i++)
		smallPrime[i]=i;

	for(i=2;i<LIM;i++){
		if(smallPrime[i]==i)
			for(j=2*i;j<LIM;j+=i)
				smallPrime[j]=min(smallPrime[j],i);
	}

}

void solve(){
}

int main(){ _

	sieve();
	cout<<smallPrime[99];
	//SOLVE()

	return 0;
}
