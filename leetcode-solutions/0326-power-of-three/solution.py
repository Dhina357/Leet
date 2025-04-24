class Solution(object):
    def isPowerOfThree(self, n):
        if n<=0:
           return False
        if n==1:
           return True
        for x in range(0,30,1):
           if n==pow(3,x):
            return True
        return False    
        """
        :type n: int
        :rtype: bool
        """
        
