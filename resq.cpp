
/*
practice
JUN 12
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
	
		int n,m,min=100000000,diff;
		cin>>n;
		m=sqrt(n);
		for(int i=m;i>=1;i--){
			if(n%i==0){
			min=abs(i-n/i);
			break;
			//if(diff<min)min=diff;	
			}
		}
		cout<<min<<"\n";
	}

	return 0;
}
