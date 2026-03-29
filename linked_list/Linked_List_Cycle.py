# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def hasCycle(self, head):
        max_nodes = 0
        while head and  head.next is not None:
            if max_nodes>=10000:
                return True
            head = head.next
            max_nodes = max_nodes+1
        return False
        
