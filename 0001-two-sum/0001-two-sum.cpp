class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target){
        map<int,int> mpp;
        vector<int> ans(2,0);
        for(int i = 0; i < nums.size();i++){
            int more = target - nums[i];
            if(mpp.find(more) != mpp.end()){
                ans[0] = i;
                ans[1] = mpp[more];
            }
            mpp[nums[i]] = i;
        }
        return ans;
    }
};