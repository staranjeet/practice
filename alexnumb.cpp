
/*
practice
DEC 13
*/
#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

typedef long long ll;

#define FOR(i,n) for(int i = 0; i < n; i++)
#define FORS(i,a,n) for(int i = a; i < n; i++)


int main(){ _
	int t;
	cin>>t;
	while(t--){
	
	 ll n,x,ans;
	 cin>>n;

	 FOR(i,n)
	 cin>>x;

	 ans=(n*(n-1))/2;
	 cout<<ans<<"\n";
	}

	return 0;
}
