
/*
2015-02-03 12:28
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
#define CLEAR(n) FOR(i,n) tweet[i]=0;
#define MAX 1001

int tweet[MAX];

void solve(){

	int n,k,c;
	cin>>n>>k;
	int open=0;
	
	CLEAR(n+1)
	string s;
	FOR(i,k){
		cin>>s;
		if(s=="CLICK")
			{
				cin>>c;
				if(tweet[c]==0){
					tweet[c]=1;open++;
				}else{
					tweet[c]=0;open--;
				}
		}else{
			CLEAR(n+1)
			open=0;
		}
		cout<<open<<endl;
	}


}

int main(){ _

	//SOLVE()
	solve();

	return 0;
}
