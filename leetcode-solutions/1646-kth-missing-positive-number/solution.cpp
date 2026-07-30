class Solution {
public:
      int check(vector<int>arr,int start,int end,int k){
        
        while(start<=end){
            int mid=start+(end-start)/2;
            int a=arr[mid]-(mid+1);
            
            if(k>a){
                start=mid+1;
            }
            else end=mid-1;
        }
        return start+k;
      }
    int findKthPositive(vector<int>& arr, int k) {
        return check(arr,0,arr.size()-1,k);
    }
};
