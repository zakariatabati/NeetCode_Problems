# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def removeNthFromEnd(self, head, n):
        dummy = ListNode()
        dummy.next = head
        L = dummy
        R = head
        for i in range(0,n):
            R = R.next
        while R:
            L = L.next
            R = R.next
        L.next = L.next.next
        return dummy.next
        
