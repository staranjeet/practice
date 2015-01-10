
/*
practice
JAN 14
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
	
		string s;
		cin>>s;

		int a=s.find("010");
		int b=s.find("101");
		if(a==-1 && b==-1)
			cout << "Bad\n";
		else
			cout<<"Good\n";
	}

	return 0;
}
