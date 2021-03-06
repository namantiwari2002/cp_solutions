// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:

    void DFLUtil(vector<int> adj[] , vector<bool> &visited , vector<int> &terms, int u){
        
        visited[u] = true;
        terms.push_back(u);
        for(int i = 0 ; i < adj[u].size() ; i++){
            
            if(visited[adj[u][i]] == false){
                DFLUtil(adj , visited , terms , adj[u][i]);
            }
            
        }
        
    }

	vector<int>dfsOfGraph(int V, vector<int> adj[]){
	   
	   vector<int> terms;
	   vector<bool> visited(V , false);
	   
	   
	   
	   for(int u = 0 ; u < V ; u++){
	       if(visited[u] == false){
	       DFLUtil(adj , visited , terms , u);
	       }
	   }
	   
	   return terms;
	   
 	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    		adj[v].push_back(u);
    	}
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int>ans=obj.dfsOfGraph(V, adj);
        for(int i=0;i<ans.size();i++){
        	cout<<ans[i]<<" ";
        }
        cout<<endl;
	}
	return 0;
}  // } Driver Code Ends