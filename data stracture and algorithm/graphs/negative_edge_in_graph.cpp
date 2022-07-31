


int main()
{
vector<int>dist(n,INT_MAX);
	    dist[0]=0;
	    for(int i=1;i<=n-1;i++)
	    {
	        for(auto it:edges)
	        {
	            if( dist[it[0]]!=INT_MAX &&dist[it[0]]+it[2]<dist[it[1]])
	            dist[it[1]]=dist[it[0]]+it[2];
	        }
	        
	    }
	    
	    int f-0;
	        for(auto it:edges)
	        {
	            if(dist[it[0]]+it[2]<dist[it[1]])
	            cout<<"negative cycle";
                f=1;
                break;
	        }
	    if(!f)
        {
            for(int i=0;i<n;i++)
            {
                cout<<dist[i];<<endl;
            }
        }    
	    
	    return 0;
}