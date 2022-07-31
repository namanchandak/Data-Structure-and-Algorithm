int rank[100000];
int parent[100000];


int findpar(int node)
{
    if(parent[node]==node)
    return node;
    return parent[node]=findpar[node];

}
void union(int v,int u)
{
    u=findparent(u);
    v=findparent(v);
    if(rank[u]>rank[v])
    {
        parent[v]=u;
    }
    else if(rank[u]<rank[v])
    {
        parent[u]=v;
    }
    else
    {
        parent [v]=u;
        rank[u]++;
    }

}

bool comp(node a,node b )
{
    return a.wt<b.wt;
}


int main()
(
    int n,m;
    cin>>n>>m;
    vector<node>edges;
    for (int i = 0; i < m; i++)
    {
        int wt,v,u;
        cin >>u>>v>>wt;
        edge.push_back(node(u,v,wt));

    }
    sort(edges.begin(),edges.end(),comp);
    vector<int>parent(n);
    for (int i = 0; i < n; i++)
    {
        parent[i]=i;
    }
    int cost=0;
    vector<int>rank(n,0);
    vector<pair<int ,int>>mst;
    for(auto it:edges)
    {
        if(findpar(it.v,parent)!=findpar(it.u,parent))
        {
            cost+=it.wt;
            mst.push_back({it.v,it.u});
            unionn(it.u,it.v,parent,rank);
        }
    }
    cout<<cost<<endl;
    for (auto it: mst)

    {
        /* code */
        cout<<it.first<<"\t"<<it.second<<endl;

    }
    

    
)