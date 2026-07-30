class Solution {
private:
    int countstudents(vector<int>& nums, int pages){
        int students = 1;
        long long pagesstudent = 0;
        for(int i = 0; i < nums.size();i++){
            if(pagesstudent + nums[i] <= pages){
                pagesstudent += nums[i];
            }
            else {
                students += 1;
                pagesstudent = nums[i];
            }
        }
        return students;
    }
public:
    int splitArray(vector<int>& nums, int k) {
        if(k > nums.size()) return -1;
        int low = *max_element(nums.begin(),nums.end());
        int high = accumulate(nums.begin(),nums.end(),0);
        while(low <= high){
            int mid = low + (high - low ) / 2;
            int students = countstudents(nums,mid);
            if(students > k) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        return low;
    }
};