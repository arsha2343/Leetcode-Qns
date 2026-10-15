class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int largest = nums[0];
        for(int i = 0;i  < nums.size();i++){
            int pdt = nums[i];
            largest = max(largest, pdt);
            for(int j = i + 1; j < nums.size();j++){
                pdt *= nums[j];
                largest = max(pdt,largest);
            }
        }
        return largest;
    }
};