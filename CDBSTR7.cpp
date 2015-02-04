
/*
2015-02-03 22:03
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

bool isAnagram(string s1,string s2){

	int a[26]={0};
	FOR(i,s1.length())
	a[s1[i]-97]++;
	FOR(i,s2.length())
	a[s2[i]-97]--;
	FOR(i,26){
		if(a[i]!=0)
			return false;
	}
	return true;
}

void solve(){

	string m,w;
	cin>>m>>w;
	if(isAnagram(m,w))
		cout<<"YES\n";
	else
		cout<<"NO\n";
}

int main(){ _

	SOLVE()

	return 0;
}
