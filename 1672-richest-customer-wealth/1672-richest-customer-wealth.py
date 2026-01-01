class Solution(object):
    def maximumWealth(self, accounts):
        """
        :type accounts: List[List[int]]
        :rtype: int
        """
        ans = 0
        for ele in accounts :
            total = 0
            for i in ele :
                total += i
            ans = max(ans,total)
        return ans