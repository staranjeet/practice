
/*
2015-02-25 15:23
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
#define MAX 1000001

int isPrime[MAX];
vector<int>primes;

void sieve(){
	int i,j;
	FORS(i,2,MAX)
	isPrime[i]=1;
	isPrime[0]=isPrime[1]=0;
	int m=sqrt(MAX);
	for(i=2;i<=m;i++){
		if(isPrime[i])
			for(j=i*i;j<=MAX;j+=i)
				isPrime[j]=0;
	}
	FORS(i,2,MAX)
		if(isPrime[i])
			primes.PB(i);

}


void solve(){
	int n,temp1;
	ll ans=1;
	cin>>n;
	temp1=n;
	//cout<<primes[0];
	vector<int>counts(primes.size(),0);
	for(int i=0;i<primes.size() && n!=0;i++){
		if(n%primes[i]==0)
		{while(n%primes[i]==0){
					n/=primes[i];
					counts[primes[i]]++;
				}
		int temp=(pow(primes[i],counts[primes[i]]+1)-1)/(primes[i]-1);
		ans=ans*temp;
			}
	}
	cout<<ans-temp1<<endl;
}

int main(){ _

	//SOLVE()
	sieve();
	solve();

	return 0;
}
