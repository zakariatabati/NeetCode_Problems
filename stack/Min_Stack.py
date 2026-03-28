class MinStack(object):

    def __init__(self):
        self.data = []

    def push(self, val):
        """
        :type val: int
        :rtype: None
        """
        self.data.append(val)
        

    def pop(self):
        """
        :rtype: None
        """
        self.data.pop()
        

    def top(self):
        """
        :rtype: int
        """
        return self.data[len(self.data)-1]
        

    def getMin(self):
        """
        :rtype: int
        """
        return min(self.data)


# Your MinStack object will be instantiated and called as such:
# obj = MinStack()
# obj.push(val)
# obj.pop()
# param_3 = obj.top()
# param_4 = obj.getMin()
