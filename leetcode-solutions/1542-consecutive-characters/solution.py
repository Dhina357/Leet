class Solution(object):
    def maxPower(self, s):
       
        m=1
        c=1
        p=''

        for i in s:
            if(i == p):
                c=c+1
                m=max(m,c)
            else:
                c=1
            p=i
        
        return m
