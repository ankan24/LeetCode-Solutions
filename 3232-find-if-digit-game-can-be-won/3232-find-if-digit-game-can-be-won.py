class Solution(object):
    def canAliceWin(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        sum1,sum2 = 0,0
        for ele in nums :
            if ele < 10 : sum1 += ele
            else : sum2 += ele
        
        if sum1>sum2 or sum2>sum1 : return True
        else : return False