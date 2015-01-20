
/*
2015-01-20 11:29
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

int gcdRecursive(int a, int b){
	if(b>a)return gcdRecursive(b,a);
	if(b==0)
		return a;
	else
		return gcdRecursive(b,a%b);
}

int gcdIterative(int a,int b){

	while(a!=b){
		if(a>b)
			a =  a - b;
		else
			b =  b - a;
	}
}
int main(){ _

	//SOLVE()
	int a,b;
	cin>>a>>b;
	cout<<gcdRecursive(a,b)<<" "<<gcdIterative(a,b)<<" "<<__gcd(a,b)<<endl;

	return 0;
}
