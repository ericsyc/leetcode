# Min Cost Climbing Stairs
class Solution(object):
    def minCostClimbingStairs(self, cost):
        """
        :type cost: List[int]
        :rtype: int
        """
        ans = [0,0] + [ele for ele in cost]
        for i in range(2, len(cost)):
            ans[i+2] = min(ans[i+1], ans[i]) + cost[i]
        return min(ans[-1], ans[-2])