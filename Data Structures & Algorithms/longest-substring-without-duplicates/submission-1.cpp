class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start = 0, end = 0, maxLen = 0;
        unordered_set<char> charset;
        for(end=0;end<s.length();end++){
            while(charset.find(s[end])!=charset.end()){
                charset.erase(s[start]);
                start++;
            }
            charset.insert(s[end]);
            maxLen = max(maxLen,end-start+1);
        }
        return maxLen;
        
    }
};
