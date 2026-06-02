class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for(int a : nums){
            m[a]++;
        }
        vector<vector<int>> buckets (nums.size()+1);
        for(const auto& it:m){
            buckets[it.second].push_back(it.first);
        }
        vector<int> ans;
        
        for(int i=buckets.size()-1;i>=0 && k>0;i--){
            for(int num:buckets[i]){
                ans.push_back(num);
                k--;
                if(k==0)break;
            }
        }
        return ans;
        
    }
};
