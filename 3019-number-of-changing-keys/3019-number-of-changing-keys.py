class Solution(object):
    def countKeyChanges(self, s):
        """
        :type s: str
        :rtype: int
        """
        c = 0
        s = s.lower()
        for i in range(len(s)-1):
           if s[i]!=s[i+1] :
            c = c+1
        return c
