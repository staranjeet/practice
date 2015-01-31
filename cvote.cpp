
/*
2015-01-27 01:18
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

	int n,M;
	cin>>n>>M;
	string country,chef;
	map<string,string>m;
	map<string,int>m2;
	map<string,int>m3;
	FOR(i,n){
		cin>>chef>>country;
		m[chef]=country;

	}
	FOR(i,M){
		cin>>chef;
		m2[m[chef]]++;
		m3[chef]++;

	}
	map<string,int>::iterator it;
	int coun = 0;
	for(it=m2.begin();it!=m2.end();it++){
		if(it->second>coun )
		{
			coun=it->second;
			country=it->first;
		}

	}
	cout<<country<<endl;
	coun =0;
	for(it=m3.begin();it!=m3.end();it++){
		if(it->second>coun){
			coun = it->second;
			chef = it->first;
		}
	}
	cout<<chef<<endl;
	return 0;
}
