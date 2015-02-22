
/*
2015-02-22 21:08
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

	int n;
	string s;
	cin>>n;
	map<string,int>person;
	FOR(i,n){
		cin>>s;
		person[s]++;
	}
	int per=0;
	map<string,int>::iterator it;
	for(it=person.begin();it!=person.end();it++){
		if((it->second)&1)
			per++;
	}
	cout<<per<<endl;

}

int main(){ _

	SOLVE()

	return 0;
}
