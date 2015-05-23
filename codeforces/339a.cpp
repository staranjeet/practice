
/*
2015-05-23 23:38
MAY 15
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
	cin>>s;

	if(s.length()==1)
		cout<<s<<"\n";
	else{
		vector<int>a;
		for(int i=0;i<s.length();i+=2)
			a.PB(s[i]-'0');
	
	sort(a.begin(),a.end());

	FOR(i,a.size()-1){
		cout<<a[i]<<"+";
	}
	cout<<a[a.size()-1]<<"\n";

}
}



int main(){ _

	//SOLVE()
	solve();
	return 0;
}
