class Solution(object):
    def countDigits(self, num):
        """
        :type num: int
        :rtype: int
        """
        real = num
        count = 0
        while num > 0 :
            lw = num%10
            if real%lw==0 and lw!=0 :
                count = count+1
            num = num/10
        return count
        