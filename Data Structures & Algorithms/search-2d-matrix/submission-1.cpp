class Solution {
    
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size(), l = 0, r = m-1,index = -1;
        int mid;
        while(l<=r){
            mid = (r+l)/2;
            if(target>matrix[mid][n-1]){
                l=mid+1;
            }else if(target<matrix[mid][0]){
                r=mid-1;
            }else{
                break;
            }
        }
        if (l > r) return false;
        int idx = mid; 
        l = 0, r = n-1;
        while(l<=r){
            int mid = (l+r)/2;
            if(matrix[idx][mid]==target)return true;
            if(matrix[idx][mid]>target){
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        return false;
    }
};