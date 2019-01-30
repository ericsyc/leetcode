# Sort Characters By Frequency
class Solution(object):
    def frequencySort(self, s):
        """
        :type s: str
        :rtype: str
        """
        pq = []
        dic = {}
        for ele in s:
            dic[ele] = dic.get(ele, 0) + 1

        ans = ''
        for char, freq in dic.items():
            heapq.heappush(pq,[freq, char])
        while pq:
            freq, char = heapq.heappop(pq)
            ans += freq * char
        return ans[::-1]
