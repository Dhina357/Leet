class Solution(object):
    def detectCapitalUse(self, word):
        if word.islower():
            return True
        if word.isupper():
            return True
        
        if word.title() and word[1:].islower():
            return True
        return False
        """
        :type word: str
        :rtype: bool
        """
        
