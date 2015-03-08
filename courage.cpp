
/*
2015-03-07 21:16
practice
MAR 15
SPOJ
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
struct node{
	ll sum,min;
};

node segtree[LIM];
ll arr[MAX];

void build(int node,int a,int b){
	if(a==b){
		segtree[node].sum=arr[a];
		segtree[node].min=arr[a];
		return;
	}

	int left=node<<1,right=left|1,mid=(a+b)>>1;
	build(left,a,mid);
	build(right,mid+1,b);

	segtree[node].sum=segtree[left].sum+segtree[right].sum;
	segtree[node].min=min(segtree[left].min,segtree[right].min);
}

void update_grow(int node,int a,int b, int i,int value){

	if(a==b){
		if(a==i){
			segtree[node].sum+=value;
			segtree[node].min+=value;
			return;
		}
	}

	int left=node<<1,right=left|1,mid=(a+b)>>1;
	if(i<=mid)
		update_grow(left,a,mid,i,value);
	else
		update_grow(right,mid+1,b,i,value);
	segtree[node].sum=segtree[left].sum+segtree[right].sum;
	segtree[node].min=min(segtree[left].min,segtree[right].min);

}

void update_eat(int node,int a,int b,int i, int value){
	if(a==b){
		if(i==a){
			segtree[node].sum-=value;
			segtree[node].min-=value;
			return;
		}
	}
	int left=node<<1,right=left|1,mid=(a+b)>>1;
	if(i<=mid)
		update_eat(left,a,mid,i,value);
	else
		update_eat(right,mid+1,b,i,value);

	segtree[node].sum=segtree[left].sum+segtree[right].sum;
	segtree[node].min=min(segtree[left].min,segtree[right].min);

}


ll query(int node,int a,int b,int i,int j){

	if(a>b || i>b || j<a) return -1;
	if(i<=a && b<=j)return segtree[node].sum;

	int left=node<<1,right=left|1,mid=(a+b)>>1;
	ll p1=query(left,a,mid,i,j);
	ll p2=query(right,mid+1,b,i,j);
	if(p1==-1)return p2;
	if(p2==-1)return p1;
	return p1+p2;

}

ll query_min(int node, int a, int b, int i, int j){

	if(a>b || i>b || j<a)return -1;
	if(i<=a && b<=j)return segtree[node].min;

	int left=node<<1,right=left|1,mid=(a+b)>>1;
	ll p1=query_min(left,a,mid,i,j);
	ll p2=query_min(right,mid+1,b,i,j);
	if(p1==-1)return p2;
	if(p2==-1)return p1;
	return min(p1,p2);

}

void solve(){

	int n,a,b;
	string s;
	cin>>n;
	FOR(i,n)
		cin>>arr[i];
	build(1,0,n-1);
	int p;
	cin>>p;
	while(p--){
		cin>>s>>a>>b;
		if(s=="COUNT")
			cout<<query(1,0,n-1,a,b)-query_min(1,0,n-1,a,b)<<endl;
		else if(s=="GROW")
			update_grow(1,0,n-1,b,a);
		else
			update_eat(1,0,n-1,b,a);
	}

}

int main(){ _

	//SOLVE()
	solve();

	return 0;
}
