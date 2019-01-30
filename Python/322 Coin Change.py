class Solution(object):
    def coinChange(self, coins, amount):
        MAX = float('inf')
        dp = [0] + [MAX] * amount
        for i in range(1, amount + 1):
            for coin in coins:
                if i >= coin:
                    dp[i] = min(dp[i], dp[i - coin] + 1)
        if dp[-1] == MAX:
            return -1
        return dp[-1]