class KthLargest {
    private: 
    priority_queue<int, vector<int>, greater<int>> pq;
    int rank;

public:
    KthLargest(int k, vector<int>& nums) {
        rank = k;
        int i  = 0;
        while(i < nums.size()){
            pq.push(nums[i]);
            i++;
            if(pq.size() > rank) pq.pop();
        }
    }
    
    int add(int val) {
      pq.push(val);
      if(pq.size() > rank) pq.pop();
      return pq.top();
        
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */