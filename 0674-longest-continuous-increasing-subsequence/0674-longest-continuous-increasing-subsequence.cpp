class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int maxi = 1;
        int cnt = 1;
        for(int i = 1; i < nums.size();i++){
            if(nums[i] <= nums[i-1]) cnt = 1;
            else cnt++;
            maxi = max(maxi,cnt);
        }
        return maxi;
    }
};