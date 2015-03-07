
/*
2015-03-07 15:42
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
#define MAX 1004001

int reverse(int n){
	int s=0;
	while(n){
		s=s*10+(n%10);
		n/=10;
	}
	return s;
}

bool ispalin(int n){
	if(n==reverse(n))
		return true;
	return false;
}

bool isPrime(int n){
	if(n<=1)return false;
	if(n==2)return true;
	if(n%2==0)return false;
	int m=sqrt(n),i;
	for(i=3;i<=m;i+=2)
		if(n%i==0)return false;
	return true;

}
void solve(){



}

int main(){ _

	//SOLVE()
	/*FILE *fp=fopen("pr.txt","w");
	//cout<<ispalin(22)<<reverse(22);
	FOR(i,MAX){
		if(ispalin(i) && isPrime(i))
			fprintf(fp,"%d%c",i,',');
		
	}
	fclose(fp);*/
	int a[]={2,3,5,7,11,101,131,151,181,191,313,353,373,383,727,757,787,797,919,929,10301,10501,10601,11311,11411,12421,12721,12821,13331,13831,13931,14341,14741,15451,15551,16061,16361,16561,16661,17471,17971,18181,18481,19391,19891,19991,30103,30203,30403,30703,30803,31013,31513,32323,32423,33533,34543,34843,35053,35153,35353,35753,36263,36563,37273,37573,38083,38183,38783,39293,70207,70507,70607,71317,71917,72227,72727,73037,73237,73637,74047,74747,75557,76367,76667,77377,77477,77977,78487,78787,78887,79397,79697,79997,90709,91019,93139,93239,93739,94049,94349,94649,94849,94949,95959,96269,96469,96769,97379,97579,97879,98389,98689};
	int n;
	cin>>n;
	if(n>98689)
		cout<<"1003001\n";
	else{
		for(int i=0;;i++){
			if(a[i]>n)
			{
				cout<<a[i]<<endl;
				break;
			}
		}
	}

	return 0;
}
