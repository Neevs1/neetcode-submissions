class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxar = INT_MIN, l = 0,r=heights.size()-1;
        while(l<r){
            maxar = max(maxar,min(heights[l],heights[r])*(r-l));
            if(heights[l]<=heights[r]){
                l++;
            }else{
                r--;
            }
        }
        return maxar;
    }
};
