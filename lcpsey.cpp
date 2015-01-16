
/*
practice
FEB 14
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
	string p1,p2;
	while(t--){
	
		cin>>p1>>p2;

		int A[127]={0},B[127]={0};

		FOR(i,p1.length())
			A[p1[i]]++;

		FOR(i,p2.length())
			B[p2[i]]++;

			int count = 0;
		FOR(i,127){
			if(A[i]!=0 && B[i]!=0){
				count +=  min(A[i],B[i]);
			}
}
		cout<<count<<"\n";
		
	}

	return 0;
}
