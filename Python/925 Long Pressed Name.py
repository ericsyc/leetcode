# Long Pressed Name
class Solution(object):
    def isLongPressedName(self, name, typed):
        """
        :type name: str
        :type typed: str
        :rtype: bool
        """
        if len(typed) < len(name):
            return False
        i, j = 0, 0
        while i < len(name) and j < len(typed):
            if name[i] != typed[j]:
                return False
            while i < len(name) and j < len(typed) and name[i] == typed[j]:
                i += 1
                j += 1
            if i == len(name):
                return j <= len(typed)
            if name[i] == name[i-1]:
                return False
            while j < len(typed) and typed[j] == typed[j-1]:
                j += 1
        return i == len(name) and j == len(typed)
    