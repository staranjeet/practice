
/*
2015-03-09 22:35
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

void solve(){

	int acost,bcost;
	string a;
	cin>>a;
	cin>>acost>>bcost;
	bool flag=true;
	int start=0,end=a.size()-1,ans=0;
	while(start<end){
		if(a[start]==a[end] && a[start]!='/')
			start++,end--;
		else{
			if(a[start]==a[end] && a[start]=='/')
				ans+=2*min(acost,bcost);
			else{
				if((a[start]=='a' && a[end]=='/') || (a[end]=='a' && a[start]=='/'))
					ans+=acost;
				else if((a[start]=='b' && a[end]=='/') || (a[end]=='b' && a[start]=='/'))
					ans+=bcost;
				else{
					flag=false;
					break;
				}
			}
			start++,end--;
		}

	}
	if(a[start]=='/')
		ans+=min(acost,bcost);
	if(!flag)
		cout<<"-1\n";
	else
	cout<<ans<<endl;

}

int main(){ _

	SOLVE()

	return 0;
}
