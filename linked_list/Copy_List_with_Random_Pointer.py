"""
# Definition for a Node.
class Node:
    def __init__(self, x: int, next: 'Node' = None, random: 'Node' = None):
        self.val = int(x)
        self.next = next
        self.random = random
"""

class Solution:
    def copyRandomList(self, head: 'Optional[Node]') -> 'Optional[Node]':
        maplist = {None:None}

        cur = head
        while cur:
            copy = Node(cur.val)
            maplist[cur] = copy
            cur = cur.next
        cur = head
        while cur :
            copy = maplist[cur]
            copy.next = maplist[cur.next]
            copy.random = maplist[cur.random]
            cur = cur.next
        return maplist[head]


        
