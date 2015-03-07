
/*
2015-03-07 20:36
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
#define N 100
#define MAX 410

struct node{
	ll sum;
};

int arr[N];
node segtree[MAX];

//build the segtree
void build(int node,int a, int b){
	//takes O(n) time
	if(a==b){
		segtree[node].sum=arr[a];
		return;
	}
	int left=node<<1,right=left|1,mid=(a+b)>>1;
	build(left,a,mid);
	build(right,mid+1,b);
	segtree[node].sum=segtree[left].sum+segtree[right].sum;
}

int query(int node,int a, int b,int i,int j){

	if(a>b || b<i || a>j)
		return -1;
	if(i<=a && b<=j)
		return segtree[node].sum;
	int left=node<<1,right=left|1,mid=(a+b)>>1;
	int p1=query(left,a,mid,i,j);
	int p2=query(right,mid+1,b,i,j);
	if(p1==-1)return p2;
	if(p2==-1)return p1;
	return p1+p2;
}

void update(int node, int a, int b,int i, int value){

	//takes log(n) time
	if(a==b){
		if(a==i)
			segtree[node].sum=value;
		return;
	}

	int left=node<<1,right=left|1,mid=(a+b)>>1;
	if(i<=mid)
	update(left,a,mid,i,value);
	else
	update(right,mid+1,b,i,value);
	segtree[node].sum=segtree[left].sum+segtree[right].sum;

}

void solve(){
}

int main(){ _

	//SOLVE()
	int n=5;
	FOR(i,n)
	arr[i]=i+1;

	build(1,0,n-1);
	cout<<query(1,0,n-1,1,2)<<" ";
	update(1,0,n-1,1,14);
	cout<<query(1,0,n-1,1,2);
	return 0;
}
