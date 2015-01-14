
/*
2015-01-14 12:53
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

	vector<int> fact;
	int n,temp,count=0,x,i,j;
	cin>>n;
	temp=n;
	while(temp!=0){
		fact.PB(temp%10);
		temp/=10;
		count++;
	}
	for(i=1;i<n;i++){
		temp=0;
		for(j=0;j<count;j++){
			x=fact[j]*i+temp;
			fact[j]=x%10;
			temp=x/10;
		}
		while(temp!=0){
			fact.PB(temp%10);
			temp/=10;
			count++;
		}
	}
	for(i=fact.size()-1;i>=0;i--)
		cout<<fact[i];
	cout<<endl;
}

int main(){ _

	SOLVE()

	return 0;
}
