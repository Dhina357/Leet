class KthLargest {
public:
   priority_queue<int ,vector<int>,greater<int>>ans;
   int n;
    KthLargest(int k, vector<int>& nums) {
        int size=nums.size();
       for(auto a:nums){
        ans.push(a);
        if(ans.size()>k){
            ans.pop();
        }
       }
      n=k;
    }
    
    int add(int val) {
        ans.push(val);
        if(ans.size()>n){
            ans.pop();
        }
       
         return ans.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
