class Solution(object):
    def duplicateZeros(self, arr):
        i = 0
        j = len(arr)
        while(i < j):
            if(arr[i] == 0):
                arr.pop()

                arr.insert(i,0)
                i += 1
            i += 1

        """
        :type arr: List[int]
        :rtype: None Do not return anything, modify arr in-place instead.
        """
        
