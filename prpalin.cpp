
/*
2015-01-14 23:21
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

#define SIZE 1000001
void solve(){
}

bool isPrime[SIZE]={true};
void sieve(){

	int i,j;
	isPrime[0]=isPrime[1]=false;
	for(i=2;i<SIZE;i++)
		isPrime[i]=true;
	int m=sqrt(SIZE);
	for(i=2;i<=m;i++){
		if(isPrime[i]){
			for(j=i*i;j<=SIZE;j+=i)
				isPrime[j]=false;
		}
	}
}
int reverse(int n){
	int s=0;
	while(n){
		s=s*10+(n%10);
		n/=10;
	}
	return s;
}
bool isPalin(int n)
{
	int rev=reverse(n);
	if(rev==n)return true;
	return false;
}
int main(){ _

	sieve();
	vector<int>primepalin;
	FOR(i,SIZE){
		if(isPrime[i])
		{
			if(isPalin(i)){
				primepalin.PB(i);
			}
		}
	}
	int n,i;
	/*for(i=0;i<primepalin.size();i++)
		cout<<primepalin[i]<<", ";*/
	cin>>n;
	if(n>98689)
		cout<<1003001<<"\n";
	else{
		for(i=0;i<primepalin.size();i++){
		if(primepalin[i]>=n)break;
	}
	
	cout<<primepalin[i]<<endl;
	}
	
	

	return 0;
}
