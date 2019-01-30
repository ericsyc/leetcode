# Keys and Rooms
class Solution(object):
    def canVisitAllRooms(self, rooms):
        """
        :type rooms: List[List[int]]
        :rtype: bool
        """
        visited = [False] * len(rooms)
        visited[0] = True
        stack = []
        stack.append(rooms[0])
        while stack:
            keys = stack.pop()
            for key in keys:
                if not visited[key]:
                    visited[key] = True
                    stack.append(rooms[key])
        return sum(visited) == len(rooms)