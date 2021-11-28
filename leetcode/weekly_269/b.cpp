using ll = long long;
using ld = long double;

class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        
        int n = nums.size();
        vector<int> ans(n);
        vector<ll> nc(n);
        nc[0] = nums[0];
        for(int i = 1 ; i<nums.size() ; i++){
            nc[i] = nums[i];
            nc[i] = nc[i]+nc[i-1];
        }
        
        for(int i = 0 ;i<nums.size() ; i++){
            
            if(i-k>=0 && i+k <n){
                ans[i] = (nc[i+k]-nc[i-k] + nums[i-k])/(2*k+1);
            }else{
                ans[i] = -1;
            }
            
        }
        
        return ans;
        
        
    }
};