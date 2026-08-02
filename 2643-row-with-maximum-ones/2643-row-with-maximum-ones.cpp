class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int rows = mat.size();
        int cols = mat[0].size();
        int maxi = 0;
        
        vector<int> ans(2,0);
        for(int i = 0; i < rows; i++){
            int cntone = 0;
            for(int j = 0; j < cols; j++){
                if(mat[i][j] == 1) cntone += 1;
            }
            if(cntone > maxi){
                maxi = cntone;
                ans[0] = i;
                ans[1] = cntone;
            }
        }
        return ans;
    }
};