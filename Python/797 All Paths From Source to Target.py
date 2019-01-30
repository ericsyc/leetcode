class Solution(object):
    def allPathsSourceTarget(self, graph):
        """
        :type graph: List[List[int]]
        :rtype: List[List[int]]
        """
        ans = []
        stack = [(graph[0],[])]
        while stack:
            curr, route = stack.pop()
            for ele in curr:
                if ele == len(graph) - 1:
                    ans.append(route + [len(graph) - 1])
                    continue
                stack.append((graph[ele], route + [ele]))
        return ans