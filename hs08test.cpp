
/*
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

void solve(){
}

int main(){ _

	//	SOLVE()
	double y;
	int x;
	scanf("%d%lf",&x,&y);
	if(x%5!=0 || y-x-0.5<0)
		printf("%.2lf\n",y);
	else
		printf("%.2lf\n",y-x-0.5);
	return 0;
}
