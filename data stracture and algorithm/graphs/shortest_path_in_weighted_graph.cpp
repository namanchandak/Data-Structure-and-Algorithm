#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void topo(int node,vector<pair<int ,int>>adj[],vector<int>&vis,stack<int>&s)
{
    vis[node]=1;
    for(auto it:adj[node].first)
    {
        if(!vis[it])
        topo(node,adj,vis,s);
    }
    s.push(node);
}


void shortest_path(int V,int src,vector<pair<int ,int>>adj[])
{
    vector<int>vis(V,0);
    stack<int>s;
    for (int i = 0; i < V; i++)
    {
        if(!vis[i])
        topo(i,adj,vis,s);
        
    }
    vis.clear();
    vector<int>dist(VINT_MAX);
    dist[src]=0;
    while (!s.empty())
    {
        int node=s.top();
        s.pop();
        if(dist[node]!=INT_MAX)
        
        for(auto it:adj[node].first)
        {
            if(dist[it.first]>dist[node]+it.second)
            dist[it.first]=dist[node]+it.second;
        }
    }
    



    
}