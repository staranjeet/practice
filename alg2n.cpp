
/*
2015-03-15 10:16
practice
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
#define MAX 2001

int dp[MAX];

void precompute(){

	vector<int>a;
	int m=1,temp,x,j;
	a.PB(1);
	dp[0]=1;
	dp[1]=2;
	FORS(i,1,MAX){
		ll sum=0;
		temp=0;
		for(j=0;j<m;j++){
			x=a[j]*2+temp;
			a[j]=x%10;
			temp=x/10;

		}
		while(temp){
			a.PB(temp%10);
			temp/=10;
			m++;
		}
		for(int k=m-1;k>-1;k--)
			sum+=a[k];
		dp[i]=sum;

	}

}
void solve(){

	int n;
	cin>>n;
	cout<<dp[n]<<endl;


}

int main(){ _

	precompute();
	SOLVE()

	return 0;
}
