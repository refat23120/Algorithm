#include <algorithm>
#include <queue>
#include <iostream>
#include <set>
#include <string>
#include <vector>
 
#define REP(i,n) for(int i = 0; i < (n); ++i)
#define FOR(i,a,b) for(int i = (a); i <= (b); ++i)
#define FORD(i,a,b) for(int i = (a); i >= (b); --i)
#define FORE(it,V) for(__typeof__(V.begin()) it = V.begin(); it != V.end(); ++it)
 
#define PB push_back
#define MP make_pair
#define FI first
#define SE second
#define ll long long
using namespace std;

const int N = 1e3+10;
vector<int> graph[N];
//vector<pair<int,int>> graph[N];

set<int> s;

int main() {
    int n,m;
    cin>>n>>m;
    // int v1,v2,w8;
    // cin>>v1>>v2>>w8;
    REP(i,m){
        int v1,v2;
        cin>>v1>>v2;
        graph[v1].PB(v2);
        //graph[v1].PB({v2,w8});
        graph[v2].PB(v1);
        //graph[v2].PB({v1,w8});
        s.insert(v1);
        s.insert(v2);
    }
    for(auto g : s){
        cout<<g<<" ->";
        for(auto child : graph[g]){
           cout<<" "<<child;
        }
        cout<<"\n";
    }
    
    //o(N^2)
    return 0;
}