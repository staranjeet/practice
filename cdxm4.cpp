
/*
2015-01-16 14:27
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

	char a[65];
	while(scanf("%[^\n]%*c",a)==1){
		//continue reading
//scanf("%[^\n]s",a);
		if(!a)break;
		bool flag=false;
		for(int i=0;a[i];i++){

			if(a[i]=='/' && a[i+1]=='/'){
				flag=true;
				for(int j=i;a[j];j++)
					printf("%c",a[j]);
				break;
			}
			if(!flag){
				if(a[i]=='-' && a[i+1]=='>')
					{
						printf("%c",'.');
						i++;
					}
				else
					printf("%c",a[i]);
			}

		}
		printf("\n");

	}
}

int main(){ _

	solve();
	//SOLVE()

	return 0;
}
