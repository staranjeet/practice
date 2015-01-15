
/*
2015-01-16 04:11
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

	int n,index;
	string pat,s;
	cin>>n>>pat;
	while(n--){
		cin>>s;
		bool isLower;
		FOR(i,s.length()){
			isLower=true;
			index=s[i]-97;
			if(s[i]>=65 && s[i]<=90){
				isLower=false;
				index=s[i]-65;
			}
			if(s[i]=='_')
				cout<<" ";
			else if(s[i]>=65 && s[i]<=122){
				if(isLower)
					cout<<pat[index];
				else
					cout<<char(pat[index]-32);
			}
			else
				cout<<s[i];
		}
		cout<<endl;
	}

}

int main(){ _

	//SOLVE()
	solve();

	return 0;
}
