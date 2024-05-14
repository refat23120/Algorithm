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
int graph[N][N];
 
int main() {
    int n,m;
    cin>>n>>m;
    REP(i,m){
        int v1,v2;
        cin>>v1>>v2;
        graph[v1][v2] = 1;
        graph[v2][v1] = 1;
    }
    // o(n^2) - space complexity
    return 0;
}