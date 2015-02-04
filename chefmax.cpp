
/*
2015-02-04 14:23
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

	int a[26]={0};
	string s;
	cin>>s;
	FOR(i,s.length())
		a[s[i]-97]++;
	int ma=a[0],index=0;
	FORS(i,1,26){
		if(a[i]>ma){
			ma=a[i];
			index=i;
		}
	}
	FOR(i,s.length()){

		if((s[i]-97)==index)
			cout<<"?";
		else
			cout<<s[i];


	}
	cout<<endl;

}

int main(){ _

	SOLVE()

	return 0;
}
