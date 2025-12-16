class Solution(object):
    def subtractProductAndSum(self, n):
        """
        :type n: int
        :rtype: int
        """
        s = 0
        m = 1
        while n > 0 :
            ld = n%10
            s += ld
            m *= ld
            n /= 10
        
        return m-s
        