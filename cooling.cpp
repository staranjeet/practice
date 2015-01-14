
/*
2015-01-14 21:14
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

	int n;
	cin>>n;
	vector<int> weight(n);
	vector<int> rack(n);
	FOR(i,n)
		cin>>weight[i];
	FOR(i,n)
		cin>>rack[i];
	sort(weight.begin(),weight.end());
	sort(rack.begin(),rack.end());
	int i=0,j=0,pies=0;
	while(j<n){
		if(weight[i]<=rack[j]){
			i++;
			j++;
			pies++;
		}
		else
			j++;
	}
	cout<<pies<<"\n";
}

int main(){ _

	SOLVE()

	return 0;
}
