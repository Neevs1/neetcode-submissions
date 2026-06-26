class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> chars (26,0);
        int l = 0, r = 0, maxFreq = 0, maxLength = 0;
        while(r<s.size()){
            chars[s[r]-'A']++;
            maxFreq = max(maxFreq,chars[s[r]-'A']);
            while((r-l+1)-maxFreq > k){
                chars[s[l]-'A']--;
                l++;
            }
            if((r-l+1)-maxFreq <= k){
                maxLength = max(maxLength,(r-l+1));
            }
            r++;
        }
        return maxLength;
    }
};