class Solution {
public:
    bool sameFreq(vector<int>& f1, vector<int>& f2){
        for(int i=0;i<26;i++){
            if(f1[i]!=f2[i])return false;
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length())return false;
        vector<int> freq1(26,0);
        vector<int> freq2(26,0);
        for(char x : s1){
            freq1[x-'a']++;
        }
        int l = 0, r = 0;
        while(r<s1.length()){
            freq2[s2[r++]-'a']++;
            
        }
        if(sameFreq(freq1,freq2))return true;
        if(s1.length()==s2.length())return false;
        for(r = s1.length();r<s2.length();r++){
            freq2[s2[r]-'a']++;
            freq2[s2[l++]-'a']--;
            if(sameFreq(freq1,freq2))return true;
        }
        return false;
    
    }
};