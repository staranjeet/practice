
/*
2015-01-14 23:03
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
#define LIM 10001

int coun[LIM];

void solve(){

	int n,x;
	cin>>n;
	memset(coun,0,sizeof(int)*LIM);
	FOR(i,n)
	{
		cin>>x;
		coun[x]++;
	}
	int max=0,c=0;
	FORS(i,1,LIM){
		if(coun[i]>max){
			max=coun[i];
			c=i;
		}
	}	
	cout<<c<<" "<<max<<endl;
}

int main(){ _

	SOLVE()

	return 0;
}
