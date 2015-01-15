
/*
2015-01-15 19:28
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

	vector<int>bats(11);
	int k;
	FOR(i,11)
		cin>>bats[i];
	cin>>k;
	sort(bats.rbegin(),bats.rend());
	int sum = 0;
	FOR(i,k)
		sum+=bats[i];
	int ans=0,count=0,temp;
	for(int i=0;i<(1<<11);i++)
	{
		temp=0;count=0;
		for(int j=0;j<11;j++)
		{
			if(i&(1<<j))
				{
					temp+=bats[j];
					count++;
				}
		}
		if(count==k && temp==sum)
			ans++;
	}
	cout<<ans<<endl;
}

int main(){ _

	SOLVE()

	return 0;
}
