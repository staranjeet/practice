
/*
2015-01-15 11:18
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

	int a[10];
	FOR(i,10)
		cin>>a[i];
	int mins=a[1],sub=1;
	FORS(i,2,10){
		if(a[i]<mins){
			mins=a[i];
			sub=i;
		}
	}
	int ans1=0;
	FOR(i,mins+1)
		ans1=ans1*10+sub;
	int ans2=pow(10,a[0]+1);
	cout<<min(ans1,ans2)<<"\n";
}

int main(){ _

	SOLVE()

	return 0;
}
