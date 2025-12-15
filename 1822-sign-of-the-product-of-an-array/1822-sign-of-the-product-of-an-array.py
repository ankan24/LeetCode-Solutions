class Solution(object):
    def arraySign(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        prod = 1
        for i in nums :
            prod *= i
    
        if prod > 0 :
            return 1
        elif prod < 0 :
            return -1
        else :
            return 0
        