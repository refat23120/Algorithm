#include<bits/stdc++.h>
using namespace std;

const int mx = 1e3+10;
vector<int> G[mx];
vector<bool> vis(mx);

void BFS(int vertex){
    queue<int> q;
    vis[vertex] = true;
    q.push(vertex);
    while(!q.empty()){
        int vertexChild = q.front();
        cout<<vertexChild<<"\n";
        q.pop();
        for(int child : G[vertexChild]){
            if(!vis[child]){
                vis[child] = true;
                q.push(child);
            }
        }
    }
}

int main(){
    int n,m; cin>>n>>m ;
    for(int i=0; i<m; i++){
        int v1,v2; cin>>v1>>v2;
        G[v1].push_back(v2);
        G[v2].push_back(v1);
    }
    BFS(0);
    return 0;
}