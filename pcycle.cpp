
/*
2015-01-15 12:00
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

#define SIZE 1001

bool flag[SIZE];

void solve(){
}

int main(){ _

	//SOLVE()

	int n,start,temp;
	cin>>n;
	memset(flag,true,sizeof(bool)*SIZE);
	int a[n+1];
	FORS(i,1,n+1)
		cin>>a[i];
	int count=0;
	FORS(i,1,n+1){

		if(flag[i]){
			start=i;
			//cout<<start<<" ";
			count++;
			temp=a[i];
			flag[start]=false;
			while(start!=temp){
			//	cout<<temp<<" ";
				flag[temp]=false;
				temp=a[temp];
			}
			//cout<<start<<"\n";
		}

	}
	cout<<count<<"\n";
	memset(flag,true,sizeof(bool)*SIZE);
	FORS(i,1,n+1){

		if(flag[i]){
			start=i;
			cout<<start<<" ";
			temp=a[i];
			flag[start]=false;
			while(start!=temp){
				cout<<temp<<" ";
				flag[temp]=false;
				temp=a[temp];
			}
			cout<<start<<"\n";
		}

	}

	return 0;
}
