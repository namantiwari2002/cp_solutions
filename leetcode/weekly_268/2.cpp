class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        
        int tcap = capacity;
        
        int ans = 1;
        
        for(int i = 0 ; i<plants.size() ; i++){
            
            if(tcap>=plants[i]){
                tcap -= plants[i];
                if(i != plants.size()-1)ans++;
            }else{
                tcap = capacity-plants[i];
                ans += ((i+1)*2 - 2);
              if(i != plants.size()-1)ans++;
            }
            
        }
        
        return ans;
        
    }
};