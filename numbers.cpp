
/*
2015-02-04 12:04
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

void solve(){

	int n,x;
	cin>>n;
	string s;
	map<int,string>m;
	FOR(i,n){
		cin>>s>>x;
		if(m.count(x)>0)
			m[x]="None";
		else
			m[x]=s;
	}
	map<int,string>::iterator it;
	bool flag=false;
	for(it=m.begin();it!=m.end();it++){

		if(it->second!="None"){
			s=it->second;
			flag=true;
			break;
		}

	}
	if(!flag)
		cout<<"Nobody wins.\n";
	else
		cout<<s<<endl;

}

int main(){ _

	SOLVE()

	return 0;
}
