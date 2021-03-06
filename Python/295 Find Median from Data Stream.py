# Find Median from Data Stream
from heapq import *
class MedianFinder(object):

    def __init__(self):
        """
        initialize your data structure here.
        """
        self.heaps = [], []
        

    def addNum(self, num):
        """
        :type num: int
        :rtype: void
        """
        small, large = self.heaps
        heappush(large, -heappushpop(small, -num))
        if len(large) > len(small):
            heappush(small, -heappop(large))
        

    def findMedian(self):
        """
        :rtype: float
        """
        small, large = self.heaps
        if len(large) < len(small):
            return -float(small[0])
        return (large[0] - small[0]) / 2.0
        


# Your MedianFinder object will be instantiated and called as such:
# obj = MedianFinder()
# obj.addNum(num)
# param_2 = obj.findMedian()