# Custon Sort String
class Solution(object):
    def customSortString(self, S, T):
        """
        :type S: str
        :type T: str
        :rtype: str
        """
        ans = ''
        dic = {}
        dif = {}
        for t in T:
            dic[t] = dic.get(t, 0) + 1
            if t not in S:
                dif[t]  = dif.get(t, 0) + 1
        for s in S:
            ans += s * dic.get(s, 0)
        for ele in dif:
            ans += ele * dif[ele]
        return ans

        
            
            