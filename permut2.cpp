
/*
2015-01-14 20:49
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


vector<int> a;
void solve(){

	int n;
	while(1){
		cin>>n;
		if(n==0)
			break;
		a.resize(n+1);
		a[0]=0;
		FORS(i,1,n+1)
			cin>>a[i];
		bool flag=true;
		FORS(i,1,n+1){
			if(i!=a[a[i]]){
				flag=false;
				break;
			}
		}
		string s;
		s=(flag==true)?"ambiguous":"not ambiguous";
		cout<<s<<endl;
		a.clear();
		
	}

}

int main(){ _

	solve();
	//	SOLVE()

	return 0;
}
