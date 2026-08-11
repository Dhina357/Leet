class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum=nums[0];
        int n=nums.size();
        if(n<2)return nums[0]+1;
        for(int i=0;i<n-1;i++){
            if(nums[i]!=nums[i+1]-1)break;
            else sum+=nums[i+1];
        }
           
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(nums[i]>=sum){
                
                if(nums[i]!=sum)
                return sum;
                sum++;
                }
        }
      
        return sum;
        
    }
};
