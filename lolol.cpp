
/*
2015-02-03 20:43
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

	string s;
	ll ans;
	cin>>s;
	string temp="LOL";
	ll lookup[s.length()+1][4];
	FOR(i,s.length()+1)
		lookup[i][0]=1;
	FORS(i,1,4)
		lookup[0][i]=0;
	FORS(i,1,s.length()+1){
		FORS(j,1,4){
			lookup[i][j]=lookup[i-1][j];
			if(s[s.length()-i]==temp[3-j])
				lookup[i][j]+=lookup[i-1][j-1];
		}
	}
	
	cout<<lookup[s.length()][3]<<endl;
	
}

int main(){ _

	SOLVE()

	return 0;
}
