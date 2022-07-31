
void dfs(int node,int parent,vector<int>&vis,vector<int>&tim,vector<int>&low,int &timer,vector<int>adj[n])
{
    vis[node]=1;
    tim[node]=low[node]=timer++;
    for(auto it:adj[node])
    {
        if(it=parent)
        continue;
        if(!vis[it])
        {
            dfs(it,parent,vis,tim,low,timer,adj);
            if(tim[node]<low[it])
            cout<<node<<" "<<it<<endl;
            else
            {
                low[node]=min(low[node],tim[it]);

            }

        }
    }



}

int main()
{
    inr m,n;
    cin>>n>>m;

    vector<int>adj[n];
    for(int i=0;i<m;i++)
    {
        int v,u;
        cin>>v>>u;
        adj[v].push_back(u);
        adj[u].push_back(v);
   }

    vector<int>tim(n,-1);
    vector<int>low(n,-1);
    vector<int>vis(n,0);

    int timer=0;
    for(int i=0;i<n;i++)
    {
        if(!vis[i])
        {
            dfs(i,-1,vis,tim,low,timer,adj);
        }

    }

}