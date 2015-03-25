
/*
2015-03-25 22:19
MAR 15
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

void sept_convert(int n){
	vector<int>a;
	while(n){
			//cout<<n%7;
			a.PB(n%7);
			n/=7;
		}
		for(int i=(int)a.size()-1;i>=0;i--)
			cout<<a[i];
}
void solve(){

	
	
	while(1){
		int n;
		cin>>n;
		if(n==-1)
			break;
		sept_convert(n);
		cout<<" ";
		
	}
		
	

}

int main(){ 

	//SOLVE()
	solve();

	return 0;
}
