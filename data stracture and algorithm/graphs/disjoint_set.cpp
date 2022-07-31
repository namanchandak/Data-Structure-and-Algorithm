int rank[100000];
int parent[100000];

void makeset()
{
    for (int i = 0; i < count; i++)
    {
        /* code */
        parent[i]=i;
        rank[i]=0;
    }
    
}
int findparent(int node)
{
    if(parent[node]==node)
    return node;
    return parent[node]=findparent[node];

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

int main ()
{


}