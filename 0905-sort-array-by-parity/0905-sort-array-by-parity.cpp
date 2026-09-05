class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> oddarr;
        vector<int>evenarr;
        for(int i = 0;i<nums.size();i++){
            if(nums[i] % 2 == 0) evenarr.push_back(nums[i]);
            else oddarr.push_back(nums[i]);
        }
        vector<int> ans;
        for(auto it1: evenarr){
            ans.push_back(it1);
        }
        for(auto it2: oddarr){
            ans.push_back(it2);
        }
        return ans;
    }
};