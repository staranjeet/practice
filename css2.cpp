
/*
2015-02-03 11:57
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

	int n,M,a,i,v,p;
	cin>>n>>M;
	map<pair<int,int>,pair<int,int> >m;
	pair<int,int>p1,p2,p3;
	//cout<<n<<M;
	FOR(it,n){
		cin>>i>>a>>v>>p;
		p1=make_pair(i,a);
		p2=make_pair(v,p);
		if(m.count(p1)){
			p3=m[p1];
			if(p>=p3.second)
				m[p1]=p2;
		}
		else
			m[p1]=p2;
	}
	FOR(it,M){
		cin>>i>>a;
		p1=make_pair(i,a);
		cout<<m[p1].first<<endl;
	}
	

}

int main(){ _

	//SOLVE()
	solve();

	return 0;
}
