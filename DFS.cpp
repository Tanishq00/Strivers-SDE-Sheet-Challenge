#include<bits/stdc++.h>
using namespace std;
void addEdge(int u,int v, vector<int> graph[]){
    graph[u].push_back(v);
    graph[v].push_back(u);
}
void dfs(vector<bool> &vis, int src , vector<int> graph[]){
    if(vis[src]==true) return;
    vis[src] = true;
    cout<<src<<" ";
    for(int i=0;i<graph[src].size();i++){
       dfs(vis,graph[src][i],graph);
    }
}
int main(){
    int V,E;
    cin>>V>>E;
    vector<int> graph[V];
    for(int i=0;i<E;i++){
        int x,y; cin>>x>>y;
        addEdge(x,y,graph);
    }
    vector<bool> vis(V,false);
    dfs(vis,0,graph);
}