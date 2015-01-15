
/*
2015-01-14 19:56
practice
JAN 15
the word "current lead" is important here very!!
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
}

int main(){ _

//	SOLVE()
	int n;
	cin>>n;
	int p1,p2,player,winner=1,max=0,lead,cp1=0,cp2=0;
	FOR(i,n){
		cin>>p1>>p2;
		p1=cp1+p1;
		p2=cp2+p2;
		lead=p1-p2;
		player=1;
		if(lead<0){
			lead=abs(lead);
			player=2;
		}
		if(lead>max)
		{
			max=lead;
			winner=player;
		}
		cp1=p1;
		cp2=p2;
	}
	cout<<winner<<" "<<max<<endl;

	return 0;
}
