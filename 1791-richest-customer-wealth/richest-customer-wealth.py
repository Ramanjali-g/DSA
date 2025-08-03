class Solution(object):
    def maximumWealth(self, accounts):
        """
        :type accounts: List[List[int]]
        :rtype: int
        """
        ans=0
        for n in accounts:
            ans=max(ans,sum(n))
        # I was 12 years old when I post this solution,plz UPVOTE!
        return ans
        