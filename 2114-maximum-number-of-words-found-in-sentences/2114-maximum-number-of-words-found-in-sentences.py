class Solution(object):
    def mostWordsFound(self, sentences):
        """
        :type sentences: List[str]
        :rtype: int
        """
        ans = 0
        for ele in sentences :
            c = 0
            for i in ele :
                if i == ' ' :
                    c += 1
            ans = max(ans,c)
        return ans+1
        