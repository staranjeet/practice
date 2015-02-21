
/*
2015-02-21 08:40
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
	cin>>s;
	int ans1=0,ans2=0;
	FOR(i,s.length()){
		//considering sequence like +-+-+-
		if(i&1)
			{
				if(s[i]!='-')
				ans1++;
		}else{
			if(s[i]!='+')
				ans1++;
		}
		//considering seq like -+-+-+
		if(i&1)
			{
				if(s[i]!='+')
				ans2++;
		}else{
			if(s[i]!='-')
				ans2++;
		}
	}
	cout<<min(ans1,ans2)<<endl;
}

int main(){ _

	SOLVE()

	return 0;
}
