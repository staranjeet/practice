
/*
2015-02-21 09:07
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
#define MAX 100001

int cnt[MAX];

void solve(){
	int n,m=0,x;
	cin>>n;
	FOR(i,MAX)
		cnt[i]=0;
	FOR(i,n)
		{	
			cin>>x;
			cnt[x]++;
			m=max(cnt[x],m);
			/*if(cnt[x]>m)
				m=cnt[x];*/

		}
		cout<<n-m<<endl;
}

int main(){ _

	SOLVE()

	return 0;
}
