class Solution {
public:
    int maxArea(vector<int>& height) {
    int left=0;
    int right=height.size()-1;
    int water;
    int total=0;
    while(left<right){
        water=min(height[left],height[right])*(right-left);
      if(height[left]<height[right]){
        left++;
      }
      else{
        right--;
      }
total=max(total,water);

        }
        return total;
        
    }
};
