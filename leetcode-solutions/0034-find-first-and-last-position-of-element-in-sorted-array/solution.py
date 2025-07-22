class Solution(object):
    def searchRange(self, nums, target):
        b = [-1, -1]
        for i in range(len(nums)):
            if nums[i] == target:
                if b[0] == -1:
                    b[0] = i  # first occurrence
                b[1] = i  # update last occurrence
        return b

