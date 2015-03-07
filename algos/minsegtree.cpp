
/*
2015-03-07 21:57
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
#define MAX 100
#define LIM 410

struct node{
	int min;
};

int arr[MAX];
node segtree[LIM];

void build(int node,int a, int b){
	if(a==b){
		segtree[node].min=arr[a];
		return;
	}
	int left=node<<1,right=left|1,mid=(a+b)>>1;
	build(left,a,mid);
	build(right,mid+1,b);
	segtree[node].min=min(segtree[left].min,segtree[right].min);
}

int query(int node, int a,int b,int i,int j){
	if(a>b || i>b || j<a)
		return -1;
	if(i<=a && b<=j)
		return segtree[node].min;
	int left=node<<1,right=left|1,mid=(a+b)>>1;
	int p1=query(left,a,mid,i,j);
	int p2=query(right,mid+1,b,i,j);
	if(p1==-1)return p2;
	if(p2==-1)return p1;
	return min(p1,p2);
}
void solve(){
}

int main(){ _

	//SOLVE()
	int n=5;
	FOR(i,n)
		arr[i]=i+1;

	build(1,0,n-1);
	cout<<query(1,0,n-1,2,3);

	return 0;
}
