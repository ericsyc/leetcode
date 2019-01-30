# Complex Number Multiplication
class Solution:
    def complexNumberMultiply(self, a, b):
        """
        :type a: str
        :type b: str
        :rtype: str
        """
        r1 = int(a.split('+')[0])
        c1 = int(a.split('+')[1][:-1])
        r2 = int(b.split('+')[0])
        c2 = int(b.split('+')[1][:-1])
        r = r1 * r2 - c1 * c2
        c = r1 * c2 + r2 * c1
        return str(r) + '+' + str(c) + 'i'