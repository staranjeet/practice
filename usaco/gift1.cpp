
/*
ID: reachto1
PROG: gift1
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <string>
#include <map>
using namespace std;

typedef long long int ll;

#define FOR(i,n) for(int i = 0; i < n; i++)
#define FORS(i,a,n) for(int i = a; i < n; i++)
#define RDARR(a,n) FOR(i,n) cin>>a[i];
#define SOLVE() int t;cin>>t;FOR(tc,t) solve();
#define PB push_back

int main() {
    ofstream fout ("gift1.out");
    ifstream fin ("gift1.in");
    
    int n,init,give;
    fin>>n;
    string s,s1;
    map<string,int>m;
    map<int,string>index;
    FOR(i,n){
    	fin>>s;
    	m[s]=0;
    	index[i]=s;
    }
    FOR(i,n){
    	fin>>s;
    	fin>>init>>give;
    	m[s]-=init;
    	if(give)
    	{int each=init/give;
    	    	int left=init%give;
    	    	FOR(j,give){
    	    		fin>>s1;
    	    		m[s1]+=each;
    	    	}
    	    	m[s]+=left;}
    }
   
    FOR(i,n){
    	fout<<index[i]<<" "<<m[index[i]]<<endl;
    }
    return 0;
}
