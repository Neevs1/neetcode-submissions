class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numbers(nums.begin(),nums.end());
        int maxlen = 0;
        
        for(int num:numbers){
            if(!numbers.contains(num-1)){
                int length = 1;
                while(numbers.contains(num+length)){
                    length++;
                }
                maxlen = max(maxlen,length);
            }
        }
        return maxlen;
    }
};
