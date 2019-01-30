# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def numComponents(self, head, G):
        """
        :type head: ListNode
        :type G: List[int]
        :rtype: int
        """
        ans = 0
        curr = head
        while curr:
            if curr.val not in G:
                curr = curr.next
            else:
                while curr.val in G:
                    curr = curr.next
                ans += 1
        return ans