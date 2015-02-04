
/*
2015-02-04 07:52
practice
FEB 15
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
#define MAX 100001

int primes[MAX];
int range[11][MAX];

void precomputeSieve(){
	int i,j;
	FOR(i,MAX)
		primes[i]=1;
	primes[0]=primes[1]=0;
	int m =sqrt(MAX);
	FORS(i,2,MAX){
		if(primes[i]==1){			//a prime number is found
			for(int j=i+i;j<MAX;j+=i)
				primes[j]++;
		}
	}
	FORS(i,4,MAX)
		if(primes[i]>1)
			primes[i]--;
	FOR(i,MAX)
		range[0][i]=0;
	FOR(i,11)
		range[i][0]=0;
	FORS(i,1,11){
		FORS(j,1,MAX){
			range[i][j]+=range[i][j-1];
			if(primes[j]==i)
			range[i][j]++;
		}
	}
}
void solve(){
	int x,y,k;
	cin>>x>>y>>k;
	if(x>y)swap(x,y);
	cout<<range[k][y]-range[k][x-1]<<endl;
}

int main(){ _

	precomputeSieve();
	SOLVE()

	return 0;
}
