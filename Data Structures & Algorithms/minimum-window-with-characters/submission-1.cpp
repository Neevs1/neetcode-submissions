class Solution {
public:
    string minWindow(string s, string t) {
        if(s.length()<t.length())return "";
        
        unordered_map<char,int> tcount, scount;
        for(char x : t){
            tcount[x]++;
        }
        int l = 0, r = 0, minwin = INT_MAX, first = 0,last = 0, have = 0, need = tcount.size();
        while(r<s.length()){
            char c = s[r];
            scount[c]++;

            if(tcount.contains(c)&&scount[c]==tcount[c]){
                have++;
            }
            while(have == need){
                if((r-l+1)<minwin){
                    minwin = (r-l+1);
                    first = l;
                    last = r;
                }
                scount[s[l]]--;
                if(tcount.contains(s[l])&&scount[s[l]]<tcount[s[l]]){
                    have--;
                }
                l++;
            }
            r++;
        }
        return minwin == INT_MAX ? "" : s.substr(first,minwin);
    }
};
