class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start = 0, end = 0, maxLen = 0,n=s.length();
        unordered_set<char> charset;
        for(end=0;end<n;end++){
            while(charset.find(s[end])!=charset.end()){
                charset.erase(s[start++]);
                
            }
            charset.insert(s[end]);
            maxLen = max(maxLen,end-start+1);
        }
        return maxLen;
        
    }
};
