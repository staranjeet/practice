
/*
2015-01-14 13:04
practice
JAN 15
cin cout did make a difference here(TLE), hence used scanf and printf
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
#define SIZE 1000001
void solve(){
}

int main(){ _

	//SOLVE()
	int sort[SIZE]={0};
	int n,x;
	scanf("%d",&n);
	FOR(i,n){
		scanf("%d",&x);
		sort[x]++;
	}
	FOR(i,SIZE){
		if(sort[i]){
			while(sort[i])
				{
					printf("%d\n",i);
					sort[i]--;
				}
		}
	}

	return 0;
}
