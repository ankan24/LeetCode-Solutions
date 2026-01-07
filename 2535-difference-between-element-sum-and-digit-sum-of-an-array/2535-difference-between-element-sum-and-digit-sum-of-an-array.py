class Solution(object):
    def differenceOfSum(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        ele_sum = 0
        dig_sum = 0
        for ele in nums :
            ele_sum += ele
            while ele > 0 :
                rem = ele%10
                dig_sum += rem
                ele /= 10
        return ele_sum-dig_sum
        