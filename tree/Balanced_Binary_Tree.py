# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def isBalanced(self, root):
        def h(root):
            if(root==None):
                return 0
            hg = h(root.left)
            hd = h(root.right)
            return 1 + max(hg, hd)
        if(root==None):
            return True
        if(abs(h(root.left) - h(root.right)) > 1):
            return False
        return self.isBalanced(root.left) and self.isBalanced(root.right)

        
