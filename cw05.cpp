
/*
2015-03-15 10:34
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

void solve(){

	int n;
	while(cin>>n){
		
	int mul=5,zero=0,temp;
	while(1){
		temp=n/mul;
		zero+=temp;
		if(temp<1)break;
		mul=mul*5;
	}
	cout<<zero<<endl;
	}

}

int main(){ _

	//SOLVE()
	solve();

	return 0;
}
