
/*
2015-02-03 11:46
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

	int marks[5][101]={0};
	int stud[5]={0},count;
	int n,x;
	char ch;
	cin>>n;
	FOR(i,n){
		cin>>ch>>x;
		marks[ch-65][x]++;
		stud[ch-65]++;
	}
	FOR(i,5){
		count=0;
		FOR(j,101){

			if(marks[i][j]>((10*stud[i])/100))
				{
					cout<<j<<" ";
					count++;
				}

		}
		if(count==0)
			cout<<"Nothing Unusual";
		cout<<endl;
	}

}

int main(){ _

	//SOLVE()
	solve();

	return 0;
}
