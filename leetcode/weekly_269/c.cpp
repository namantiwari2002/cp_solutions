class Solution {
public:
    int minimumDeletions(vector<int>& v) {
        
        int mai = std::max_element(v.begin(),v.end()) - v.begin();
        int mii = std::min_element(v.begin(),v.end()) - v.begin();
        
        int a = max(mai,mii);
        int b = min(mii,mai);
        
        // cout<<a<<" "<<b<<endl;
        
        int n = v.size();
        int aa = a+1;
        int bb = b+1+n-a;
        int cc = n-b;
        
        return min({aa,bb,cc});
        
    }
};