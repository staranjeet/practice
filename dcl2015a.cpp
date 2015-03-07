
/*
2015-03-07 12:52
DCL 2015
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
#define MAX 10001

bitset<MAX>isprimes;

bitset<MAX> sieve(){
	bitset<MAX>b;
	b.set();
	b[0]=b[1]=0;
	int i,j;
	int m=sqrt(MAX);
	for(i=2;i<=m;i++){
		if(b[i])
			for(j=i*i;j<=MAX;j+=i)
				b[j]=0;
	}
	return b;
}



void solve(){

	string s;
	cin>>s;
	int ct[65]={0},mfreq=0;
	FOR(i,s.length())
		{
			ct[s[i]-65]++;
			mfreq=max(mfreq,ct[s[i]-65]);
		}
	int ans=0;
	
	if(isprimes[mfreq]){		//max freq is a prime number
		for(int i=0;i<65;i++){
			if(isprimes[ct[i]])
				ans+=((1+ct[i])/2);
			else
				ans+=(ct[i]);
		}

	}else{						//max freq is a composite number
		for(int i=0;i<65;i++){
			if(!isprimes[ct[i]])
				ans+=((1+ct[i])/2);
			else
				ans+=(ct[i]);
		}
	}
	cout<<ans<<endl;

}

int main(){ _

	isprimes=sieve();
	SOLVE()

	return 0;
}
