
/*
2015-03-15 16:06
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

	string s;
	int m=0,a[26]={0};
	cin>>s;
	FOR(i,s.size()){
		a[s[i]-97]++;
		m=max(a[s[i]-97],m);
	}
	int sum=s.size()-m;
	/*FOR(i,26)
	if(a[i] && a[i]!=m)
		sum+=a[i];*/
	//cout<<m<<" "<<sum;
	if(sum==m)
		cout<<"YES\n";
	else
		cout<<"NO\n";


}

int main(){ _

	SOLVE()

	return 0;
}
