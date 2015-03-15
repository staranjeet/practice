
/*
2015-03-15 15:35
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
	cin>>n;
	int mul=5,temp,zero=0;
	while(1){
		temp=n/mul;
		if(temp<1)break;
		mul=mul*5;
		zero+=temp;
	}
	cout<<zero<<endl;

}

int main(){ _

	SOLVE()

	return 0;
}
