
/*
2015-02-21 01:44
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

	int n,a[250];
	cin>>n;
	int m=0,temp=n,x,i,j;
	while(temp){
		a[m++]=temp%10;
		temp/=10;
	}
	for(i=1;i<n;i++){
		temp=0;
		for(j=0;j<m;j++){
			x=a[j]*i+temp;
			a[j]=x%10;
			temp=x/10;
		}
		while(temp){
			a[m++]=temp%10;
			temp/=10;
		}
	}
	for(i=m-1;i>=0;i--)
		cout<<a[i];
	cout<<endl;

}

int main(){ _

	SOLVE()

	return 0;
}
