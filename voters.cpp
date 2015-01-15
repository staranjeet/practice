
/*
2015-01-15 14:13
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
}

int main(){ _

	//SOLVE()
	int n1,n2,n3,x;
	cin>>n1>>n2>>n3;
	map<int,int>m;
	FOR(i,n1){
		cin>>x;
		m[x]++;
	}
	FOR(i,n2){
		cin>>x;
		m[x]++;
	}
	FOR(i,n3){
		cin>>x;
		m[x]++;
	}
	map<int,int>::iterator it;
	int votes=0;
	for(it=m.begin();it!=m.end();it++)
		{
			if(it->second>1)
				votes++;
			//cout<<it->first<<endl;
	}
	cout<<votes<<endl;
	for(it=m.begin();it!=m.end();it++)
		{
			if(it->second>1)
				//votes++;
			cout<<it->first<<endl;
	}


	return 0;
}
