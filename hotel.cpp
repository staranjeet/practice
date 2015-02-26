
/*
2015-02-25 16:31
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

void solve(){

	int n,x;
	cin>>n;
	vector<pair<int,int> > ev;
	FOR(i,n){
		cin>>x;
		ev.PB(make_pair(x,1));
	}
	FOR(i,n){
		cin>>x;
		ev.PB(make_pair(x,-1));

	}
	sort(ev.begin(),ev.end());
	int ma=0,temp=0;
	vector<pair<int,int> >::iterator it;
	for(it=ev.begin();it!=ev.end();it++){
		temp+=it->second;
		ma=max(ma,temp);
	}
	cout<<ma<<endl;
}

int main(){ _

	SOLVE()

	return 0;
}
