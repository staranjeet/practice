
/*
2015-03-09 22:22
COTG 2015
segment tree
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
#define MAX 100001
#define LIM 400005

struct node{ll sum;};

node segtree[LIM];
int arr[MAX];

void build(int node,int a,int b){
	if(a==b){
		segtree[node].sum=arr[a];
		return;
	}
	int left=node<<1,right=left|1,mid=(a+b)>>1;
	build(left,a,mid);
	build(right,mid+1,b);
	segtree[node].sum=segtree[left].sum+segtree[right].sum;
}

ll query(int node,int a,int b,int i,int j){
	if(a>b ||i>b || j<a)return -1;
	if(i<=a && b<=j)return segtree[node].sum;
	int left=node<<1,right=left|1,mid=(a+b)>>1;
	ll p1=query(left,a,mid,i,j);
	ll p2=query(right,mid+1,b,i,j);
	if(p1==-1)return p2;
	if(p2==-1)return p1;
	return p1+p2;
}


void solve(){
	int n,q,x,y;
	cin>>n;
	FOR(i,n)
	cin>>arr[i];
	build(1,0,n-1);
	cin>>q;
	while(q--){
		cin>>x>>y;
		cout<<query(1,0,n-1,x-1,y-1)<<endl;
	}
}

int main(){ _

	//SOLVE()
	solve();

	return 0;
}
