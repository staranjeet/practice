
/*
2015-01-15 00:33
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
#define SIZE 1001

bool recipe[SIZE];

void solve(){

	int n,m,x;
	memset(recipe,true,sizeof(bool)*SIZE);
	cin>>n>>m;
	FOR(i,m){
		cin>>x;
		recipe[x]=false;
	}
	bool take=true;
	FORS(i,1,n+1){
		if(recipe[i] && take){
			cout<<i<<" ";
			recipe[i]=false;
			take=!take;
		}
		else if(recipe[i] && !take)
			take=!take;
	}
	cout<<"\n";
	FORS(i,1,n+1){
		if(recipe[i])
			cout<<i<<" ";
	}
	cout<<"\n";

}

int main(){ _

	SOLVE()

	return 0;
}
