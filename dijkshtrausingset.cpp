//dijkstr using sets  
//T.c=E log V;  
vector<int> dijkstra(vector<vector<pair<int, int>>> &adj, int src) {
    set<pair<int ,int>> st;
    vector<int> dist(V,1e9);

    st.insert({0,S});
    dist[S]=0;

    while(!st.empty()){
        auto it = *(st.begin());
        int node = it.second;
        int dis=it.first;
        st.erase(it);

        for(auto it : adj[node]){
            int adjNoded =it[0];
            int wt=it[src];
            if(dist +wt < dist[adjNode]){
                if(dist[adjNode] != 1e9)
                st.erase({dist[adjNode],adjNode});
                
                dist[adjNode]=dis+wt;
                st.insert({dist[adjNode],adjNode});
            }
        }
    }
    return dist;
}