
/*
2015-03-17 02:22
spoj
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

int gcd(int a, int b){
	/*if(b==0)return */
	if(b>a)return gcd(b,a);
	if(b==0)return a;
	return gcd(b,a%b);
}
void solve(){

	int a,m,s=0;
	string b;
	cin>>a>>b;
	if(a==0)
		cout<<b<<"\n";
	else
		{
			
	FOR(i,b.size()){
		s=s*10+(b[i]-'0');
		s=s%a;
	}
	/*if(s==0)
		cout<<a<<"\n";
	else*/
	cout<<gcd(a,s)<<"\n";
		}

}

int main(){ _

	SOLVE()

	return 0;
}
