#include <bits/stdc++.h>
using namespace std;
int main(){ int n,m; cin>>n>>m;
    vector<vector<int>>g(n+1);
    while(m--){ int u,v; cin>>u>>v; g[u].push_back(v); g[v].push_back(u); }
    queue<int>q; vector<int>vis(n+1,0);
    q.push(1); vis[1]=1;
    while(!q.empty()){
        int u=q.front(); q.pop(); cout<<u<<" ";
        for(int v:g[u]) if(!vis[v]) vis[v]=1, q.push(v);
    }
}
