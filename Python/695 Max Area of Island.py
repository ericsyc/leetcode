class Solution(object):
    def maxAreaOfIsland(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: int
        """
        ans = 0
        m, n = len(grid), len(grid[0])
        visited = []
        for i in range(m):
            visited.append([False] * n)
        for i in range(m):
            for j in range(n):
                if grid[i][j] and not visited[i][j]:
                    tmp = 0
                    stack = [(i, j)]
                    visited[i][j] = True
                    while stack:
                        r, c = stack.pop()
                        tmp += 1
                        for nr, nc in ((r-1,c), (r,c-1), (r+1,c), (r,c+1)):
                            if (0 <= nr < m and 0 <= nc < n) and grid[nr][nc] and not visited[nr][nc]:
                                visited[nr][nc] = True
                                stack.append((nr, nc))
                    ans = max(ans, tmp)
        return ans 
                        
