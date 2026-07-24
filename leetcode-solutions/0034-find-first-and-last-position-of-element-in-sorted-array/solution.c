// Helper function to find either the first or last occurrence
int findBound(int* nums, int numsSize, int target, int findFirst) {
    int low = 0, high = numsSize - 1;
    int bound = -1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (nums[mid] == target) {
            bound = mid; 
            if (findFirst) {
                high = mid - 1;
            } else {
                low = mid + 1; 
            }
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return bound;
}

int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2;
    int* ans = (int*)malloc((*returnSize) * sizeof(int));
    
   
    ans[0] = findBound(nums, numsSize, target, 1); 
    ans[1] = findBound(nums, numsSize, target, 0); 
    
    return ans;
}

