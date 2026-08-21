class Solution {
    public int[] resultArray(int[] nums) {
      
        ArrayList<Integer>arr1=new ArrayList<>();
          ArrayList<Integer>arr2=new ArrayList<>();
          arr1.add(nums[0]);
          arr2.add(nums[1]);
          int n=nums.length;
          for(int i=2;i<n;i++){
              if(arr1.getLast()>arr2.getLast())arr1.add(nums[i]);
              else arr2.add(nums[i]);
          }
          arr1.addAll(arr2);
       int[] ans = new int[arr1.size()];

for (int i = 0; i < arr1.size(); i++) {
    ans[i] = arr1.get(i); 
}
          return ans;
        
    }
}
