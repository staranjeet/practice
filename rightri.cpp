
/*
2015-01-15 20:10
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

	int t;
	cin>>t;
	int x1,x2,x3,y1,y2,y3;
	int count = 0;
	while(t--)
	{
		
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	int a = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
	int b = (x1-x3)*(x1-x3) + (y1-y3)*(y1-y3);
	int c = (x3-x2)*(x3-x2) + (y3-y2)*(y3-y2);
	if((a+b==c) || (b+a==c) || (a+c==b))
		count++;
	}
	cout<<count<<endl;


}

int main(){ _

	solve();
	//SOLVE()

	return 0;
}
