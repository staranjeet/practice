
/*
2015-02-03 11:36
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

bool isPerfectSquare(ll n){

	ll temp=sqrt(n);
	if(n==(temp*temp))
		return true;
	return false;
}

bool isFibo(ll n){

	ll sq = n*n;
	ll temp1 = 5*sq+4;
	ll temp2 = 5*sq-4;
	if(isPerfectSquare(temp1) || isPerfectSquare(temp2))return true;
	return false;


}

void solve(){

	ll n;
	cin>>n;
	if(isFibo(n))
		cout<<"is fibo\n";
	else
		cout<<"not fibo\n";
}

int main(){ _

	SOLVE()

	return 0;
}
