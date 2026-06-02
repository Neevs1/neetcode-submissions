class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set <int> dup;
        for(int i=0;i<nums.size();i++){
            if(dup.find(nums[i])!=dup.end()){
                return true;
            }
            dup.insert(nums[i]);
        }
      return false;
    }
};
