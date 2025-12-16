class Solution {
public:

    int findKthLargest(vector<int>& nums, int k) {

       priority_queue<int>pq; 
        int n=nums.size();
        while(n--)
      pq.push(nums[n]);
    
        for(int i=1;i<k;i++){
            pq.pop();
        }
        return pq.top();
        
    }
};
