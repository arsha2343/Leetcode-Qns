class Solution {
public:

    vector<int> func(vector<int>& nums,vector<int>& arr){
        int n = nums.size();
        for(int i =0;i < nums.size();i++){
            if(nums[i] != 0) arr.push_back(nums[i]);
        }
        int i = arr.size();
        while(i < n){
            arr.push_back(0);
            i++;
        }
        return arr;
    }
    vector<int> applyOperations(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0;i < n - 1;i++){
            if(nums[i] == nums[i+1]){
                nums[i] *= 2;
                nums[i+1] = 0;
            }
        }
        vector<int> arr;
        func(nums,arr);
        return arr;
    }
};