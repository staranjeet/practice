
/*
ID: reachto1
PROG: ride
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

typedef long long int ll;

#define FOR(i,n) for(int i = 0; i < n; i++)
#define FORS(i,a,n) for(int i = a; i < n; i++)
#define RDARR(a,n) FOR(i,n) cin>>a[i];
#define SOLVE() int t;cin>>t;FOR(tc,t) solve();
#define PB push_back

int main() {
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");
  	string a, b;
    ll av=1,bv=1;
    fin >> a >> b;
    FOR(i,a.length())
    	av=(av*(a[i]-64))%47;
    FOR(i,b.length())
    	bv=(bv*(b[i]-64))%47;
    if(av==bv)
    	fout<<"GO\n";
    else
    	fout<<"STAY\n";
    return 0;
}
