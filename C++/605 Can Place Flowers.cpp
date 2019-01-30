class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int i = 1, ans = 0;
        if (flowerbed[0] == 0 && flowerbed[1] == 0) {
            flowerbed[0] = 1;
            ans++;
        }   
        while (i < flowerbed.size() - 1) {
            if (flowerbed[i-1] == 0 && flowerbed[i+1] == 0 && flowerbed[i] == 0) {
                flowerbed[i] = 1;
                ans++;
            }
            i++;
            if (ans >= n) return true;
        }
        if (flowerbed[i-1] == 0 && flowerbed[i] == 0) {
            ans++;
        }
        return ans >= n;
    }
};