class Solution {
public:
  
//     void solve(vector<int>& rowCosts, vector<int>& colCosts , int r , int c){
        
        
        
//     }
    
    int minCost(vector<int>& startPos, vector<int>& homePos, vector<int>& rowCosts, vector<int>& colCosts) {
        
        int ans = 0;
        
        int n = homePos[0];
        int m = homePos[1];
        
        int i = startPos[0];
        int j = startPos[1];
        
        bool bit;
        
        if(i == n && j == m){
            bit = true;
        }else{
            bit = false;
        }
        
        while(!bit){
            
            if(i<=n && j <= m){
            
            if(i+1 <= n && j+1 <= m){
               if(rowCosts[i+1]<colCosts[j+1]){
                   i = i+1;
                   ans += rowCosts[i];
               }else{
                    j = j+1;
                   ans += colCosts[j];
               } 
            }else if(i+1 <= n && j+1 > m){
                i = i+1;
                ans += rowCosts[i];
            }else if(i+1 > n && j+1 <= m){
                   j = j+1;
                   ans += colCosts[j];
            }
            
            if(i == n && j == m)bit = true;
               ////////////////////////// 
            }else if(i>=n && j<=m){
                
                
                if(i-1 >= n && j+1 <= m){
               if(rowCosts[i-1]<colCosts[j+1]){
                   i = i-1;
                   ans += rowCosts[i];
               }else{
                    j = j+1;
                   ans += colCosts[j];
               } 
            }else if(i-1 >= n && j+1 > m){
                i = i-1;
                ans += rowCosts[i];
            }else if(i-1 < n && j+1 <= m){
                   j = j+1;
                   ans += colCosts[j];
            }
            
            if(i == n && j == m)bit = true;
                
             //////////////////////////////   
            }else if(i<=n && j>=m){
                
                
                 if(i+1 <= n && j-1 >= m){
               if(rowCosts[i+1]<colCosts[j-1]){
                   i = i+1;
                   ans += rowCosts[i];
               }else{
                    j = j-1;
                   ans += colCosts[j];
               } 
            }else if(i+1 <= n && j-1 < m){
                i = i+1;
                ans += rowCosts[i];
            }else if(i+1 > n && j-1 >= m){
                   j = j-1;
                   ans += colCosts[j];
            }
                
                
             //////////////////////////////   
            }else if(i>=n && j>=m){
                
                 if(i-1 >= n && j-1 >= m){
               if(rowCosts[i-1]<colCosts[j-1]){
                   i = i-1;
                   ans += rowCosts[i];
               }else{
                    j = j-1;
                   ans += colCosts[j];
               } 
            }else if(i-1 >= n && j-1 < m){
                i = i-1;
                ans += rowCosts[i];
            }else if(i-1 < n && j-1 >= m){
                   j = j-1;
                   ans += colCosts[j];
            }
                
            }    
            
        }
        
        return ans;
        
    }
};