class Solution(object):
    def convertToTitle(self, columnNumber):
        r = ''
        while( columnNumber>0):
             columnNumber -= 1
             r = chr( columnNumber%26+65) + r
             columnNumber /= 26
        return r

        """
        :type columnNumber: int
        :rtype: str
        """
        
