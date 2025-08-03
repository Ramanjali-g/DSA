class Solution(object):
    def largestAltitude(self, gain):
        """
        :type gain: List[int]
        :rtype: int
        """
        i=0
        j=0
        for g in gain:
            i += g
            j = max(j,i)
        return j
        