
/*
2015-02-04 15:48
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
int range[6][MAX];

void precompute(){

	FOR(i,MAX)
		primes[i]=1;
	primes[0]=primes[1]=0;

	FORS(i,2,MAX){				// imp consider MAX = 100,run till sqrt(100)=10, then 93 will give ans as 1 instead of 2
		if(primes[i]==1){		//prime number is found

			for(int j=i+i;j<MAX;j+=i)
				primes[j]++;

		}
	}
	FOR(i,MAX)
	if(primes[i]>1)
		primes[i]--;
	FOR(i,6)
		range[i][0]=range[i][1]=0;
	FORS(i,1,6){
		FORS(j,2,MAX){
			range[i][j]+=range[i][j-1];
			if(primes[j]==i)
				range[i][j]++;
		}
	}

}
void solve(){
	int a,b,k;
	cin>>a>>b>>k;
	cout<<range[k][b]-range[k][a-1]<<endl;
}

int main(){ _

	precompute();
	
	SOLVE()

	return 0;
}
