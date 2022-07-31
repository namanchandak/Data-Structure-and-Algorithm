void bfs_short(vector<int>adj[],int V,int src)
{
    vector<int>dist(V,__INT_MAX__);
    queue<int>q;
    q.push(src);
    dist[src]=0;

    while(!q.empty())
    {
        int node=q.front();
        q.pop();
        for(auto it:adj[node])
        {
            if(dist[it]>dist[node]+1)
            {
                dist[it]=dist[node]+1;
                q.push(it);
            }
        }
    }
    return dist;


}