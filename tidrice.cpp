
/*
2015-01-15 22:57
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

	int n;
	cin>>n;
	string s;
	char c;
	map<string,int> m;
	FOR(i,n)
	{
		cin>>s>>c;
		if(c=='+')
			m[s]=1;
		else if(c=='-')
			m[s]=-1;
	}
	map<string,int>::iterator it;
	int votes = 0;
	for(it=m.begin();it!=m.end();it++){
		votes+=(it->second);
	}
	cout<<votes<<endl;
}

int main(){ _

	SOLVE()

	return 0;
}
