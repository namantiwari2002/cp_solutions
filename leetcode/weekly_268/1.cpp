class Solution {
public:
    int maxDistance(vector<int>& colors) {
        
        int ans = INT_MIN;
       
        for(int i = 0 ; i<colors.size() ; i++){
            
            for(int j = colors.size()-1 ; j>=i ; j--){
                
                if(colors[i] != colors[j]){
                    ans = max(ans,abs(j-i));
                }
                
            }
            
        }
        
        return ans;
        
    }
};