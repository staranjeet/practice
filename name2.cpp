
/*
2015-01-15 20:41
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

bool isMarriagePossible(string m, string w){
	int i = 0,j =0;
	while(i<m.length() && j<w.length()){
		if(m[i]==w[j]){
			i++;
			j++;
		}
		else
			j++;
	}
	if(i==m.length())return true;
	return false;
}

void solve(){

	string M,W;
	cin>>M>>W;
	if(isMarriagePossible(M,W)|| isMarriagePossible(W,M))
		cout<<"YES\n";
	else
		cout<<"NO\n";
}

int main(){ _

	SOLVE()

	return 0;
}
