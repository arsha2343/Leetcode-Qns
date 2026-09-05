class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> odd;
        vector<int> even;
        for(int i=0;i<nums.size();i++){
            if(nums[i] % 2 == 0) even.push_back(nums[i]);
            else odd.push_back(nums[i]);
        }
        vector<int> ans(nums.size(),0);
        int e = 0; 
        int o = 0; 
        for(int i = 0; i < nums.size(); i++){
            if(i % 2 == 0)
                ans[i] = even[e++];
            else
                ans[i] = odd[o++];
        }
        return ans;
    }
};