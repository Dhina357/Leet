class Solution(object):
    def scoreOfString(self, s):
        score=0
        a=0
        l=len(s)
        for i in range (0,l-1,1):
            a=ord(s[i])-ord(s[i+1])
            if a<0:
                a=a*-1
            score+=a
        return score        
        """
        :type s: str
        :rtype: int
        """
        
