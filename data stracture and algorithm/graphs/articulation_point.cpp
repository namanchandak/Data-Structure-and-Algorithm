#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void dfs(int node,int parent,vector<int>&tim,vector<int>&low,vector<int>&vis,int &timer,vector<int>adj[],vector<int>&arti)
{
    vis[node]=1;
    low[node]=tim[node]=timer++;
    int child=0;
    for(auto it:adj[node])
    {
        if(it==parent)
        continue;

        if(!vis[it])
        {
            dfs(it,node,tim,low,vis,timer,adj,arti );
            low[node]=min(low[node],low[it]);

            if(low[it]>=tim[node] &&parent!=-1)
            arti[node]=1;
        }
        else
        low[node]=min(low[node],tim[it]);

    }
    if (parent==-1&& child>1)
    {
        arti[node]=1;
    }
}



int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>adj[n];

    for(int i=0;i<m;i++)
    {
        int u, v;
        cin>>u>>v;
        adj[v].push_back(u);
        adj[u].push_back(v);
    }

    vector<int>tim(n,-1);
    vector<int>low(n,-1);
    vector<int>vis(n,0);
    vector<int>arti(n,0);

    int timer=0;
    for(int i=0;i<n;i++)
    {
        if(!vis[i])
        dfs(i,-1,tim,low,vis,timer,adj,arti );
    }
    for(int i=0;i<n;i++)
    {
        if(arti[i]==1)
        cout<<i;
    }
}
