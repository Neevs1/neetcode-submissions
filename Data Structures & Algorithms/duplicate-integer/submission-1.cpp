class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set <int> dup;
        for(int i=0;i<nums.size();i++){
            dup.insert(nums[i]);
        }
      return !(dup.size()==nums.size());
    }
};
