# Implement Stack using Queues
class MyStack:

    def __init__(self):
        """
        Initialize your data structure here.
        """
        self.queue1 = []
        self.queue2 = []
        

    def push(self, x):
        """
        Push element x onto stack.
        :type x: int
        :rtype: void
        """
        if self.queue2:
            ele = self.queue2.pop(0)
            self.queue2.append(x)
            self.queue1.append(ele)
        else:
            self.queue2.append(x)
        

    def pop(self):
        """
        Removes the element on top of the stack and returns that element.
        :rtype: int
        """
        if self.queue2:
            ele = self.queue2.pop(0)
            for x in self.queue1[:-1]:
                self.queue2.append(self.queue1.pop(0))
            self.queue2, self.queue1 = self.queue1, self.queue2
            return ele
        
            
        
        
        

    def top(self):
        """
        Get the top element.
        :rtype: int
        """
        return self.queue2[0]
        

    def empty(self):
        """
        Returns whether the stack is empty.
        :rtype: bool
        """
        return len(self.queue2)==0
        


# Your MyStack object will be instantiated and called as such:
# obj = MyStack()
# obj.push(x)
# param_2 = obj.pop()
# param_3 = obj.top()
# param_4 = obj.empty()