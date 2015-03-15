
/*
2015-03-15 11:41
practice
good question
prime
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
#define MAX 100001

bitset<MAX>b;

void gen_primes(){


	b.set();
	b[0]=b[1]=0;
	int m=sqrt(MAX);
	for(int i=2;i<=m;i++)
		if(b[i])
			for(int j=i*i;j<MAX;j+=i)
				b[j]=0;

	/*for(int i=2;i<MAX;i++)
		if(b[i])
			primes.PB(i);*/

		//return primes;

}

void solve(){

	int n;
	cin>>n;
	if(b[n])
		cout<<"-1\n";
	else
	{
		
		int factors=2;
		int m=sqrt(n);
		for(int i=2;i<=m;i++)
			if(n%i==0)
				factors+=2;

			if(m*m==n)
				factors--;
			//cout<<factors;

	if(factors>4 && (factors&1))
		cout<<"1\n";
	else
		cout<<"-1\n";
	}
	

}

int main(){ _

	gen_primes();
	SOLVE()

	return 0;
}
