class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        int x = 1 << n;
        vector<vector<int>> ans;
        for(int j = 0; j < x ;j++){
            vector<int> list;
            for(int i = 0 ; i < n;i++){
                if((j & (1 << i)) != 0) list.push_back(nums[i]);
            }
            ans.push_back(list);
        }
        return ans;
    }
};