class Solution(object):
    def judgeCircle(self, moves):
        """
        :type moves: str
        :rtype: bool
        """
        pos = [0,0]
        for ele in moves :
            if ele=='U' :
                pos[0] += 1
            if ele=='D' :
                pos[0] -= 1
            if ele=='L' :
                pos[1] -= 1
            if ele=='R' :
                pos[1] += 1
            
        if pos[0]==0 and pos[1]==0 :
            return True
        else :
             return False