class Solution(object):
    def findMaxConsecutiveOnes(self, nums):
        a =b = 0

        for num in nums:
            if num:
             a += 1

            else:
                b = max(b,a)
                a = 0

        return max(b,a)         
