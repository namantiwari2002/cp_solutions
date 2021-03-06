#include<bits/stdc++.h> 
using namespace std; 

void addEdge(vector<int> gh[] , int u , int v){
    gh[u].push_back(v);
    gh[v].push_back(u);
}

void printGraph(vector<int> gh[]){
    
    for(int i = 0 ; i < 3; i++){
        
        for(auto j : gh[i]){
            cout<< j <<"->" <<endl;
        }
        
    }
    
}

int main()
{
    
    vector<int> gh[3];
    
    addEdge(gh , 0 , 1);
    addEdge(gh , 1 ,2);
    
    printGraph(gh);
    
}
