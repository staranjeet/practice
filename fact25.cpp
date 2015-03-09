
/*
2015-03-09 18:56
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

vector<int> factorial(int n){
	int temp=n,x,m=0;
	vector<int>a;
	while(temp){
		a.PB(temp%10);
		temp/=10;
		m++;
	}
	FORS(i,1,n){
		
		temp=0;

		FOR(j,m){
			x=a[j]*i+temp;
			temp=x/10;
			a[j]=x%10;
		}
		while(temp){
			a.PB(temp%10);
			temp/=10;
			m++;
		}

	}
	
	return a;
}


void solve(){
	int n;
	cin>>n;
	vector<int>a=factorial(n);
	for(int i=a.size()-1;i>-1;i--)
		cout<<a[i];
	cout<<endl;

}

int main(){ _

	SOLVE()

	return 0;
}
