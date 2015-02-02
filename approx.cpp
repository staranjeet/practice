
/*
2015-02-02 20:26
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

	int k,x=103993,y=33102,temp,i,zero=0;
	cin>>k;
	string s="415926530119026040722614947737296840070086399613316";
	//cout<<s.length();
	/*for(i=0;i<k+1;){

		temp=x/y;
		cout<<temp;
		if(i==0 && k>0)
			cout<<".";
		i++;

		x=x%y;
		zero=-1;
		while(1){
			if(x>y)break;
			x=x*10;
			zero++;
		}
		FOR(j,zero)
		{
			cout<<"0";
			i++;
		}


	}
	cout<<endl;*/
	if(k==0)cout<<3;
	else {
		cout<<"3.1";
		FOR(i,(k-1)/51)
		cout<<s;
		FOR(i,(k-1)%51)
		cout<<s[i];

	}
	cout<<endl;

}

int main(){ _

	SOLVE()

	return 0;
}
