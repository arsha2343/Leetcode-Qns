class Solution {
private:
    int findmaxi(vector<int>& nums){
        int maxi = INT_MIN;
        for(int i = 0; i < nums.size();i++){
            if(nums[i] > maxi) maxi = nums[i];
        }
        return maxi;
    }
    int check(vector<int>& nums, int mid){
        int sum = 0;
        for(int i = 0; i < nums.size();i++){
            sum += ceil((double)nums[i] / (double)mid);
        }
        return sum;
    }
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low  = 1;
        int high = findmaxi(nums); 
        while(low <= high){
            int mid = low + (high - low) /2;
            int reqans = check(nums,mid);
            if(reqans <= threshold) high = mid - 1;
            else low = mid + 1;
        }
        return low ;
    }
};