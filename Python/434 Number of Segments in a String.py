# Number of Segments in a String
class Solution(object):
    def countSegments(self, s):
        """
        :type s: str
        :rtype: int
        """
        i=0
        count=0
        while i < len(s) and s[i] == ' ':
            i += 1
        while i<len(s):
            while i<len(s) and s[i] != ' ':
                i+=1
            count+=1
            while i<len(s) and s[i]==' ':
                i+=1
            
        return count