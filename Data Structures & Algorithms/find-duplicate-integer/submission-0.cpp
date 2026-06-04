class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int idx = 0;
        for(int x:nums){
            idx = abs(x)-1;
            if(nums[idx]<0){
                return abs(x);
            }else{
                nums[idx]*=-1;
            }
        }
        return 0;
        
    }
};
