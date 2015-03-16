
/*
2015-03-16 22:08
practice
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
#define LIM 1000001

int mp[LIM];

void solve(){

	int n,m,x;
	cin>>n>>m;
	//map<int,int>mp;
	FOR(i,n){
		cin>>x;
		mp[x]=1;
	}
	int a=0;
	FOR(i,m){
		cin>>x;
		if(mp[x]){
			a++;
			mp[x]=0;
		}
	}
	cout<<a<<endl;


}

int main(){ _

	//SOLVE()
	solve();

	return 0;
}
