class Solution(object):
    def strStr(self, haystack, needle):
     for i in haystack:
        if needle not in haystack:
            return -1
        
        return haystack.find(needle)
