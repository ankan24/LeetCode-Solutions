class Solution(object):
    def firstPalindrome(self, words):
        """
        :type words: List[str]
        :rtype: str
        """
        for ele in words :
            if ele == ele[::-1] :
                return ele
        return  ""

        