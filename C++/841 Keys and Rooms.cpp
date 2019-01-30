class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<bool> visited(rooms.size(), false);
        visited[0] = true;
        stack<int> mystack;
        mystack.push(0);
        while (!mystack.empty()) {
            int curr = mystack.top();
            mystack.pop();
            for(auto key : rooms[curr]) {
                if (!visited[key]) {
                    visited[key] = true;
                    mystack.push(key);
                }
            }
        }
        for (int i = 0; i < visited.size(); i++) {
            if (visited[i] == false) return false;
        }
        return true;
    }
};