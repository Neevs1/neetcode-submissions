class Solution {
    public boolean hasDuplicate(int[] nums) {
        HashSet <Integer> h = new HashSet <Integer>();
        for(int i=0;i<nums.length;i++){
            h.add(nums[i]);
        }
        return !(nums.length==h.size());
 
    }
}
