
/*
2015-01-16 14:57
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

#define SIZE 2500

bool isPrime[SIZE];

void sieve(){

	int i,j;
	isPrime[0]=isPrime[1]=false;
	FORS(i,2,SIZE)
		isPrime[i]=true;

	int m = sqrt(SIZE);

	FORS(i,2,m+1){
		if(isPrime[i]){
			for(int j=i*i;j<=SIZE;j+=i)
				isPrime[j]=false;
		}
	}

}

vector<int>primes;

void solve(){

	int x,y;
	cin>>x>>y;
	FOR(i,primes.size()){
		if(x+y-primes[i]<0){
			cout<<primes[i]-x-y<<endl;
			break;
		}
	}
}

int main(){ _

	sieve();
	FOR(i,SIZE)
	{
		if(isPrime[i])
			primes.PB(i);
	}
	//cout<<primes[0];
	SOLVE()

	return 0;
}
