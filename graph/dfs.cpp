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

const int N = 1e5+10;
vector<int> g[N];
bool vis[N];

void dfs(int vertex){
    /* Take action on vertex after entering
    the vertex */
    cout<<vertex<<"\n";
    vis[vertex] = true;
     for(int child: g[vertex]){
        /* Take action on child before
        entering the child node */
        if(vis[child]) continue;
        dfs(child);
        /* Take action on vertex before 
        exiting the code */
     }
}

int main() {
    int n,m;
    cin>>n>>m;
    REP(i,m){
        int v1,v2;
        cin>>v1>>v2;
        g[v1].PB(v2);
        g[v2].PB(v1);
    }
    dfs(1);
    return 0;
}