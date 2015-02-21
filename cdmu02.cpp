
/*
2015-02-21 22:22
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
#define MAX 1000001
int co[26][MAX]={0};
void solve(){
	char ch;
	string s;
	cin>>s;
	int a,b;
	FOR(i,s.length())
		co[s[i]-97][i]=1;
	
	
	FOR(i,26){
		FORS(j,1,s.length()+1)
		co[i][j]+=co[i][j-1];
	}
	
	int q;
	cin>>q;
	while(q--){
		cin>>ch>>a>>b;
		a--;b--;
		cout<<co[ch-97][b]-co[ch-97][a-1]<<endl;
	}
}

int main(){ _

	//SOLVE()
	solve();

	return 0;
}
